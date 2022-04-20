#include <iostream>
#include <fstream>
using namespace std;
int main(){
    ifstream archivo;
    string frase;
    string ruta_archivo;
    cout<<"Escriba un nombre de archivo"<<endl<<"opciones:"<<endl<<"hola.txt"<<endl<<"palabras.txt"<<endl;
    cin>>ruta_archivo;
    archivo.open(ruta_archivo);
    if(archivo.is_open()){
        while(getline(archivo, frase)){
            cout<<frase<<endl;
        }
    }
    archivo.close();
}