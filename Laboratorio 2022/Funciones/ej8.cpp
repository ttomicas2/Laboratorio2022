#include <iostream>
#include <fstream>
using namespace std;
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
            archivo.open(ruta_archivo);
            while(getline(archivo, frase)){
            cout<<frase<<endl;
            archivo.close();
            }
            break;
        case 2:
            remove(ruta_archivo.c_str());
            cout<<"se elimino el archivo exitosamente"<<endl;
            break;
        case 3:{
            string nuevo_nombre;
            cout<<"ingrese un nuevo nombre de archivo"<<endl;
            cin>>nuevo_nombre;
            rename(ruta_archivo.c_str(), nuevo_nombre.c_str());
            ruta_archivo = nuevo_nombre;
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