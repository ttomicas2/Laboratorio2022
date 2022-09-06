#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>>llenar (){
    int num;
    vector<int>v1;
    vector<int>v2;
    vector<int>v3;
    for(int i = 1; i < 4 ; i++){
        for(int e = 0; e < 3; e++){
            cout<<"ingrese numeros en la matriz"<<endl;
            cin>>num;
            if(i == 1){
            v1.push_back(num);
            }
            else if(i == 2){
            v2.push_back(num);
            }
            else{
            v3.push_back(num);
            }
        }
    }
    vector<vector<int>> matriz;
    matriz.push_back(v1);
    matriz.push_back(v2);
    matriz.push_back(v3);
    return matriz;
}

void buscar(vector<vector<int>>matriz, int num){
    bool esta = false;
    for(int i= 0; i < 3; i++){
        for(int e = 0; e < 3; e++){
            if(num == matriz[i][e]){
                esta = true;
            }
        }
    }
    if(esta == true){
    cout<<"El numero esta"<<endl;
    }
    else{
        cout<<"El numero no esta"<<endl;
    }
}

int main(){
    vector<vector<int>>matriz=llenar();
    int num = 0;
    cout<<"Ingrese un numero para buscar en la matriz"<<endl;
    cin>>num;
    buscar(matriz, num);
}