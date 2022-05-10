#include <iostream>
using namespace std;
void horas_faltantes(int horas, int minutos, int horas_restantes, int minutos_restantes ){
    if(horas < 12){
        horas_restantes = 12 - horas;
        if(minutos > 5){
            minutos_restantes = 60 - minutos + 5;
            horas_restantes--;
        }
        else{
            minutos_restantes = 5 - minutos;
        }
    }
    else if(horas > 12){
        horas_restantes = 36 - horas;
        if(minutos > 5){
            minutos_restantes = 60 - minutos + 5;
            horas_restantes--;
        }
        else{
            minutos_restantes = 5 - minutos;
        }
    }
    else if (horas == 12){
        if(minutos > 5){
            horas_restantes = 23;
            minutos_restantes = 60 - minutos + 5;
        }
        else{
            horas_restantes = 24;
            minutos_restantes = 5 - minutos;
        }       
    }
    cout<<"Faltan "<<horas_restantes<<" horas y "<<minutos_restantes<<" minuto/s"<<endl;
}

int main(){
    int horas;
    int minutos;
    int horas_restantes;
    int minutos_restantes;
    cout<<"Ingrese la hora"<<endl;
    cin>>horas;
    cout<<"Ingrese los minutos"<<endl;
    cin>>minutos;
    while(horas > 24 || minutos > 60 || horas < 0 || minutos < 0){
        cout<<"Ingrese una hora valida"<<endl;
        cin>>horas;
        cout<<"Ingrese unos minutos validos"<<endl;
        cin>>minutos;
    }
    horas_faltantes(horas, minutos, horas_restantes, minutos_restantes);
}