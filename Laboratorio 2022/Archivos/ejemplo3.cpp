#include <iostream>
#include <fstream>
using namespace std;
int main(){
    ofstream archivo;
    string frase = "hoy es marte";
    archivo.open("hola.txt", ios::app);
    if(archivo.is_open()){
        archivo<<frase<<endl;
    }
    archivo.close();
}
