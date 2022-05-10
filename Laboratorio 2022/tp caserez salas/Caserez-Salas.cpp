#include <iostream>
#include <fstream>
#include <chrono>
using namespace std;

void mostrarMenu(int numenu){
    cout<<"1. Empezar juego"<<endl<<"2. Posiciones generales"<<endl<<"3. Puntaje propio"<<endl<<"4. salir"<<endl;
    cin>>numenu;
   
}

void empezarjuego(string nomusuario, string pregunta, int puntos, char respuesta, char rtusuario, ifstream p1, ifstream nombres){
    cout<<"Ingresa tu nombre"<<endl;
    cin>>nomusuario;
    nombres.open("nombres.txt");
    p1.open("1.txt");
        while(getline(p1, pregunta, '6'))
    {
        if (rtusuario == respuesta)
        {
            puntos = puntos + 3;
        }
        
    }
    
    while(getline(p1, pregunta,','))
    {
        if (rtusuario == respuesta)
        {
            puntos++;
        }
        
    }
    

}
void agregarpuntuacion(int puntosObtenidos, string nombre){

}

void posicionesgenerales(){

}

int puntajepropio(string nombre){
    int puntaje;

    return puntaje;
}

int vidasrestantes(string nombre){
    int vidas;
    
    return vidas;
}

int main() {
int numenu;    
    ifstream p1;
    ifstream p2;
    ifstream p3;
    ifstream p4;

    string numenu;
switch (numenu){
        case 1:
            //empezarjuego();
            break;
        case 2:
            //archivo.open()
            break;
        case 3:
           // archivo.open()
            break;
            
        case 4:
            //loop = false;
            break;
        default:
           // cout<<"ingrese una opcion valida"<<endl;
            break;
        }


}