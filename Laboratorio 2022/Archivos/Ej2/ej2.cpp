#include <iostream>
#include <fstream>
using namespace std;
int main(){
    ifstream archivo;
    int cont_nombre = 0;
    string nombre;
    string nombres;
    string ruta_archivo;
    cout<<"Ingrese un nombre de archivo"<<endl<<"opciones:"<<endl<<"nombres.txt"<<endl<<"apellidos.txt"<<endl;
    cin>>ruta_archivo;
    cout<<"ingrese un nombre"<<endl;
    cin>>nombre;
    archivo.open(ruta_archivo);
    if(archivo.is_open()){
        while(getline(archivo, nombres, ',')){
            if(nombre == nombres){
                cont_nombre++;
            }
        }
    }
    archivo.close();
    cout<<nombre<<" se repite "<<cont_nombre<<" veces"<<endl;
}