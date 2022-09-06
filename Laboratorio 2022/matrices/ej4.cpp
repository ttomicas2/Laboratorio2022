#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>>llenar(){
    int num = 1;
    vector<int>v1;
    vector<int>v2;
    vector<int>v3;
    vector<int>v4;
    for(int i = 1; i < 5 ; i++){
        for(int e = 0; e < 4; e++){
            num = num + 2;
            if(i == 1){
            v1.push_back(num);
            }
            else if(i == 2){
            v2.push_back(num);
            }
            else if(i == 3){
            v3.push_back(num);
            }
            else{
            v4.push_back(num);
            }
        }
    }
    vector<vector<int>> matriz;
    matriz.push_back(v1);
    matriz.push_back(v2);
    matriz.push_back(v3);
    matriz.push_back(v4);
    return matriz;
}

void telekino(vector<vector<int>>matriz){
    int num = 0;
    int acertadas = 0;
    for(int i= 0; i < 4; i++){
        for(int e = 0; e < 4; e++){
            cout<<"Ingrese su numero"<<endl;
            cin>>num;
            while(num<0 || num > 40){
                cout<<"Ingrese un numero valido"<<endl;
            }
            if(matriz[i][e] == num){
                acertadas++;
            }
        }
    }
    if(acertadas == 16){
        cout<<"Acertaste todas, quedaste en primer lugar"<<endl;
    }
    else if(acertadas == 15){
        cout<<"Quedaste en segundo lugar"<<endl;
    }
    else if(acertadas == 14){
        cout<<"Quedaste en tercer lugar"<<endl;
    }
    else if(acertadas <= 13){
        cout<<"No ganaste nada"<<endl;
    }
}

int main(){
    vector<vector<int>>matriz=llenar();
    telekino(matriz);
}
