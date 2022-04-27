#include <iostream>
using namespace std;
int horas_faltantes(int horas, int minutos){
    int horas_restantes;
    int minutos_restantes;
    if(horas < 12){
        horas_restantes = 12 - horas;
        if(minutos > 5){
            minutos_restantes = minutos - 5;
        }
    }
    else if(horas > 12){
        
    }
}

int main(){
    int horas;
    int minutos;
    cout<<"Ingrese la hora"<<endl;
    cin>>horas;
    cout<<"Ingrese los minutos"<<endl;
    cin>>minutos;

}