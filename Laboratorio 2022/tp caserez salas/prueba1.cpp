#include <iostream>
#include <fstream>
#include <chrono>
using namespace std;
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