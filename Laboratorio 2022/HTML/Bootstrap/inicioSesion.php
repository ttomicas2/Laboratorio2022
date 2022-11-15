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
                    <form action="comprobarContraseña.php" method="post">
                        <h1 style="color:  #f3844c ">Ingrese su email</h1>
                        <input type="email" name="email" placeholder="Email" class="form-control" required>
                        <h1 style="color:  #f3844c ">Ingrese la contraseña</h1>
                        <input type="password" name="contraseña" placeholder="Contraseña" class="form-control" required>
                        <h6><a href="crearCuenta.php">Si no tiene una cuenta cree una aqui</a></h6>
                        <?php
                            if( $_GET['Con'] == "false"){
                                echo '<h5 style="color: #f3844c">Contraseña incorrecta</h5>  ';
                            }
                        ?>
                        <button class="btn text-light btn-lg" style="background-color:  #04acec "
                            type="submit">Enviar</button>
                    </form>
                </div>
            </div>
        </div>
    </div>
</body>