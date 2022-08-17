#include <iostream>
using namespace std;
#include <fstream>
#include <vector>
#include <math.h>

void crearCuenta()
{
    string nombre;
    int dni;
    int numeroIdentificacion = 0;
    int codigo_seguridad;
    int elevado = 0;
    vector<int>numeroId;
    vector<int>cod_seguridad;
    int i = 0;
    int random;
    ofstream registroEscritura;
    ifstream registroLectura;
    string linea;
    bool esta = false;
    bool randomEsta = false;

    registroLectura.open("registro.txt");
    registroEscritura.open("registro.txt",ios::app);
    cout << "Ingrese su nombre y apellido separado por ," << endl;
    cin >> nombre;

    if (registroLectura.is_open())
    {
        while (getline(registroLectura, linea, '.'))
        {
            if (linea == nombre)
            {
                cout << "Usted ya tiene una cuenta activa" << endl;
                esta=true;
            } 

        }
        if (esta == false)
        {
            cout<<"Ingrese dni"<<endl;
            cin>>dni;
            while (i<8)
            {
                randomEsta = false;
                random = rand()%(10-1)+1;
                for ( int e = 0; e < numeroId.size(); e++)
                {
                    if(random == numeroId[e]){
                        randomEsta=true;
                    }
                }
                if( randomEsta == false){
                    numeroId.push_back(random);
                    i++;
                }
            }
            for(int g = 0; g < numeroId.size(); g++){
                elevado = pow(10,g);
                numeroIdentificacion= numeroIdentificacion + numeroId[g]*elevado;
            }
            i = 0;
            while (i<3)
            {
                randomEsta = false;
                random = rand()%(10-1)+1;
                for ( int e = 0; e < numeroId.size(); e++)
                {
                    if(random == numeroId[e]){
                        randomEsta=true;
                    }
                }
                if( randomEsta == false){
                    numeroId.push_back(random);
                    i++;
                }
            }
            for(int g = 0; g < numeroId.size(); g++){
                elevado = pow(10,g);
                numeroIdentificacion= numeroIdentificacion + numeroId[g]*elevado;
            }
            registroEscritura<<nombre<<","<<dni<<","<<numeroIdentificacion;
        }
    }
    registroLectura.close();
}

int main()
{
    crearCuenta();
}