-- phpMyAdmin SQL Dump
-- version 5.2.0
-- https://www.phpmyadmin.net/
--
-- Servidor: 127.0.0.1
-- Tiempo de generación: 15-11-2022 a las 04:10:45
-- Versión del servidor: 10.4.25-MariaDB
-- Versión de PHP: 8.1.10

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
START TRANSACTION;
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8mb4 */;

--
-- Base de datos: `perrocats`
--

-- --------------------------------------------------------

--
-- Estructura de tabla para la tabla `cliente`
--

CREATE TABLE `cliente` (
  `idCliente` int(11) NOT NULL,
  `Nombre` varchar(45) DEFAULT NULL,
  `Apellidos` varchar(45) DEFAULT NULL,
  `Mail` varchar(45) DEFAULT NULL,
  `Nacimiento` date DEFAULT NULL,
  `Direccion` varchar(45) DEFAULT NULL,
  `contraseña` varchar(45) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Volcado de datos para la tabla `cliente`
--

INSERT INTO `cliente` (`idCliente`, `Nombre`, `Apellidos`, `Mail`, `Nacimiento`, `Direccion`, `contraseña`) VALUES
(1, 'Tadeo', 'Centrone', 'tadeocen@gmail.com', '2005-12-02', 'Avenida Congreso 5227', '021205');

-- --------------------------------------------------------

--
-- Estructura de tabla para la tabla `pedidos`
--

CREATE TABLE `pedidos` (
  `idPedidos` int(11) NOT NULL,
  `fecha` date DEFAULT NULL,
  `Cliente_idCliente` int(11) NOT NULL,
  `numeroTarjeta` varchar(45) NOT NULL,
  `codSeguridad` int(11) NOT NULL,
  `fechaVencimiento` date NOT NULL,
  `metodoPago` text NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

-- --------------------------------------------------------

--
-- Estructura de tabla para la tabla `productos`
--

CREATE TABLE `productos` (
  `idProductos` int(11) NOT NULL,
  `cantidad` int(11) DEFAULT NULL,
  `Precio` decimal(10,0) DEFAULT NULL,
  `categoria` varchar(45) DEFAULT NULL,
  `descripcion` varchar(45) DEFAULT NULL,
  `nombre` varchar(45) DEFAULT NULL,
  `src` text CHARACTER SET utf8mb4 COLLATE utf8mb4_spanish_ci DEFAULT NULL,
  `src2` text CHARACTER SET utf8mb4 COLLATE utf8mb4_spanish_ci DEFAULT NULL,
  `src3` text CHARACTER SET utf8mb4 COLLATE utf8mb4_spanish_ci DEFAULT NULL,
  `src4` text CHARACTER SET utf8mb4 COLLATE utf8mb4_spanish_ci DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Volcado de datos para la tabla `productos`
--

INSERT INTO `productos` (`idProductos`, `cantidad`, `Precio`, `categoria`, `descripcion`, `nombre`, `src`, `src2`, `src3`, `src4`) VALUES
(10, 10, '10805', 'Perro, Comida', NULL, 'Alimento Nutrique Medium Young Adult - 12 Kg', 'Perros/Alimento Nutrique Medium Young Adult.png', 'Perros/Alimento Nutrique Medium Young Adult2.png', 'Perros/Alimento Nutrique Medium Young Adult3.png', NULL),
(11, 10, '462', 'Perro, Juguete', NULL, 'Pelota Puppis Tennis', 'Perros/pelotaTennis.png', NULL, NULL, NULL),
(12, 10, '7220', 'Perro, Accesorio', NULL, 'Moisés Puppis Classic Bordó', 'Perros/camaBordo.png', NULL, NULL, NULL),
(13, 10, '8850', 'Perro, Comida', NULL, 'Comida Bulldog Frances Royal Canin', 'Perros/comida bulldog.png', NULL, NULL, NULL),
(14, 10, '1170', 'Perro, Accesorio', NULL, 'Bozal Canasta Rast Ajustable', 'Perros/bozal.png', NULL, NULL, NULL),
(15, 10, '7150', 'Perro, Comida', NULL, 'Alimento Old Prince Novel Cordero', 'Perros/comida cordero.png', NULL, NULL, NULL),
(16, 10, '2000', 'Perro, Juguete', NULL, 'Chapita My Family Hueso De Aluminio Azul', 'Perros/chapita azul.png', NULL, NULL, NULL),
(17, 10, '735', 'Perro, Juguete', NULL, 'Juguete Mancuerna Squeaky Roja', 'Perros/juguete naranja.png', NULL, NULL, NULL),
(18, 10, '3130', 'Perro, Comida', NULL, 'Calm Dog Royal Canin', 'Perros/calm dog.png', NULL, NULL, NULL),
(19, 10, '7150', 'Gato, Accesorio', NULL, 'Bandeja Con Filtro Litera Cerrada Para Gato', 'Gatos/literaAzul.png', NULL, NULL, NULL),
(20, 10, '7242', 'Gato, Comida', NULL, 'Agility Cats Kitten (Gato)', 'Gatos/AgilityCats-Kitten-300x300.png', NULL, NULL, NULL),
(21, 10, '383', 'Gato, Juguete', NULL, 'Juguete Gato Cañita Varita Cascabel Raton Plu', 'Gatos/palitoRaton.png', NULL, NULL, NULL),
(22, 10, '238', 'Gato, Comida', NULL, 'Pouch Royal Canin Sensory Taste - 85 Gr', 'Gatos/comida gato2.png', NULL, NULL, NULL),
(23, 10, '176', 'Gato, Comida', NULL, 'Lata Homemade Delights Kitten River Salmon - ', 'Gatos/comida en lata.png', NULL, NULL, NULL),
(24, 10, '295', 'Gato, Comida', NULL, 'Pouch Pro Plan Adult Cat Chicken - 85 Gr', 'Gatos/comida gato3.png', NULL, NULL, NULL),
(25, 10, '730', 'Gato, Juguete', NULL, 'Juguete Puppis Raton', 'Gatos/juguete gato.png', NULL, NULL, NULL),
(26, 10, '14202', 'Gato, Accesorio', NULL, 'Juguete Pawise Post Rome', 'Gatos/casa gato.png', NULL, NULL, NULL),
(27, 10, '1284', 'Gato, Juguete', NULL, 'Juguete Animal Pet Ratón en Jaula', 'Gatos/juguete pelota.png', NULL, NULL, NULL),
(28, 20, '7571', 'Perro, Comida, Oferta', NULL, 'Alimento Royal Canin para Perro Mini Adulto', 'https://puppis.vteximg.com.br/arquivos/ids/188050-1000-1000/156343.jpg?v=637935010367970000', 'https://puppis.vteximg.com.br/arquivos/ids/188762-1000-1000/156177-3.jpg?v=637953071423800000', NULL, NULL),
(29, 10, '10925', 'Gato, Comida, Oferta', NULL, 'Cat Chow Adulto Pescado y Pollo', 'https://puppis.vteximg.com.br/arquivos/ids/186055-1000-1000/137018.jpg?v=637836434652870000', 'https://puppis.vteximg.com.br/arquivos/ids/186056-1000-1000/137018-2.jpg?v=637836434656430000', NULL, NULL),
(30, 10, '2184', 'Perro, Comida, Oferta', NULL, 'Alimento Royal Canin Caniche 33 Junior', 'https://puppis.vteximg.com.br/arquivos/ids/172658-1000-1000/156258-1.jpg?v=637350102802700000', 'https://puppis.vteximg.com.br/arquivos/ids/172660-1000-1000/156258-3.jpg?v=637350102811930000', NULL, NULL);

-- --------------------------------------------------------

--
-- Estructura de tabla para la tabla `ticket`
--

CREATE TABLE `ticket` (
  `Pedidos_idPedidos` int(11) NOT NULL,
  `Productos_idProductos` int(11) NOT NULL,
  `cantidad` int(11) DEFAULT NULL,
  `precio` decimal(10,0) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Índices para tablas volcadas
--

--
-- Indices de la tabla `cliente`
--
ALTER TABLE `cliente`
  ADD PRIMARY KEY (`idCliente`),
  ADD UNIQUE KEY `idCliente_UNIQUE` (`idCliente`);

--
-- Indices de la tabla `pedidos`
--
ALTER TABLE `pedidos`
  ADD PRIMARY KEY (`idPedidos`),
  ADD UNIQUE KEY `idPedidos_UNIQUE` (`idPedidos`),
  ADD KEY `fk_Pedidos_Cliente_idx` (`Cliente_idCliente`);

--
-- Indices de la tabla `productos`
--
ALTER TABLE `productos`
  ADD PRIMARY KEY (`idProductos`),
  ADD UNIQUE KEY `idProductos_UNIQUE` (`idProductos`);

--
-- Indices de la tabla `ticket`
--
ALTER TABLE `ticket`
  ADD PRIMARY KEY (`Pedidos_idPedidos`,`Productos_idProductos`),
  ADD KEY `fk_Pedidos_has_Productos_Productos1_idx` (`Productos_idProductos`),
  ADD KEY `fk_Pedidos_has_Productos_Pedidos1_idx` (`Pedidos_idPedidos`);

--
-- AUTO_INCREMENT de las tablas volcadas
--

--
-- AUTO_INCREMENT de la tabla `cliente`
--
ALTER TABLE `cliente`
  MODIFY `idCliente` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=2;

--
-- AUTO_INCREMENT de la tabla `pedidos`
--
ALTER TABLE `pedidos`
  MODIFY `idPedidos` int(11) NOT NULL AUTO_INCREMENT;

--
-- AUTO_INCREMENT de la tabla `productos`
--
ALTER TABLE `productos`
  MODIFY `idProductos` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=31;

--
-- Restricciones para tablas volcadas
--

--
-- Filtros para la tabla `pedidos`
--
ALTER TABLE `pedidos`
  ADD CONSTRAINT `fk_Pedidos_Cliente` FOREIGN KEY (`Cliente_idCliente`) REFERENCES `cliente` (`idCliente`) ON DELETE NO ACTION ON UPDATE NO ACTION;

--
-- Filtros para la tabla `ticket`
--
ALTER TABLE `ticket`
  ADD CONSTRAINT `fk_Pedidos_has_Productos_Pedidos1` FOREIGN KEY (`Pedidos_idPedidos`) REFERENCES `pedidos` (`idPedidos`) ON DELETE NO ACTION ON UPDATE NO ACTION,
  ADD CONSTRAINT `fk_Pedidos_has_Productos_Productos1` FOREIGN KEY (`Productos_idProductos`) REFERENCES `productos` (`idProductos`) ON DELETE NO ACTION ON UPDATE NO ACTION;
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
