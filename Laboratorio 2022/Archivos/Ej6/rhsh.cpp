#include <iostream>
#include <fstream>
using namespace std;
int main(){
    ifstream archivo1;
    ifstream archivo2;
    ofstream archivout;
    string frase1;
    string frase2;
    string frase3;
    int cont=0;
    archivo1.open("texto.txt");
    archivo2.open("numeros.txt");
    archivout.open("diferencias.txt");
    if(archivo1.is_open() && archivo2.is_open() && archivout.is_open()){
        while(getline(archivo1, frase1, ':')){
            while(getline(archivo2, frase2, ':')){
                if(frase1==frase2){
                    frase3=frase1;
                    if(frase3!="\n"){
                        archivout<<frase3<<":";
                        cont++;
                        if(cont==4){
                            archivout<<endl;
                            cont=0;
                        }
                    }
                }
            }
            archivo2.close();
            archivo2.open("numeros.txt");
        }
    }
    archivo1.close();
    archivo2.close();
    archivout.close();
}