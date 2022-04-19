#include <iostream>
#include <fstream>
using namespace std;
int main(){
    ofstream archivo;
    string ruta_archivo;
    int cont = 0;
    int num1;
    int num2;
    int suma;
    cout<<"Ingrese un nombre de archivo"<<endl;
    cin>>ruta_archivo;
    archivo.open(ruta_archivo);
    if(archivo.is_open()){
        while(cont<3){
            cout<<"ingrese un numero"<<endl;
            cin>>num1;
            cout<<"escriba otro numero"<<endl;
            cin>>num2;
            archivo<<num1<<" + ";
            archivo<<num2<<" = ";
            suma = num1 + num2;
            archivo<<suma<<endl;
            cont++;
        }
    }
    archivo.close();
}