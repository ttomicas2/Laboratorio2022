#include <iostream>
#include <fstream>
#include <chrono>
#include <stdio.h>
using namespace std;

using std::cout; using std::ofstream;
using std::endl; using std::string;

void mostrarMenu(int numenu){
    //mostrar el menu con las opciones para cuando inicie el juego//terminado
    cout <<"||─────────────────────────||"<<endl
        <<"||"<< " 1. Empezar juego        "<<"||"<< endl
        << "||"<<" 2. Posiciones generales " <<"||"<< endl
        << "||"<< " 3. Puntaje propio       "<<"||"<<endl
        << "||"<< " 4. Salir                "<<"||"<<endl
        <<"||─────────────────────────||"<<endl;
}

void empezarJuego(string nomusuario, int vidas, bool name_exist, string namescane){
    //que te asigne vidas si no estas registrado y sino que te ponga las vidas que ya tenias
    ofstream create_name;
    ifstream nombres;
    string nombre;

    cout << "Ingresa tu nombre" << endl;
    cin >> nomusuario;
    nombres.open("nombres_prueba.txt");
    create_name.open("nombres_prueba.txt", std::ios_base::app);
    while(getline(nombres, namescane, '*')){
        if (namescane == nomusuario){
            name_exist = true;
        }
    }
        if (name_exist == true){
            cout<<"Bienvenido devuelta "<< nomusuario<<endl;
            cout<<"sus vidas son "<<vidas;
            create_name.close();
        }
        else{
        vidas=3;
        cout<<"Bienvenido "<<nomusuario<<endl;
        create_name<<nomusuario<<"*"<<vidas<<".";
        create_name.close();
        }      
}

void agregarPuntuacion(int puntosObtenidos, string nombre, int puntaje, bool respuesta_correcta, int vidas){
    //si suma puntaje o no cuando acierta la pregunta
    puntaje = 0;
    if (respuesta_correcta == true)
    {
        puntaje++;
    }
    else
    {
        vidas--;
    }
    

}  


void posicionesGenerales(){
    //mostrar las 3 mejores posiciones

}

int puntajePropio(string nombre, bool respuesta_correcta){
    //que cuando el jugador pregunte en el menu le muestre el puntaje asignado a un nombre
    int puntaje = 0;
    if (respuesta_correcta == true)
    {
        puntaje++;
    }
    

    return puntaje;
}

int vidasRestantes(string vidas_string, string namescane){
    //guardar vidas que tiene un jugador con nombre ya guardado
    int vidas;
    ofstream nomout;
    ifstream nombres;
    string nomusuario;
    int vidas2;
    
    rename("nombres_prueba.txt", "nombres_prueba2.txt");
    nomout.open("nombres_prueba.txt", ios::app);
    nombres.open("nombres_prueba2.txt");
    getline(nombres, namescane, '*');
    getline(nombres, vidas_string, '.');
    
    
        while (getline(nombres, vidas_string, '.')){
            if (nomusuario != vidas_string){
                nomout<<vidas_string<<".";
                vidas = stoi(vidas_string);
            }
            else if (nomusuario == vidas_string){
                nomout<< vidas_string <<"*"<< vidas<<".";
                getline(nombres, vidas_string, '.'); 
            }
            
        }
        nombres.close();
        nomout.close();
    remove("nombres_prueba2.txt"); 
    
    return vidas;  
} 
int main() {
    string vidas_string;
    string namescane;
    int vidas_rest;
    bool name_exist;
    int contador = 0;
    bool respuesta_correcta = true;
    int stop = 1;
    int vidas= 3;
    string nomusuario;
    string pregunta;
    int puntos = 0;
    string respuesta;
    string rtusuario;
    ifstream nombres;
    ofstream create_name;
    int numenu;
    int numpregunta = 1;
    ifstream p1;
    ifstream p2;
    ifstream p3;
    ifstream p4;
    mostrarMenu(numenu);
    cin >> numenu;
    switch (numenu)
    {
    case 1:
        empezarJuego(nomusuario, vidas, name_exist, namescane);
        p1.open("preguntas.txt");
        //guardar los nombres puestos por los usuarios

        //preguntas
        cout<<endl<<"||───────────────────────────────────────────||"<<endl<<"||"<<"PORFAVOR ESCRIBIR SU RESPUESTA EN MINUSCULA"<<"||"<<endl<<"||───────────────────────────────────────────||"<<endl;
        while (contador < 10){
            while (getline(p1, pregunta, '?')){
                cout <<endl<<numpregunta<<')'<<pregunta<< "?" << endl;
                getline(p1, pregunta, '*');
                cout << pregunta << endl;
                cin >> rtusuario;
                getline(p1, respuesta, '*');
                if (respuesta == rtusuario){
                if (contador >= 5){
                puntos = puntos + 3;
                cout <<endl<<"CORRECTO"<<endl<<"|───────────────────|"<<endl<<"| "<<vidas<<" VIDAS RESTANTES"<<" |"<<endl<<"|───────────────────|"<<endl;
                }
            
                else{
                puntos++;
                cout <<endl<<"CORRECTO"<<endl<<"|───────────────────|"<<endl<<"| "<<vidas<<" VIDAS RESTANTES"<<" |"<<endl<<"|───────────────────|"<<endl;
                }
            }
            else{
                if (contador >= 5){
                p1.close();
                cout<<"Perdiste"<<endl;
                }   
                else{
                vidas--;
                cout <<endl<<"INCORRECTO" <<endl<<"|───────────────────|"<<endl<<"| "<<vidas<<" VIDAS RESTANTES"<<" |"<<endl<<"|───────────────────|"<<endl;
                }
            
            }
            if (vidas == 0){
            p1.close();
            cout<<"Perdiste"<<endl;
            }
        
        contador++;
        numpregunta++;
        }
        
    }
    vidasRestantes(vidas_string, namescane);
        break;
    case 2:
        // archivo.open()
        break;
    case 3:
        // archivo.open()
        break;

    case 4:
        p1.close();
        break;
    default:
        // cout<<"ingrese una opcion valida"<<endl;
        break;
    }
    
}   
