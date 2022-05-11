#include <iostream>
#include <fstream>
#include <chrono>
using namespace std;
int main(){
    int stop=1;
    string nomusuario;
    string pregunta;
    int puntos;
    char respuesta;
    char rtusuario;
    ifstream p1;
    ifstream nombres;
    cout<<"Ingresa tu nombre"<<endl;
    cin>>nomusuario;
    nombres.open("nombres.txt");
    p1.open("1.txt");
    while(getline(p1, pregunta,'?')){
        cout<<pregunta<<"?"<<endl;
        stop--;
            while(stop==0){
                getline(p1, pregunta,' ');
                cout<<"a."<<pregunta<<endl;
                getline(p1, pregunta,' ');
                cout<<"b."<<pregunta<<endl;
                getline(p1, pregunta,' ');
                cout<<"c."<<pregunta<<endl;
                getline(p1, pregunta,' ');
                cout<<"d."<<pregunta<<endl; 
            stop++;
                            
                        
                    
                  
      }
    cin>>rtusuario;
}
}