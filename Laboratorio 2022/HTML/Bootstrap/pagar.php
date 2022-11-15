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
                        session_start();
                        $conexion = conectar_con_base_de_datos('PerroCats','127.0.0.1','alumno','alumnoipm');
                        $nombre_bd = 'PerroCats';
                        $consulta_sql = 'INSERT INTO pedidos(fecha, Cliente_idCliente, numeroTarjeta, codSeguridad, fechaVencimiento, metodoPago) VALUES ("2022-12-3",'. $_SESSION['idCliente'] .',"'.$_POST['numeroTarjeta'].'"    ,'. $_POST['codSeguridad'] .',"'. $_POST['fechaVencimiento']. '","'. $_POST['metodoPago'] .'")';
                        if (mysqli_query($conexion, $consulta_sql)) {
                            $consulta_sql = 'select max(idPedidos) from pedidos ;';
                            $resultado = mysqli_query($conexion, $consulta_sql);
                            $fila=mysqli_fetch_assoc($resultado);
                            echo $fila;
                            echo 'idPedidos: '. $fila["max(idPedidos)"] ;
                            $idPedido = $fila['max(idPedidos)'];
                            for($i = 0; $i < count($_SESSION['idsCarrito']); $i++){
                                if(isset($_SESSION['idsCarrito'][$i])){
                                    $consulta_sql = 'select * from productos where idProductos ='. $_SESSION['idsCarrito'][$i] .';';
                                    $resultado = mysqli_query($conexion, $consulta_sql);
                                    $fila=mysqli_fetch_assoc($resultado);
                                    $sql='INSERT INTO `ticket`(`Pedidos_idPedidos`, `Productos_idProductos`, `cantidad`, `precio`) VALUES (' . $idPedido . ',' . $_SESSION['idsCarrito'][$i] . ',' . $_POST['cantidades'][($i*2)] .','. $fila['Precio'] .')';
                                    mysqli_query($conexion, $sql);
                                }
                            }
                            echo '<h5 style="color:  #f3844c"><a href="index.php">Pago realizado</a></h5>';
                        } else {
                            echo "<p> Error " . mysqli_error($conexion) . "</p>";
                        }
                    ?>
</body>

</html>