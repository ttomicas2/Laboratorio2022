#include <iostream>
#include <fstream>
using namespace std;
void opcion1 (string ruta_archivo, string frase){
    ifstream archivo;
    archivo.open(ruta_archivo);
    while(getline(archivo, frase)){
    cout<<frase<<endl;
    }
    archivo.close();
}
void opcion2 (string ruta_archivo){
    remove(ruta_archivo.c_str());
    cout<<"se elimino el archivo exitosamente"<<endl;
}
string opcion3 (string ruta_archivo, string frase){
    ifstream archivo;
    string nuevo_nombre;
    cout<<"ingrese un nuevo nombre de archivo"<<endl;
    cin>>nuevo_nombre;
    rename(ruta_archivo.c_str(), nuevo_nombre.c_str());
    ruta_archivo = nuevo_nombre;
    cout<<"El nuevo nombre es: "<<nuevo_nombre<<endl;
    return ruta_archivo;
}
int main(){
    ifstream archivo;
    string ruta_archivo;
    string frase;
    int num = 1;
    bool loop = true;
    cout<<"Ingrese un nombre de archivardo"<<endl;
    cin>>ruta_archivo;
    while(loop){
        cout<<"Elija que quiere hacer"<<endl<<"0 = finalizar programa"<<endl<<"1 = mostrar contenido"<<endl<<"2 = Eliminar archivo"<<endl<<"3 = renombrar archivo"<<endl;
        cin>>num;
        switch (num){
        case 1:
            opcion1(ruta_archivo, frase);
            break;
        case 2:
            opcion2(ruta_archivo);
            break;
        case 3:{
            ruta_archivo = opcion3(ruta_archivo, frase);
            break;
            }
        case 0:
            loop = false;
            break;
        default:
            cout<<"ingrese una opcion valida"<<endl;
            break;
        }
    }
}