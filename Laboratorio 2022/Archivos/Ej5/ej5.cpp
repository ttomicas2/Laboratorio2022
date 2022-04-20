#include <iostream>
#include <fstream>
using namespace std;
int main(){
    ifstream archivo;
    ofstream archivo2;
    string ruta_archivo;
    string frase;
    int ASCII;
    char caracter;
    cout<<"ingrese el nombre de un archivo"<<endl;
    cin>>ruta_archivo;
    archivo.open(ruta_archivo);
    archivo2.open("mayusculas.txt");
    if(archivo.is_open() && archivo2.is_open()){
        while(getline(archivo,frase)){
            for(int i = 0; i < frase.size();i++){
                caracter=frase[i];
                ASCII = caracter;
                if(ASCII > 96 && ASCII < 123){
                    ASCII = ASCII - 32;
                }
                caracter = ASCII;
                frase[i]=caracter;
            }
        archivo2<<frase<<endl;
        }
    }
    archivo.close();
    archivo2.close();
}