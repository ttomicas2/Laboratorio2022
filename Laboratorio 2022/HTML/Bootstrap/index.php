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
                    <a href="carrito.php"><img src="Banner/carrito.png" alt="" width="40px" height="40px" /></a>
                    <a href="inicioSesion.php?Con=a"><img src="Banner/logoUsuario.png" alt="" width="40px"
                            height="40px" /></a>
                </div>
            </div>
        </div>
    </nav>
    <div id="carouselExampleIndicators" class="carousel slide" data-bs-ride="true">
        <div class="carousel-indicators">
            <button type="button" data-bs-target="#carouselExampleIndicators" data-bs-slide-to="0" class="active"
                aria-current="true" aria-label="Slide 1"></button>
            <button type="button" data-bs-target="#carouselExampleIndicators" data-bs-slide-to="1"
                aria-label="Slide 2"></button>
            <button type="button" data-bs-target="#carouselExampleIndicators" data-bs-slide-to="2"
                aria-label="Slide 3"></button>
        </div>
        <div class="carousel-inner">
            <div class="carousel-item active">
                <img src="Banner/Banner1-820.png" class="d-block w-100" alt="..." />
            </div>
            <div class="carousel-item">
                <img src="Banner/Banner2-corel.png" class="d-block w-100" alt="..." />
            </div>
        </div>
        <button class="carousel-control-prev" type="button" data-bs-target="#carouselExampleIndicators"
            data-bs-slide="prev">
            <span class="carousel-control-prev-icon" aria-hidden="true"></span>
            <span class="visually-hidden">Previous</span>
        </button>
        <button class="carousel-control-next" type="button" data-bs-target="#carouselExampleIndicators"
            data-bs-slide="next">
            <span class="carousel-control-next-icon" aria-hidden="true"></span>
            <span class="visually-hidden">Next</span>
        </button>
    </div>
    <br /><br />
    <div class="container text-center">
        <div class="row">
            <div class="col align-self-center">
                <div class="row">
                    <a href="perros.php" target="_self" class="vc_single_image-wrapper vc_box_border_grey">
                        <img src="Perro-200x200.png" alt="COMIDA DE PERROS" title="COMIDA DE PERROS" width="200"
                            height="200" />
                    </a>
                </div>
                <div class="row">
                    <h3 style="color: #f3844c">Perros</h3>
                </div>
            </div>
            <div class="col align-self-center" id="container-gato">
                <div class="row">
                    <a href="gatos.php">
                        <img src="Gato-200x200.png" class="rounded-cicle" alt="COMIDA DE GATOS" title="COMIDA DE GATOS"
                            width="200" height="200" />
                    </a>
                </div>
                <div class="row">
                    <h3 style="color: #04acec">Gatos</h3>
                </div>
            </div>
        </div>
    </div>
    <br />
    <h2>OFERTAS!!!</h2>
    <br />
    <div class="container text-center">
        <?php 
    $consulta_sql = 'select * from productos where cantidad > 0 and categoria like "%Oferta%";'; 
    $conexion = conectar_con_base_de_datos('PerroCats','127.0.0.1','alumno','alumnoipm');
    $nombre_bd = 'PerroCats';
    $resultado = mysqli_query($conexion, $consulta_sql);
    for($i = 0; $i < mysqli_num_rows($resultado); $i++){
        $fila = mysqli_fetch_assoc($resultado);
        if($i%3==0 || $i == 0){
            echo '<div class="row align-items-center">';
        }
        echo    
            '<div class="col d-flex justify-content-center">
                <div class="card" style="width: 21rem">
                    <img src="'. $fila["src"] .'" class="card-img-top" alt="..." />
                    <div class="card-body">
                        <h5 class="card-title" style="height: 4rem">
                            '.$fila["nombre"].'
                        </h5>
                        <p class="card-text">$ ' . $fila["Precio"] . ',00</p>
                        <a href="producto.php?id='. $fila["idProductos"] . '" class="btn btn-primary"
                                style="background-color: #04acec">
                                VER PRODUCTO</a>
                    </div>
                </div>
    </div>' ; if(($i+1)%3==0 || mysqli_num_rows($resultado) == $i){{ echo '
    </div>' ; } }}?>
    </div>
    </div>
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

                    <p><a href="https://www.instagram.com/tadecentrone/" class="links"><img src="logo-instagram.png"
                                alt="" height="25px" />@tadecentrone</a></p>
                </div>
            </div>
        </div>
    </footer>
    <script src="https://cdn.jsdelivr.net/npm/bootstrap@5.2.0/dist/js/bootstrap.bundle.min.js"
        integrity="sha384-A3rJD856KowSb7dwlZdYEkO39Gagi7vIsF0jrRAoQmDKKtQBHUuLZ9AsSv4jD4Xa" crossorigin="anonymous">
    </script>
</body>

</html>