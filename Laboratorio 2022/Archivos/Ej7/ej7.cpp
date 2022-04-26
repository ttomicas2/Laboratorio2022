#include <iostream>
#include <fstream>
using namespace std;
int main(){
    ifstream archivo;
    ifstream archivo2;
    ofstream archivo3;
    string frase1;
    string frase2;
    int cont = 0;
    string ruta_archivo;
    string ruta_archivo2;
    cout<<"Ingrese un nombre de archivo"<<endl;
    cin>>ruta_archivo;
    cout<<"Ingrese otro nombre de archivo"<<endl;
    cin>>ruta_archivo2;
    archivo.open(ruta_archivo);
    archivo3.open("suma.txt");
    if (archivo.is_open() && archivo3.is_open()){
        while (getline(archivo, frase1, ':')){
            archivo2.open(ruta_archivo2);
            while(getline(archivo2, frase2, ':')){
                if(frase1 == frase2 && cont != 3){
                    archivo3<<frase1<<":";
                    cont++;
                }
                else if(frase1 == frase2 && cont == 3){
                    archivo3<<frase1<<endl;
                    cont = 0;
                }
            }
            archivo2.close();
        }
    }
}