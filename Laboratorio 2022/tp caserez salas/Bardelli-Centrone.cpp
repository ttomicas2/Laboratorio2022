#include <iostream>
#include <fstream>
#include <chrono>
using namespace std;
void mostrarMenu(){
cout<<"Elija una opcion: "<<endl<<"1. Empezar juego"<<endl<<"2. Posiciones Generales"<<endl<<"3. Puntaje Propio"<<endl<<"4. Vidas Actuales"<<endl<<"5. Salir"<<endl;

}

void empezarJuego(string nombre, int vidas){
    ofstream archivo;
    ifstream archivo2;
    ofstream archivo3;
    string frase;
    bool esta_nombre = false;
    archivo.open("nombres.txt", ios::app);
    archivo2.open("nombres.txt");
    if(archivo.is_open()||archivo2.is_open()){
        while(getline(archivo2, frase, ':')){
            if(frase == nombre){     //Chequea si el nombre está en el archivo y si está te dice bienvenido de vuelta y tus vidas 
                esta_nombre=true;
                cout<<"Bienvenido de vuelta, te quedan "<<vidas<<" vidas"<<endl;
            }
            
        }
        if(esta_nombre == false){
            archivo<<nombre<<":3:";    //Si tu nombre no está, lo escribe en el archivo y escribe : y tus vidas
            cout<<"Te regalamos 3 vidas por unirte a la plataforma"<<endl;
            archivo3.open("puntaje.txt", ios::app);
            archivo3<<nombre<<":0:";
            archivo3.close();

        }
    }
}

void agregarPuntuacion(int puntosObtenidos, string nombre){
    ifstream archivo;
    ofstream archivo2;
    string frase;
    string nuevo_nombre = "puntaje1.txt";
    string ruta_archivo = "puntaje.txt";
    string puntajeString;
    int puntaje;
    int puntaje2;
    archivo.open(ruta_archivo);
    if (archivo.is_open()){
        while(getline(archivo, frase, ':')){
            if(frase == nombre){
                getline(archivo, puntajeString, ':');
                puntaje = stoi(puntajeString);
                puntaje = puntosObtenidos + puntaje;   //Abre el archivo de puntajes, si tu nombre está, agarra tus puntos, los convierte a int y los suma a lo que ganaste
            }
        }
        archivo.close();
        rename(ruta_archivo.c_str(), nuevo_nombre.c_str());
        archivo2.open(ruta_archivo, ios::app);
        archivo.open(nuevo_nombre);
        while(getline(archivo, frase,':')){
            if (frase != nombre){
                archivo2<<frase<<":";
                getline(archivo, puntajeString, ':');
                puntaje2 =stoi(puntajeString);
                archivo2<<puntaje2<<":";   //Agarra todos los nombres y sus puntajes y los escribe en un nuevo archivo
            }
            else if(frase == nombre){
                archivo2<<nombre<<":"<<puntaje<<":";
                getline(archivo, puntajeString, ':'); //Escribe el nuevo nombre en el nuevo archivo
            }

        }
        archivo.close();
        remove(nuevo_nombre.c_str()); //Borra el archivo viejo
    }
}


void modificarVidas(string nombre, int vidasPerdidas){
    ifstream archivo;
    ofstream archivo2;
    string frase;
    string nuevo_nombre = "nombres1.txt";
    string ruta_archivo = "nombres.txt";
    string vidasString;
    int vidas;
    int vidas2;
    archivo.open(ruta_archivo);
    if (archivo.is_open()){
        while(getline(archivo, frase, ':')){
            if(frase == nombre){
                getline(archivo, vidasString, ':');//Abre el archivo de nombres, si tu nombre está, agarra tus vidas, los convierte a int 
                vidas = stoi(vidasString);
                if(vidas < 3 || vidasPerdidas < 0){ //Si tenes 3 vidas no te suma ninguna, si tenes 0 vidas tampoco te suma, pero si tenes 1 o 2 vidas te suma si es que respondiste bien 
                    vidas = vidas + vidasPerdidas;
                }
            }
        }
        archivo.close();
        rename(ruta_archivo.c_str(), nuevo_nombre.c_str());
        archivo2.open(ruta_archivo, ios::app);
        archivo.open(nuevo_nombre);
        while(getline(archivo, frase,':')){
            if (frase != nombre){
                archivo2<<frase<<":";
                getline(archivo, vidasString, ':');
                vidas2 =stoi(vidasString);
                archivo2<<vidas2<<":";//Agarra todos los nombres y sus puntajes y los escribe en un nuevo archivo
            }
            else if(frase == nombre){
                archivo2<<nombre<<":"<<vidas<<":";
                getline(archivo, vidasString, ':');//Escribe el nuevo nombre en el nuevo archivo
            }
        }
        archivo.close();
        remove(nuevo_nombre.c_str());//Borra el archivo viejo
    }
}


void posicionesGenerales(){
    ifstream archivo;
    bool correr=true;
    int puntaje;
    string nombre;
    string primero;
    string segundo;
    string tercero;
    string frase;
    int puntaje1 = 0;
    int puntaje2 = 0;
    int puntaje3 = 0;
    archivo.open("puntaje.txt");
    if (archivo.is_open()){
        while(getline(archivo, nombre, ':')){
            getline(archivo, frase, ':');
            puntaje=stoi(frase);
            if(puntaje>puntaje1){
                tercero=segundo; //Si entra alguien con más puntos pasa el segundo a el tercer puesto
                puntaje3=puntaje2;
                segundo=primero;//Si entra alguien con más puntos pasa el primer a el segundo puesto
                puntaje2=puntaje1;
                primero=nombre;//Si entra alguien con más puntos lo pone en el primer puesto
                puntaje1 = puntaje;
            }
            else if(puntaje>puntaje2){
                tercero = segundo;//Si entra alguien con más puntos pasa el segundo a el tercer puesto
                puntaje3=puntaje2;
                segundo=nombre;//Si entra alguien con más puntos lo pone en el segundo lugar
                puntaje2=puntaje;
            }
            else if(puntaje>puntaje3){
                tercero=nombre;//Si entra alguien con más puntos lo pone en el tercero lugar
                puntaje3=puntaje;
            }
        }
    }
    archivo.close();
    cout<<"El primero es "<<primero<<" con "<<puntaje1<<" puntos"<<endl<<"El segundo es "<<segundo<<" con "<<puntaje2<<" puntos"<<endl<<"El tercero es "<<tercero<<" con "<<puntaje3<<" puntos"<<endl;
}
  
int puntajePropio(string nombre){
    int puntaje;
    ifstream archivo;
    string frase;
    archivo.open("puntaje.txt");
    if (archivo.is_open()){
        while(getline(archivo, frase, ':')){
            if(frase==nombre){
                getline(archivo, frase, ':');
                cout<<"Hola "<<nombre<<" tenes "<<frase<<" puntos"<<endl;//Busca en el archivo de puntajes si tu nombre está, si es así te dice tus puntos actuales
            }
            }
    }
        archivo.close();
    return puntaje;
}

int vidasRestantes(string nombre){
    ifstream archivo;
    string frase;
    int vidas;
    archivo.open("nombres.txt");
    if(archivo.is_open()){
        while(getline(archivo, frase, ':')){
            if(frase == nombre){
                getline(archivo, frase, ':');
                vidas = stoi(frase);
                archivo.close();//Busca en el archivo de nombres si tu nombre está, si es así pasa tus vidas a int
            }
        }
    }
    archivo.close();
    return vidas;
}

int main() {
    int num_menu;
    bool jugar;
    bool respuesta_correcta=false;
    ifstream archivo;
    string nombre;
    string pregunta;
    string opcion1;
    string opcion2;
    string opcion3;
    string opcion4;
    char respuesta;
    char respuesta_usuario;
    int vidas;
    int n_preguntas;
    int puntosObtenidos;
    int vidasPerdidas;
    int correctas = 0;
    mostrarMenu();
    cin>>num_menu;
    switch (num_menu)
    {
    case 1:
        cout<<"Escriba un nombre o alias"<<endl;
        cin>>nombre;
        vidas= vidasRestantes(nombre);
        empezarJuego(nombre, vidas);
        vidas= vidasRestantes(nombre);
        if (vidas <= 0){
            cout<<"Te quedan 0 vidas no puedes seguir jugando"<<endl; //Chequea si te quedan vidas, si no te quedan no podes jugar
        }
        else{
            jugar = true; //Si te quedan vidas te permite jugar
        }
        break;
    
    case 2:
        posicionesGenerales();
        break;
    case 3:
        cout<<"Escriba un nombre o alias"<<endl;
        cin>>nombre; 
        puntajePropio(nombre);
        break;
    case 4:
        cout<<"Escriba un nombre o alias"<<endl;
        cin>>nombre;
        vidas = vidasRestantes(nombre);
        cout<<"Hola "<<nombre<<" te quedan "<<vidas<<" vidas"<<endl;
    case 5:
        return 0;
        break;
    default:
        cout<<"Ingrese una opcion valida"<<endl;
        break;
    }
    int aleatorio = 0;
    srand(time(NULL));
    aleatorio = rand()%(4-1+1)+1; //Random para que abra un archivo de los 4 al azar
    switch (aleatorio){
        case 1:
            archivo.open("1.txt");
            break;
        case 2:
            archivo.open("2.txt");
            break;
        case 3:
            archivo.open("3.txt");
            break;
        case 4:
            archivo.open("4.txt");
            break;
    }
    if(jugar == true){
        while (n_preguntas < 10){
            getline(archivo, pregunta, '?');
            cout<<pregunta<<"?"<<endl;
            archivo>>opcion1;
            cout<<"a "<<opcion1<<endl;
            archivo>>opcion2;
            cout<<"b "<<opcion2<<endl;
            archivo>>opcion3;
            cout<<"c "<<opcion3<<endl;
            archivo>>opcion4;
            cout<<"d "<<opcion4<<endl;
            archivo>>respuesta;
            cout<<"diga su respuesta"<<endl; //Te muestra la pregunta, las opciones y te pide la respuesta
            int i = 0;
            respuesta_correcta = false;
            while(respuesta_correcta==false){
                auto start = std::chrono::steady_clock::now();// Empieza el cronómetro
                cin>>respuesta_usuario;
                int ASCII = respuesta_usuario;
                if(ASCII<91 && ASCII>64){
                    ASCII = ASCII + 32;
                }
                respuesta_usuario = ASCII;
             //Permite que ingreses la respuesta en mayúscula
                auto end = std::chrono::steady_clock::now();
                std::chrono::duration<double> elapsed_seconds = end-start;
                if(elapsed_seconds.count()>10){
                    cout<<"Te pasaste de tiempo, perdiste una vida"<<endl; //Si tardas más de 10 segundos en responder te saca una vida
                    vidasPerdidas = -1;
                    modificarVidas(nombre, vidasPerdidas);
                    i++;
                    respuesta_correcta = true; //Finaliza el while y te muestra las siguientes preguntas
                }
                else if(n_preguntas <= 5){ 
                    if(respuesta == respuesta_usuario and i == 0){
                        cout<<"CORRECTO"<<endl;
                        puntosObtenidos = 1;
                        agregarPuntuacion(puntosObtenidos, nombre);
                        respuesta_correcta = true;
                        correctas++;
                    }
                    else if(respuesta == respuesta_usuario){
                        cout<<"correcto"<<endl;
                        respuesta_correcta=true;
                        correctas++;
                    }
                    //Verifica si escribio una opcion valida
                    else if(respuesta_usuario == 'a'||respuesta_usuario == 'b'||respuesta_usuario == 'c'||respuesta_usuario == 'd'||respuesta_usuario == 'A'||respuesta_usuario == 'B'||respuesta_usuario == 'C'||respuesta_usuario == 'D'){
                        cout<<"Incorrecto perdiste una vida"<<endl;
                        vidasPerdidas = -1;
                        modificarVidas(nombre, vidasPerdidas);
                        i++;
                    }
                    else{
                        cout<<"Ingrese una opcion valida"<<endl;
                    }
                }
                else if ( n_preguntas > 5 && n_preguntas <= 10 ){
                    if (respuesta == respuesta_usuario){
                        cout<<"CORRECTO"<<endl;
                        puntosObtenidos = 3;
                        agregarPuntuacion(puntosObtenidos, nombre);
                        respuesta_correcta = true;
                        correctas++;
                    }
                    else{
                        cout<<"Incorrecto, perdiste la partida"<<endl;
                        n_preguntas = 11;
                        return 0;
                    }
                }
                if( vidas=vidasRestantes(nombre) <= 0){
                    cout<<"Te quedan 0 vidas no podes seguir jugando"<<endl;
                    n_preguntas = 11;
                    return 0;
                }
                n_preguntas++;
            }
        }
        if(correctas==10){
            cout<<"felicitaciones ganaste, conseguiste 1 vida"<<endl;
            vidasPerdidas = 1;
            modificarVidas(nombre, vidasPerdidas);
        }
    }
}