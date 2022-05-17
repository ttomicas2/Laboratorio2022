#include <iostream>
#include <fstream>
#include <chrono>
using namespace std;

void mostrarMenu(int numenu)
{
    cout << "1. Empezar juego" << endl
         << "2. Posiciones generales" << endl
         << "3. Puntaje propio" << endl
         << "4. salir" << endl;
    cin >> numenu;
}

void empezarjuego(string nomusuario, string pregunta, int puntos, char respuesta, char rtusuario, ifstream p1, ifstream nombres)
{
    cout << "Ingresa tu nombre" << endl;
    cin >> nomusuario;
    nombres.open("nombres.txt");
    p1.open("1.txt");
    while (getline(p1, pregunta, '6')){
        if (rtusuario == respuesta){
            puntos = puntos + 3;
        }
    }

    while (getline(p1, pregunta, ',')){
        if (rtusuario == respuesta){
            puntos++;
        }
    }
}
void agregarpuntuacion(int puntosObtenidos, string nombre)
{
}

void posicionesgenerales()
{
}

int puntajepropio(string nombre)
{
    int puntaje;

    return puntaje;
}

int vidasrestantes(string nombre)
{
    int vidas;
    ofstream nomout;
    ifstream nombres;
    string nomusuario;
    nombres.open("nombres.txt");
    while (getline(nombres, nomusuario, '-')){
      if (nomusuario==nombre){
        cout<<"bienvenido devuelta"<< nomusuario<<endl;
        cout<<"sus vidas son"<<vidas;
      }
      else{
        vidas=3;
        cout<<"bienvenido"<< nomusuario<<endl;
        nomout<<nomusuario<<"tiene: "<<vidas<<"vidas"<<":"<<endl;
      }
      
       
    }

    int vidas;

    return vidas = 3;
}

int main()
{
    int stop = 1;
    int vidas= 3;
    string nomusuario;
    string pregunta;
    int puntos = 0;
    char respuesta;
    char rtusuario;
    ifstream p1;
    ifstream nombres;
    int rtint;
    int usint;
    string nomusuario;
    cin >> nomusuario;
    int numenu;
    ifstream p1;
    ifstream p2;
    ifstream p3;
    ifstream p4;

    string numenu;
    switch (numenu)
    {
    case 1:
        // empezarjuego();
        break;
    case 2:
        // archivo.open()
        break;
    case 3:
        // archivo.open()
        break;

    case 4:
        // loop = false;
        break;
    default:
        // cout<<"ingrese una opcion valida"<<endl;
        break;
    }
    int stop = 1;
    int vidas= 3;
    string nomusuario;
    string pregunta;
    int puntos = 0;
    char respuesta;
    char rtusuario;
    ifstream p1;
    ifstream nombres;
    int rtint;
    int usint;
    cout << "Ingresa tu nombre" << endl;
    cin >> nomusuario;
    nombres.open("nombres.txt");
    p1.open("1.txt");
    while (getline(p1, pregunta, '?'))
    {
        cout << pregunta << "?" << endl;
        stop--;
        while (stop == 0)
        {
            getline(p1, pregunta, '-');
            cout << "1." << pregunta << endl;
            cin >> rtusuario;
            respuesta = 68;
            rtint = rtusuario;
            usint = respuesta;
            if (usint == rtint)
            {
                puntos++;
                cout << "CORRECTO"<<endl<<vidas<<" vidas restantes"<<endl;
            }
            else
            {
                vidas--;
                cout << "INCORRECTO" <<endl<<vidas<<" vidas restantes"<<endl;
            }
            
            getline(p1, pregunta, '-');
            cout << "2." << pregunta << endl;
            cin >> rtusuario;
            respuesta = 65;
            rtint = rtusuario;
            usint = respuesta;
            if (usint == rtint)
            {
                puntos++;
                 cout << "CORRECTO"<<endl<<vidas<<" vidas restantes"<<endl;
            }
            else
            {
                vidas--;
                cout << "INCORRECTO" <<endl<<vidas<<" vidas restantes"<<endl;
            }
            getline(p1, pregunta, '-');
            cout << "3." << pregunta << endl;
            cin >> rtusuario;
            respuesta = 67;
            rtint = rtusuario;
            usint = respuesta;
            if (usint == rtint)
            {
             puntos++;
                cout << "CORRECTO"<<endl<<vidas<<" vidas restantes"<<endl;
            }
            else
            {
                vidas--;
                cout << "INCORRECTO" <<endl<<vidas<<" vidas restantes"<<endl;
            }
            getline(p1, pregunta, '-');
            cout << "4." << pregunta << endl;
            cin >> rtusuario;
            respuesta = 66;
            rtint = rtusuario;
            usint = respuesta;
            if (usint == rtint)
            {
                puntos++;
                cout << "CORRECTO"<<endl<<vidas<<" vidas restantes"<<endl;
            }
            else
            {
                vidas--;
                cout << "INCORRECTO" <<endl<<vidas<<" vidas restantes"<<endl;
            }
            getline(p1, pregunta, '-');
            cout << "5." << pregunta << endl;
            cin >> rtusuario;
            respuesta = 68;
            rtint = rtusuario;
            usint = respuesta;
            if (usint == rtint)
            {
                puntos++;
                cout << "CORRECTO"<<endl<<vidas<<" vidas restantes"<<endl;
            }
            else
            {
                vidas--;
                cout << "INCORRECTO" <<endl<<vidas<<" vidas restantes"<<endl;
            }
            getline(p1, pregunta, '-');
            cout << "6." << pregunta << endl;
            cin >> rtusuario;
            respuesta = 65;
            rtint = rtusuario;
            usint = respuesta;
            if (usint == rtint)
            {
                puntos++;
                cout << "CORRECTO"<<endl<<vidas<<" vidas restantes"<<endl;
            }
            else
            {
                vidas--;
                cout << "INCORRECTO" <<endl<<vidas<<" vidas restantes"<<endl;
            }
            getline(p1, pregunta, '-');
            cout << "7." << pregunta << endl;
            cin >> rtusuario;
            respuesta = 65;
            rtint = rtusuario;
            usint = respuesta;
            if (usint == rtint)
            {
                puntos++;
                cout << "CORRECTO"<<endl<<vidas<<" vidas restantes"<<endl;
            }
            else
            {
                vidas--;
                cout << "INCORRECTO" <<endl<<vidas<<" vidas restantes"<<endl;
            }
            getline(p1, pregunta, '-');
            cout << "8." << pregunta << endl;
            cin >> rtusuario;
            respuesta = 67;
            rtint = rtusuario;
            usint = respuesta;
            if (usint == rtint)
            {
                puntos++;
                cout << "CORRECTO"<<endl<<vidas<<" vidas restantes"<<endl;
            }
            else
            {
                vidas--;
                cout << "INCORRECTO" <<endl<<vidas<<" vidas restantes"<<endl;
            }
            getline(p1, pregunta, '-');
            cout << "9." << pregunta << endl;
            cin >> rtusuario;
            respuesta = 66;
            rtint = rtusuario;
            usint = respuesta;
            if (usint == rtint)
            {
                puntos++;
                cout << "CORRECTO"<<endl<<vidas<<" vidas restantes"<<endl;
            }
            else
            {
                vidas--;
                cout << "INCORRECTO" <<endl<<vidas<<" vidas restantes"<<endl;
            }
            getline(p1, pregunta, '-');
            cout << "10." << pregunta << endl;
            cin >> rtusuario;
            respuesta = 68;
            rtint = rtusuario;
            usint = respuesta;
            if (usint == rtint)
            {
                puntos++;
                cout << "CORRECTO"<<endl<<vidas<<" vidas restantes"<<endl;
            }
            else
            {
                vidas--;
                cout << "INCORRECTO" <<endl<<vidas<<" vidas restantes"<<endl;
            }
            stop++;
        }
    }
}