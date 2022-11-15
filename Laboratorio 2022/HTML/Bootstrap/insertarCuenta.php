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
            $sql = 'select * from cliente where Mail ="' . $_POST["email"] . '";';
            $consulta_sql = 'insert into Cliente(Nombre, Apellidos, Mail, Nacimiento, Direccion, contraseña)
            value ("' . $_POST['nombre']. '","' . $_POST['apellido'] . '","' . $_POST['email'] . '","' . $_POST['nacimiento'] .  '","' . $_POST['direccion'] . '","' . $_POST['contraseña'] . '");';
            if(mysqli_num_rows($result = mysqli_query($conexion,$sql)) == 0){
                if (mysqli_query($conexion, $consulta_sql)) {
                    echo '<h5 style="color:  #f3844c"><a href="inicioSesion.php?Con=a">Cuenta creada</a></h5>';
                } else {
                    echo "<p> Error " . mysqli_error($conexion) . "</p>";
                }
            }
            else{
                echo '<a href="inicioSesion.php?Con=a"><p style="color:  #f3844c"> Ya existe una cuenta con ese mail </p></a>';
            }
        ?>
</body>

</html>