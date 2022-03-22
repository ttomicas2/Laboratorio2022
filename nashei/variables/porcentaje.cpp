#include <iostream>
using namespace std;
int main(){
    int hombre;
    int mujer;
    float total;
    float porcentajeh;
    float porcentajem;

    cout<<"ingrese numero de hombres"<<endl;
    cin>>hombre;
    cout<<"ingrese numero de mujeres"<<endl;
    cin>>mujer;
    total = hombre + mujer;
    porcentajem = (hombre * 100) / total;
    porcentajeh = (mujer * 100) / total;

    cout<<"porcentaje de hombres"<<endl;
    cout<<porcentajeh<<endl;
    cout<<"porcentaje de mujeres"<<endl;
    cout<<porcentajem<<endl;
}