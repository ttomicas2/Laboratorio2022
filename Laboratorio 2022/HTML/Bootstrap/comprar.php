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

<body class="bg-light">
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
    <br>
    <div class="container">
        <div class="row">
            <div class="col-md-4 order-md-2 mb-4">
                <h4 class="d-flex justify-content-between align-items-center mb-3">
                    <span class="text-muted">Tu carrito</span>
                    <span class="badge badge-secondary badge-pill">3</span>
                </h4>
                <?php
                $precioTotal = 0;
                $conexion = conectar_con_base_de_datos('PerroCats','127.0.0.1','alumno','alumnoipm');
                session_start();
                for($i = 0; $i < count($_SESSION['idsCarrito']); $i++){
                    if(isset($_SESSION['idsCarrito'][$i])){
                        $consulta_sql = 'select * from productos where idProductos='. $_SESSION['idsCarrito'][$i] .';';
                        $resultado = mysqli_query($conexion, $consulta_sql);
                        $fila = mysqli_fetch_assoc($resultado);
                        $precio = floatval($fila['Precio']);
                        $cantidad=floatval($_POST['cantidades'][($i*2)]);
                        $precioTotal += $precio * $cantidad;
                        echo '
                        <ul class="list-group mb-3">
                            <li class="list-group-item d-flex justify-content-between lh-condensed">
                                <div>
                                    <h6 class="my-0">'. $fila['nombre'] .'</h6>
                                    <small class="text-muted">x'. $cantidad .'</small>
                                </div>
                                <span class="text-muted">$'. $fila['Precio'] .'</span>
                            </li>';
                    }
                }
                    ?>
                <li class="list-group-item d-flex justify-content-between">
                    <span>Total (Pesos)</span>
                    <strong>$<?php echo $precioTotal ?></strong>
                </li>
                </ul>
            </div>
            <div class="col-md-8 order-md-1">
                <h4 class="mb-3">Pago</h4>
                <form action="pagar.php" method="POST">
                    <div class="d-block my-3">
                        <div class="custom-control custom-radio">
                            <input value="credito" name="metodoPago" type="radio" class="custom-control-input" checked
                                required>
                            <label class="custom-control-label" for="credito">Tarjeta de credito</label>
                        </div>
                        <div class="custom-control custom-radio">
                            <input value="debito" name="metodoPago" type="radio" class="custom-control-input" required>
                            <label class="custom-control-label" for="debito">Tajeta de debito</label>
                        </div>
                    </div>
                    <div class="row">
                        <div class="col-md-6 mb-3">
                            <label for="cc-number">Numero de tarjeta</label>
                            <input type="text" name="numeroTarjeta" class="form-control" id="cc-number" placeholder=""
                                required>
                        </div>
                    </div>
                    <div class="row">
                        <div class="col-md-3 mb-3">
                            <label for="cc-expiration">Fecha de Vencimiento</label>
                            <input type="date" name="fechaVencimiento" class="form-control" id="cc-expiration"
                                placeholder="" required>
                        </div>
                        <div class="col-md-3 mb-3">
                            <label for="cc-cvv">CVV</label>
                            <input type="text" name="codSeguridad" class="form-control" id="cc-cvv" placeholder=""
                                required>
                            <div class="invalid-feedback">
                                Security code required
                            </div>
                        </div>
                    </div>
                    <hr class="mb-4">
                    <button value="<?php echo $_POST['cantidades']; ?>" name="cantidades"
                        class="btn btn-primary btn-lg btn-block" type="submit">Finalizar Pago</button>
                </form>
            </div>
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
    <script src="script.js"></script>
</body>

</html>