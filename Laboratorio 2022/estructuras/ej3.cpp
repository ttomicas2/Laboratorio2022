#include<iostream>
#include<vector>
using namespace std;
struct Especimen{
    bool respira;
    int cant_ojos;
};
vector<Especimen>llenar(vector<Especimen>Especimenes){
    bool respira;
    bool invalida;
    string string_respira;
    int cant_ojos;
    Especimen E;
    for(int i = 0;i < 10;i++){
        invalida = true;
        cout<<"ingrese si respira(true o false) y la cantidad de ojos"<<endl;
        while(invalida == true){
            cin>>string_respira;
            if(string_respira == "true" || string_respira == "True" || string_respira == "TRUE"){
                respira = true;
                invalida = false;
            }
            else if(string_respira == "false" || string_respira == "False" || string_respira == "FALSE"){
                respira = false;
                invalida = false;
            }
            else{
                cout<<"Ingrese una opcion valida"<<endl;
            }
        }
        cin>>cant_ojos;
        E.respira = respira;
        E.cant_ojos = cant_ojos;
        Especimenes.push_back(E);
    }
    return Especimenes;
}
void avg(vector<Especimen>Especimenes){
    int promedio = 0;
    int prom= 0;
    for(int i = 0; i < Especimenes.size(); i++){
        if(Especimenes[i].respira == true){
            promedio += Especimenes[i].cant_ojos;
            prom++; 
        }
    }
    cout<<"Promedio de cantidad de ojos de los especimenes que respiran: "<< promedio/prom << endl;
}
int main(){
    vector<Especimen>Especimenes;
    Especimenes=llenar(Especimenes);
    avg(Especimenes);
}