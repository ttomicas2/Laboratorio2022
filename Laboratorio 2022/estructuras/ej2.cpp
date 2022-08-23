#include <iostream>
#include <vector>
using namespace std;
struct Punto{
    int x;
    int y;
};
vector<Punto>llenar(vector<Punto>Puntos){
    int x;
    int y;
    Punto P;
    for(int i = 0;i < 5;i++){
        cout<<"ingrese x e y"<<endl;
        cin>>x;
        cin>>y;
        P.x = x;
        P.y = y;
        Puntos.push_back(P);
    }
    return Puntos;
}
void funcion(vector<Punto>Puntos){
    int e;
    for(int i = 0; i < Puntos.size(); i++){
        e=1;
        while((e+i)<Puntos.size()){
            if(Puntos[i].x == Puntos[i+e].x && Puntos[i].y == Puntos[i+e].y){
                cout<<"Los puntos son iguales"<<endl;
                cout<<Puntos[i].x<<","<<Puntos[i].y<<endl;
            }
            e++;
        }
    }
}

int main(){
    vector<Punto>Puntos;
    Puntos=llenar(Puntos);
    funcion(Puntos);
}