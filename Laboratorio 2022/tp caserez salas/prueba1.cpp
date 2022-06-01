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

void empezarJuego(string nameuser, int vidas, bool name_exist, string namescane){
    //que te asigne vidas si no estas registrado y sino que te ponga las vidas que ya tenias
    ofstream create_name;
    ifstream nombres;
    string nombre;

    
    nombres.open("nombres_prueba.txt", std::ios_base::app);
    create_name.open("nombres_prueba.txt", std::ios_base::app);
    while(getline(nombres, namescane, ':')){
        if (namescane == nameuser){
            name_exist = true;
        }
    }
        if (name_exist == true){
            cout<<"Bienvenido devuelta "<< nameuser<<endl;
            cout<<"sus vidas son "<<vidas;
            create_name.close();
        }
        else{
        vidas=3;
        cout<<"Bienvenido "<<nameuser<<endl;
        create_name<<nameuser<<":"<<vidas<<":";
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
void restarvidas(string nameuser, int vidas_menos){
    ifstream usuarios;
    ofstream usuarios2;
    string namescane;
    string ruta_archivo= "nombres_prueba.txt";
    string ruta_nueva = "usuarios_nuevo.txt";
    string vidas_string;
    int vidas;
    int vidas2;
    usuarios.open(ruta_archivo);
    if (usuarios.is_open()){
        while(getline(usuarios, namescane, ':')){
            if(namescane == nameuser){
                getline(usuarios, vidas_string, ':');
                vidas = stoi(vidas_string);
                if(vidas < 3 || vidas_menos < 0){
                    vidas = vidas + vidas_menos;
                }
            }
        }
        usuarios.close();
        rename(ruta_archivo.c_str(), ruta_nueva.c_str());
        usuarios2.open(ruta_archivo, ios::app);
        usuarios.open(ruta_nueva);
        while(getline(usuarios, namescane,':')){
            if (nameuser != namescane){
                usuarios2<<nameuser<<":";
                getline(usuarios, vidas_string, ':');
                vidas2 =stoi(vidas_string);
                usuarios2<<vidas2<<":";
            }
            else if(namescane == nameuser){
                usuarios2<<namescane<<":"<<vidas<<":";
                getline(usuarios, vidas_string, ':');
            }
        
        }
        usuarios.close(); 
        remove(ruta_nueva.c_str());
    }
}
int vidasRestantes(string nameuser){
    //guardar vidas que tiene un jugador con nombre ya guardado
    ifstream usuarios;
    string namescane;
    int vidas;
    usuarios.open("nombres_prueba.txt");
    if(usuarios.is_open()){
        while(getline(usuarios, namescane, ':')){
            if(namescane == nameuser){
                getline(usuarios, namescane, ':');
                vidas = stoi(namescane);
                usuarios.close();
            }
            else{
                vidas = 3;
            }
            
        }
    }
    usuarios.close();
    return vidas;
    

} 
int main() {
    bool caso1;
    int vidas_menos;
    int correcto;
    string vidas_string;
    string namescane;
    int vidas_rest;
    bool name_exist;
    int contador = 0;
    bool respuesta_correcta = false;
    int stop = 1;
    int vidas= 3;
    string nameuser;
    string pregunta;
    int puntos = 0;
    string respuesta;
    string rtusuario;
    ifstream nombres;
    ofstream create_name;
    int numenu;
    int numpregunta = 1;
    ifstream cuestions;
    mostrarMenu(numenu);
    cin >> numenu;
    switch (numenu)
    {
    case 1:
        cout << "Ingresa tu nombre" << endl;
        cin >> nameuser;
        vidas= vidasRestantes(nameuser);
        empezarJuego(nameuser, vidas, name_exist, namescane);
        vidas= vidasRestantes(nameuser);
        if (vidas <= 0){
            cout<<"utilice otro usuarios, este ya no tiene mas vidas"<<endl;
        }
        caso1 = true;
        
        //guardar los nombres puestos por los usuarios

        //preguntas
        cout<<endl<<"||───────────────────────────────────────────||"<<endl<<"||"<<"PORFAVOR ESCRIBIR SU RESPUESTA EN MINUSCULA"<<"||"<<endl<<"||───────────────────────────────────────────||"<<endl;
       
        break;
    case 2:
        // archivo.open()
        break;
    case 3:
        // archivo.open()
        break;

    case 4:
        cout<<"ingrese un nombre"<<endl;
        cin>>nameuser;
        vidasRestantes(namescane);
        cout<<"sus vidas son"<<vidas<<endl;
        break;
    case 5:
        cuestions.close();
        break;
    
    default:
        cout<<"Ingrese una opcion valida"<<endl;
        break;
    }
    
    if (caso1 = true){int random = 0;
        srand(time(NULL));
        random = rand()%(4-1+1)+1; 
        switch (random){
            case 1:
                cuestions.open("preguntas.txt");
                break;
            case 2:
                cuestions.open("preguntas2.txt");
                break;
            case 3:
                cuestions.open("preguntas3.txt");
                break;
            case 4:
                cuestions.open("preguntas4.txt");
                break;
        }
     
         while (contador < 10){
            while (getline(cuestions, pregunta, '?')){
                cout <<endl<<numpregunta<<')'<<pregunta<< "?" << endl;
                getline(cuestions, pregunta, '*');
                cout << pregunta << endl;
                respuesta_correcta = false;
                while(respuesta_correcta==false){
                    auto start = std::chrono::steady_clock::now();
                    cin >> rtusuario;
                    auto end = std::chrono::steady_clock::now();
                    std::chrono::duration<double> elapsed_seconds = end-start;
                    if(elapsed_seconds.count()>10){
                        cout<<"se agotaron los 10 segundos"<<endl;
                        vidas_menos = -1;
                        restarvidas(nameuser, vidas_menos);
                        contador++;
                        respuesta_correcta = true;
                    }
                    respuesta_correcta = true;   
                    getline(cuestions, respuesta, '*');
                    if (respuesta == rtusuario){
                        if (contador >= 5){
                            puntos = puntos + 3;
                            cout <<endl<<"CORRECTO"<<endl<<"|───────────────────|"<<endl<<"| "<<vidas<<" VIDAS RESTANTES"<<" |"<<endl<<"|───────────────────|"<<endl;
                            correcto++;
                        }
            
                        else{
                            puntos++;
                            cout <<endl<<"CORRECTO"<<endl<<"|───────────────────|"<<endl<<"| "<<vidas<<" VIDAS RESTANTES"<<" |"<<endl<<"|───────────────────|"<<endl;
                            correcto++;
                        }
                    restarvidas(namescane, vidas_menos);
                    }
                    else{
                        if (contador >= 5){
                            cuestions.close();
                            cout<<"Perdiste"<<endl;
                        }   
                        else{
                            vidas--;
                            cout <<endl<<"INCORRECTO" <<endl<<"|───────────────────|"<<endl<<"| "<<vidas<<" VIDAS RESTANTES"<<" |"<<endl<<"|───────────────────|"<<endl;
                            vidas_menos = -1;
                            restarvidas(namescane, vidas_menos);
                        }
            
                    }
                    if (vidas <= 0){
                        cuestions.close();
                        cout<<"Perdiste"<<endl;
                    }
                }
                create_name<<vidas<<".";
                contador++;
                numpregunta++;
        
            }
            if (correcto == 10){
               cout<<"GANASTEEE, te regalamos una vida"<<endl;
               vidas_menos = 1; 
               restarvidas(namescane, vidas_menos);
            }
        }     
    }
}    
     
