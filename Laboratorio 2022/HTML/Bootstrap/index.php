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
</head>

<body>
    <nav class="navbar navbar-dark navbar-expand-lg" style="background-color: #414042;">
        <div class="container-fluid">
            <a class="navbar-brand" href="index.php">
                <img src="PerroCats-naranja-azul.png" alt="" width="150" height="15%">
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
                            <li><a class="dropdown-item" href="#Categorias">Categorias</a></li>
                            <li>
                                <hr class="dropdown-divider">
                            </li>
                            <li><a class="dropdown-item" href="#Nosotros">Nosotros</a></li>
                        </ul>
                    </li>
                </ul>
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
                <img src="Banner/Banner1-820.png" class="d-block w-100" alt="...">
            </div>
            <div class="carousel-item">
                <img src="Banner/Banner2-corel.png" class="d-block w-100" alt="...">
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
    <br><br>
    <div class="container text-center">
        <div class="row">
            <div class="col align-self-center">
                <a href="perros.php" target="_self" class="vc_single_image-wrapper   vc_box_border_grey">
                    <img src="Perro-200x200.png" alt="COMIDA DE PERROS" title="COMIDA DE PERROS" width="200"
                        height="200">
                </a>
            </div>
            <div class="col align-self-center" id="container-gato">
                <a href="gatos.php">
                    <img src="Gato-200x200.png" class="rounded-cicle" alt="COMIDA DE GATOS" title="COMIDA DE GATOS"
                        width="200" height="200">
                </a>
            </div>
        </div>
    </div>
    <div class="container text-center">
        <div class="row">
            <div class="col align-self-center">
                <h3>Perros</h3>
            </div>
            <div class="col align-self-center">
                <h3>Gatos</h3>
            </div>
        </div>
    </div>
    <br>
    <h2>OFERTAS!!!</h2>
    <br>
    <div class="container text-center">
        <div class="row align-items-center">
            <div class="col align-self-center">
                <div class="card" style="width: 21rem;">
                    <div id="carouselExampleControls" class="carousel slide" data-bs-ride="carousel">
                        <div class="carousel-inner">
                            <div class="carousel-item active">
                                <img src="https://puppis.vteximg.com.br/arquivos/ids/188050-1000-1000/156343.jpg?v=637935010367970000"
                                    class="card-img-top" id="card-purina" alt="" width="300" height="365">
                            </div>
                            <div class="carousel-item">
                                <img src="https://puppis.vteximg.com.br/arquivos/ids/188762-1000-1000/156177-3.jpg?v=637953071423800000"
                                    class="card-img-top" alt="..." width="300" height="365">
                            </div>

                        </div>
                        <button class="carousel-control-prev" type="button" data-bs-target="#carouselExampleControls"
                            data-bs-slide="prev">
                            <span class="carousel-control-prev-icon" aria-hidden="true"></span>
                            <span class="visually-hidden">Previous</span>
                        </button>
                        <button class="carousel-control-next" type="button" data-bs-target="#carouselExampleControls"
                            data-bs-slide="next">
                            <span class="carousel-control-next-icon" aria-hidden="true"></span>
                            <span class="visually-hidden">Next</span>
                        </button>
                    </div>
                    <div class="card-body">
                        <h5 class="card-title" style="height: 4rem;">Alimento Royal Canin para Perro Mini Adulto</h5>
                        <p class="card-text">$7571,00</p>
                        <a href="#" class="btn btn-primary">VER PRODUCTO</a>
                    </div>
                </div>
            </div>
            <br>
            <div class="col align-self-center">
                <div class="card" style="width: 21rem;">
                    <div id="carouselExampleControls1" class="carousel slide" data-bs-ride="carousel">
                        <div class="carousel-inner">
                            <div class="carousel-item active">
                                <img src="https://puppis.vteximg.com.br/arquivos/ids/186055-1000-1000/137018.jpg?v=637836434652870000"
                                    class="card-img-top" id="card-purina" alt="" width="300" height="365">
                            </div>
                            <div class="carousel-item">
                                <img src="https://puppis.vteximg.com.br/arquivos/ids/186056-1000-1000/137018-2.jpg?v=637836434656430000"
                                    class="card-img-top" alt="..." width="300" height="365">
                            </div>

                        </div>
                        <button class="carousel-control-prev" type="button" data-bs-target="#carouselExampleControls1"
                            data-bs-slide="prev">
                            <span class="carousel-control-prev-icon" aria-hidden="true"></span>
                            <span class="visually-hidden">Previous</span>
                        </button>
                        <button class="carousel-control-next" type="button" data-bs-target="#carouselExampleControls1"
                            data-bs-slide="next">
                            <span class="carousel-control-next-icon" aria-hidden="true"></span>
                            <span class="visually-hidden">Next</span>
                        </button>
                    </div>
                    <div class="card-body">
                        <h5 class="card-title" style="height: 4rem;">Cat Chow Adulto Pescado y Pollo </h5>
                        <p class="card-text">$ 10925,00</p>
                        <a href="#" class="btn btn-primary">VER PRODUCTO</a>
                    </div>
                </div>
            </div>
            <br>
            <div class="col align-self-center">
                <div class="card" style="width: 21rem;">
                    <div id="carouselExampleControls2" class="carousel slide" data-bs-ride="carousel">
                        <div class="carousel-inner">
                            <div class="carousel-item active">
                                <img src="https://puppis.vteximg.com.br/arquivos/ids/172658-1000-1000/156258-1.jpg?v=637350102802700000"
                                    class="card-img-top" id="card-purina" alt="" width="300" height="365">
                            </div>
                            <div class="carousel-item">
                                <img src="https://puppis.vteximg.com.br/arquivos/ids/172660-1000-1000/156258-3.jpg?v=637350102811930000"
                                    class="card-img-top" alt="..." width="300" height="365">
                            </div>
                        </div>
                        <button class="carousel-control-prev" type="button" data-bs-target="#carouselExampleControls2"
                            data-bs-slide="prev">
                            <span class="carousel-control-prev-icon" aria-hidden="true"></span>
                            <span class="visually-hidden">Previous</span>
                        </button>
                        <button class="carousel-control-next" type="button" data-bs-target="#carouselExampleControls2"
                            data-bs-slide="next">
                            <span class="carousel-control-next-icon" aria-hidden="true"></span>
                            <span class="visually-hidden">Next</span>
                        </button>
                    </div>
                    <div class="card-body">
                        <h5 class="card-title" style="height: 4rem;">Alimento Royal Canin Caniche 33 Junior </h5>
                        <p class="card-text">$ 2184,00</p>
                        <a href="#" class="btn btn-primary">VER PRODUCTO</a>
                    </div>
                </div>
            </div>
        </div>
    </div>
    <br>
    <footer class="bd-footer " style="background-color: #414042;">
        <div class="container text-center">
            <div class="row aling-items-center">
                <div class="col">
                    <a name="Envios">
                        <h2 class="text-white">Envios</h2>
                    </a>
                    <ul>
                        <li>
                            <p class="gris">Correo Argentino</p>
                        </li>
                        <li>
                            <p class="gris">DHL</p>
                        </li>
                        <li>
                            <p class="gris">FEDEX</p>
                        </li>
                    </ul>
                </div>
                <div class="col">
                    <a name="Categorias">
                        <h2 class="text-white">Categorias</h2>
                    </a>
                    <ul>
                        <li>
                            <a href="perros.php" class="links">Perros</a>
                        </li>
                        <li>
                            <a href="gatos.php" class="links">Gatos</a>
                        </li>
                    </ul>
                </div>
                <div class="col">
                    <a name="Nosotros">
                        <h2 class="text-white">Nosotros</h2>
                    </a>
                    <ul>
                        <li>
                            <img src="logo-instagram.png" alt="" width="25px" height="25px">
                            <a href="https://www.instagram.com/ttomicas/" class="links">@ttomicas</a>
                        </li>
                        <li>
                            <img src="logo-instagram.png" alt="" width="25px" height="25px">
                            <a href="https://www.instagram.com/tadecentrone/" class="links">@tadecentrone</a>
                        </li>
                    </ul>
                </div>
            </div>
        </div>
    </footer>
    <script src="https://cdn.jsdelivr.net/npm/bootstrap@5.2.0/dist/js/bootstrap.bundle.min.js"
        integrity="sha384-A3rJD856KowSb7dwlZdYEkO39Gagi7vIsF0jrRAoQmDKKtQBHUuLZ9AsSv4jD4Xa" crossorigin="anonymous">
    </script>
</body>

</html>