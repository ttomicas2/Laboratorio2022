<!DOCTYPE html>
<html lang="en">

<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1">
    <link href="https://cdn.jsdelivr.net/npm/bootstrap@5.2.0/dist/css/bootstrap.min.css" rel="stylesheet"
        integrity="sha384-gH2yIJqKdNHPEq0n4Mqa/HGKIhSkIHeL5AyhkYV8i59U5AR6csBvApHHNl/vI1Bx" crossorigin="anonymous">
    <link rel="stylesheet" href="style.css">
    <title>Pet Shop</title>
    <?php include 'funciones.php'; ?>
</head>

<body style="background-color: #414042;">
    <div class="container text-center">
        <div class="container" style="padding-top: 10%">
            <div class="row justify-content-md-center">
                <div class="col-md-auto rounded-4 gradient-border"
                    style="background-color: white; padding-top:5%; padding-bottom: 5%">
                    <?php 
                        $conexion = conectar_con_base_de_datos('PerroCats','127.0.0.1','alumno','alumnoipm');
                        $nombre_bd = 'PerroCats';
                        $consulta_sql = 'select * from cliente where Mail ="' . $_POST['email']. '";';
                        if ($resultado = mysqli_query($conexion, $consulta_sql)) {
                        } else {
                            echo "<p> Error " . mysqli_error($conexion) . "</p>";
                        }
                        $fila = mysqli_fetch_assoc($resultado);
                        if( $fila["contraseña"] == $_POST['contraseña']){
                            echo '<h5 style="color: #f3844c"><a href="carrito.php">Contraseña correcta</a></h5>  ';
                            session_start();
                            $_SESSION['idsCarrito'] = array(); 
                            $_SESSION['idCliente'] = $fila['idCliente'];
                            $_SESSION['mail']= $_POST['email'];
                    }
                    else{
                        header("Location: inicioSesion.php?Con=false");
                    }
                    ?>
                </div>
            </div>
        </div>
    </div>
</body>