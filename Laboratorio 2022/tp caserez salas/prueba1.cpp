#include <iostream>
#include <fstream>
#include <chrono>
using namespace std;
int main(){
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
    while(getline(p1, pregunta,',')){
    while(getline(p1, pregunta,'?')){
    cout<<pregunta<<"?"<<endl;
    }
    while(getline(p1, pregunta,' ')){
    cout<<"a"<<pregunta<<endl;
    }
    while(getline(p1, pregunta,' ')){
    cout<<"b"<<pregunta<<endl;
    }
    while(getline(p1, pregunta,' ')){
    cout<<"c"<<pregunta<<endl;
    }
    while(getline(p1, pregunta,' ')){
    cout<<"d"<<pregunta<<endl;
    }
    cin>>rtusuario; 
    }
}