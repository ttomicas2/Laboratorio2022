<!DOCTYPE html>
<html lang="en">

<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1">
    <link href="https://cdn.jsdelivr.net/npm/bootstrap@5.2.0/dist/css/bootstrap.min.css" rel="stylesheet"
        integrity="sha384-gH2yIJqKdNHPEq0n4Mqa/HGKIhSkIHeL5AyhkYV8i59U5AR6csBvApHHNl/vI1Bx" crossorigin="anonymous">
    <link rel="stylesheet" href="style.css">
    <script src="https://ajax.googleapis.com/ajax/libs/jquery/3.6.1/jquery.min.js"></script>
    <title>Pet Shop</title>
    <?php include 'funciones.php'; ?>
</head>

<body style="background-color: whitesmoke;"></body>
<?php
    session_start();
    if(isset($_POST['vaciar'])){
        $_SESSION['idsCarrito'] = array();
    }
?>
<nav class="navbar navbar-dark navbar-expand-lg" style="background-color: #414042;">
    <div class="container-fluid">
        <a class="navbar-brand" href="index.php">
            <img src="PerroCats-naranja-azul.png" alt="" width="150" height="15%">
        </a>
        <button class="navbar-toggler" type="button" data-bs-toggle="collapse" data-bs-target="#navbarSupportedContent"
            aria-controls="navbarSupportedContent" aria-expanded="false" aria-label="Toggle navigation">
            <span class="navbar-toggler-icon"></span>
        </button>
        <div class="collapse navbar-collapse" id="navbarSupportedContent">
            <ul class="navbar-nav me-auto mb-2 mb-lg-0">
                <li class="nav-item">
                    <a class="nav-link active" aria-current="page" href="index.php">Inicio</a>
                </li>
                <li class="nav-item">
                    <a class="nav-link" href="perros.php">Perros</a>
                </li>
                <li class="nav-item">
                    <a class="nav-link" href="gatos.php">Gatos</a>
                </li>
                <li class="nav-item dropdown">
                    <a class="nav-link dropdown-toggle" href="#" role="button" data-bs-toggle="dropdown"
                        aria-expanded="false">
                        Info
                    </a>
                    <ul class="dropdown-menu">
                        <li><a class="dropdown-item" href="#Envios">Envios</a></li>
                        <li><a class="dropdown-item" href="#Categorias">Categorias</a></li>
                        <li>
                            <hr class="dropdown-divider">
                        </li>
                        <li><a class="dropdown-item" href="#Nosotros">Nosotros</a></li>
                    </ul>
                </li>
            </ul>
            <div class="nav navbar-left align-self-left">
                <a href="carrito.php"><img src="Banner/carrito.png" alt="" width="40px" height="40px"></a>
                <a href="inicioSesion.php?Con=a"><img src="Banner/logoUsuario.png" alt="" width="40px"
                        height="40px"></a>
            </div>
        </div>
    </div>
</nav>
<div class="container" style="padding-top: 4%;">
    <?php 
    $conexion = conectar_con_base_de_datos('PerroCats','127.0.0.1','alumno','alumnoipm'); 
    if(isset($_POST['eliminar'])){
        for($i = 0; $i < count($_SESSION['idsCarrito']); $i++){
            if(isset($_SESSION['idsCarrito'][$i]) and $_SESSION['idsCarrito'][$i] == $_POST['eliminar']){
                unset($_SESSION['idsCarrito'][$i]);
            }
        }
    }
    if(isset($_SESSION['idsCarrito']) and count($_SESSION['idsCarrito']) != 0){
        for($i = 0; $i < count($_SESSION['idsCarrito']); $i++){  
            if(isset($_SESSION['idsCarrito'][$i])){
                $consulta_sql = 'select * from productos where idProductos='. $_SESSION['idsCarrito'][$i] .';';
                $resultado = mysqli_query($conexion, $consulta_sql);
                $fila = mysqli_fetch_assoc($resultado);
                echo '
                        <div class="row text-center" style="padding-top: 1%;">
                            <div class="col-2 ">
                                <img src="'. $fila['src'] .'" class="rounded-4" style="border: 1px solid gray;" alt="" width="160">
                            </div>
                            <div class="col-sm rounded-4" style="border: 1px solid gray;background-color: white;">
                                <div class="row">
                                    <div class="col">
                                        <h5 id="perros1nombre" class="card-title" style="height: 4rem">'
                                            . $fila["nombre"] . '
                                        </h5>
                                    </div>
                                    <div class="col-xs text-end" >
                                        <form action="carrito.php" method="POST">
                                            <button type="submit" name="eliminar" value="'. $_SESSION['idsCarrito'][$i] . '" class="btn-close" aria-label="Close"></button>
                                        </form>
                                    </div>
                                </div>
                                <div class="row">
                                    <div class="col">
                                        <p id="perros1precio" class="card-text">$ '. $fila['Precio'] .',00</p>
                                    </div>
                                </div>
                                <div class="row">
                                        <form action="comprar.php" method="POST" class="text-center">
                                            <input  type="range" name="cantidad" value="1" class="form-range" min="1" max="'. $fila['cantidad'] .'" oninput="this.nextElementSibling.value = this.value">
                                            <output id="form'. $i .'">1</output>
                                        </form>
                                </div>
                            </div>
                        </div>';
            }
        }
    }
    else if (!isset($_SESSION['idsCarrito'])){
        echo '<div class="container text-center">
        <img class="img-fluid" src="Banner/carrito.png" alt="" >
        <h1 style="color:  #f3844c"> <a href="inicioSesion.php?Con=a">Debe iniciar sesion antes de comprar</a></h1>
    </div>';
    }
    else{
        
    echo '<div class="container text-center">
                <img class="img-fluid" src="Banner/carrito.png" alt="" >
                <h1 style="color:  #f3844c">El carrito esta vacio</h1>
            </div>';
    }
?>
</div>
<br>
<?php 
    if(count($_SESSION['idsCarrito']) > 0){
        echo    '<div class="row ">
                <div class=" col-6 text-start" style="padding-left: 5%">
                    <form action="carrito.php" method="POST">
                        <button type="sumbit" value="true" name="vaciar" class="btn btn-primary"
                            style="background-color: #04acec">Vaciar</button>
                    </form>
                </div>
                <div class="col-6 text-end" style="padding-right: 5%">
                <form action="comprar.php" method="POST">
                    <button id="boton" value="" name="cantidades" type="submit" onclick="submitForms(this,'. count($_SESSION['idsCarrito']) .')" class="btn btn-primary" style="background-color: #04acec">Comprar</button>
                </form>
                </div>
            </div>';
    }
?>
<br>
<footer class="bd-footer" style="background-color: #414042">
    <div class="container text-center">
        <div class="row aling-items-center">
            <div class="col">
                <a name="Envios">
                    <h2 class="text-white">Envios</h2>
                </a>
                <p class="gris">Correo Argentino</p>
                <p class="gris">DHL</p>
                <p class="gris">FEDEX</p>
            </div>
            <div class="col">
                <a name="Categorias">
                    <h2 class="text-white">Categorias</h2>
                </a>
                <p><a href="perros.php" class="links">Perros</a></p>
                <p><a href="gatos.php" class="links">Gatos</a></p>
            </div>
            <div class="col">
                <a name="Nosotros">
                    <h2 class="text-white">Nosotros</h2>
                </a>
                <p><a href="https://www.instagram.com/ttomicas/" class="links"> <img src="logo-instagram.png" alt=""
                            height="25px" /> @ttomicas</a></p>

                <p><a href="https://www.instagram.com/tadecentrone/" class="links"><img src="logo-instagram.png" alt=""
                            height="25px" />@tadecentrone</a></p>
            </div>
        </div>
    </div>
</footer>
<script src="https://cdn.jsdelivr.net/npm/bootstrap@5.2.0/dist/js/bootstrap.bundle.min.js"
    integrity="sha384-A3rJD856KowSb7dwlZdYEkO39Gagi7vIsF0jrRAoQmDKKtQBHUuLZ9AsSv4jD4Xa" crossorigin="anonymous">
</script>
<script src="script.js"></script>
</body>