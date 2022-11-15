function cargar(item) {
  quitarBordes();
  mostrador.style.width = "60%";
  seleccion.style.width = "40%";
  seleccion.style.opacity = "1";
  item.style.border = "2px solid red";

  imgSeleccionada.src = item.getElementsByTagName("img")[0].src;

  modeloSeleccionado.innerHTML = item.getElementsByTagName("p")[0].innerHTML;

  descripSeleccionada.innerHTML = "Descripción del modelo ";

  precioSeleccionado.innerHTML = item.getElementsByTagName("span")[0].innerHTML;
}

function ponerGrande(smallImg) {
  var fullImg = document.getElementById("imageBox");
  fullImg.src = smallImg.src;
}

function enviarInformacionConAJAX(nombres, precios, img) {
  let nombre = document.getElementById(nombres);
  let precio = document.getElementById(precios);
  let urlImagen = document.getElementById(img).src;
  let informacion = {
    name: nombre,
    precio: precio,
    imagen: urlImagen,
  };
  $.ajax({
    type: "POST",
    url: "producto.php",
    data: informacion,
    processData: false, // tell jQuery not to process the data
    contentType: false, // tell jQuery not to set contentType,
  }).done(function (res) {
    $("#respuesta").html(res);
  });
}

function clickVaciarCarrito() {
  var result = "<?php vaciarCarrito(); ?>";
  document.write(result);
}

function submitForms(boton, cantidadIds) {
  cantidades = [];
  for (var i = 0; i < cantidadIds; i++) {
    var id = "form" + i;
    var output = document.getElementById(id).innerHTML;
    cantidades.push(output);
    console.log("output " + output);
    console.log(id);
  }
  console.log(cantidades);
  boton.value = cantidades;
}
