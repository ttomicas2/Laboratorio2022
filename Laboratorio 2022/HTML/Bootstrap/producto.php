<!DOCTYPE html>
<html lang="en">

<head>
    <meta charset="UTF-8" />
    <meta http-equiv="X-UA-Compatible" content="IE=edge" />
    <meta name="viewport" content="width=device-width, initial-scale=1" />
    <link href="https://cdn.jsdelivr.net/npm/bootstrap@5.2.0/dist/css/bootstrap.min.css" rel="stylesheet"
        integrity="sha384-gH2yIJqKdNHPEq0n4Mqa/HGKIhSkIHeL5AyhkYV8i59U5AR6csBvApHHNl/vI1Bx" crossorigin="anonymous" />
    <link rel="stylesheet" href="style.css" />
    <title>Pet Shop</title>
    <?php include 'funciones.php'; ?>
</head>
<?php session_start(); ?>

<body>
    <nav class="navbar navbar-dark navbar-expand-lg" style="background-color: #414042">
        <div class="container-fluid">
            <a class="navbar-brand" href="index.php">
                <img src="PerroCats-naranja-azul.png" alt="" width="150" height="15%" />
            </a>
            <button class="navbar-toggler" type="button" data-bs-toggle="collapse"
                data-bs-target="#navbarSupportedContent" aria-controls="navbarSupportedContent" aria-expanded="false"
                aria-label="Toggle navigation">
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
                            <li>
                                <a class="dropdown-item" href="#Categorias">Categorias</a>
                            </li>
                            <li>
                                <hr class="dropdown-divider" />
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
    <div class="container text-left">
        <div class="row">
            <div class="col-sm rounded-4 text-center" style="border: 1px solid">
                <img class="img-fluid" id="imageBox" src="<?php 
                                $consulta_sql = 'select * from productos where idProductos ='. $_GET['id']; 
                                $conexion = conectar_con_base_de_datos('PerroCats','127.0.0.1','alumno','alumnoipm');
                                $nombre_bd = 'PerroCats';
                                if($resultado = mysqli_query($conexion, $consulta_sql)){
                                    $fila = mysqli_fetch_assoc($resultado);
                                    echo $fila["src"];
                                } ?>" alt="" height="550">
            </div>
            <div class="col">
                <h2 class="height: 4rem;"><?php echo $fila["nombre"]; ?></h2>
                <p><?php echo $fila["descripcion"]?></p>
                <p>$ <?php echo $fila["Precio"]; ?>,00</p>
                <form action="producto.php?id=<?php echo $_GET['id']; ?>" method="POST">
                    <button type="submit" name="idCarrito" value="<?php echo $_GET['id'] ?>" class="btn btn-primary"
                        style="background-color: #04acec">
                        Añadir al carrito
                    </button>
                </form>
                <?php 
                if(isset($_POST['idCarrito'])){
                    $bool = false;
                    for($i = 0; $i < count($_SESSION['idsCarrito']); $i++){
                        if($_SESSION['idsCarrito'][$i] == $_POST['idCarrito']){
                            $bool = true;
                        }
                    }
                    if(!$bool){
                        array_push($_SESSION['idsCarrito'], $_POST['idCarrito']);
                    }
                }
                if(!isset($_SESSION['idsCarrito'])){
                    echo '<h5 style="color: #f3844c">Inicie sesion antes de añadir al carrito</h5>';
                }
                ?>
                <br>
            </div>
        </div>
        <div class="row">
            <div class="col-sm text-center" style="padding-top: 2%;padding-bottom: 2%;">
                <?php
                if($fila["src"] != NULL){
                    echo '<img style="border: 1px solid" src="' . $fila["src"] . '" alt="" width="125" height="125"
                        onclick="ponerGrande(this)" />';
                }
                if($fila["src2"] != NULL){
                    echo '<img style="border: 1px solid" src="' . $fila["src2"] . '" alt="" width="125" height="125"
                        onclick="ponerGrande(this)" />';
                }
                if($fila["src3"] != NULL){
                    echo '<img style="border: 1px solid" src="' . $fila["src3"] . '" alt="" width="125" height="125"
                        onclick="ponerGrande(this)" />';
                }
                if($fila["src4"] != NULL){
                echo '<img style="border: 1px solid" src="' . $fila["src4"] . '" alt="" width="125" height="125"
                    onclick="ponerGrande(this)" />';
                }
                ?>
            </div>
            <div class="col"></div>
        </div>
    </div>
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

                    <p><a href="https://www.instagram.com/tadecentrone/" class="links"><img src="logo-instagram.png"
                                alt="" height="25px" />@tadecentrone</a></p>
                </div>
            </div>
        </div>
    </footer>
    <script src="script.js"></script>
    <script src="https://cdn.jsdelivr.net/npm/bootstrap@5.2.0/dist/js/bootstrap.bundle.min.js"
        integrity="sha384-A3rJD856KowSb7dwlZdYEkO39Gagi7vIsF0jrRAoQmDKKtQBHUuLZ9AsSv4jD4Xa" crossorigin="anonymous">
    </script>
</body>

</html>