<?php
function conectar_con_mysql($servername,$username,$password){ 
    
    $conexion = mysqli_connect($servername, $username, $password);
    if ($conexion) {
        echo "<h3> Conexión con MySQL exitosa </h3>";
    } else {
        echo "<p> Error de conexión: " . mysqli_error() . "</p>";
    }
    return $conexion;
}

function conectar_con_base_de_datos($nombre_db,$servername,$username,$password){
    
    $conexion = mysqli_connect($servername, $username, $password, $nombre_db);
    if ($conexion) {
        return $conexion;
    } else {
        echo "<p> Error de conexión: " . mysqli_error() . "</p>";
    }
}

/*
 * La siguiente función sirve para:
     * Creación de bases de datos
     * Creación de tablas
     * inserción simple
     * actualización de datos
     * eliminación de datos
 */

function ejecutar_consulta($nombre_db,$conexion,$consulta_sql) {
    
    if (mysqli_query($conexion, $consulta_sql)) {
    } else {
        echo "<p> Error " . mysqli_error($conexion) . "</p>";
    }
}

function insercion_multiple($conexion,$nombre_de_tabla,$consulta_sql){

    if (mysqli_multi_query($conexion, $consulta_sql)) {
        echo "<p> inserciones realizadas con éxito </p>";
    } else {
        echo "<p> Error: " . mysqli_error($conexion) . '</p>';
    }
}

function seleccionar_todo($conexion,$nombre_de_tabla,$consulta_sql){
    
    $result = mysqli_query($conexion, $consulta_sql);

    if (mysqli_num_rows($result) > 0) {

        $respuesta = '<h4> Datos obtenidos de la tabla "' . $nombre_de_tabla . '"</h4>';

        for ($i = 0; $i < mysqli_num_rows($result); $i++) {
            $fila = mysqli_fetch_assoc($result);
            $respuesta .= "<p> id: " . $fila["id"] . " - Nombre completo: " .
                               $fila["nombre"] . ' '. $fila["apellido"]. "</p>";
        }

        echo $respuesta;

    } else {
        echo "<p> No se han encontrado resultados. </p>";
    }
}


function conectar_y_obtener_datos($nombre_de_base_de_datos,$nombre_tabla) {
    $conexion = conectar_a_base_de_datos($nombre_de_base_de_datos);
    seleccionar_todo($conexion,$nombre_tabla);
}

function vaciarCarrito(){
    $_SESSION['idsCarrito'] = array();
}

?>