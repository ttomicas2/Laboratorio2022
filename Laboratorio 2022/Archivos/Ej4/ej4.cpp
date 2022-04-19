#include <iostream>
#include <fstream>
using namespace std;
int main(){
    ifstream archivo;
    string ruta_archivo;
    int num1;
    int num2;
    int suma;
    cout<<"Ingrese un nombre de archivo"<<endl<<"opciones:"<<endl<<"hola.txt"<<endl;
    cin>>ruta_archivo;
    archivo.open(ruta_archivo);
    if(archivo.is_open()){
        for(int i = 1; archivo>>num1; i++){
            archivo>>num2>>suma;
            if(num1 + num2 != suma){
                cout<<"La linea "<<i<<" esta mal"<<endl;
            }
        }
    }
    archivo.close();
}