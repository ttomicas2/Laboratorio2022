#include <iostream>
#include <vector>
using namespace std;

void mostrar(vector<int>vector){
    for(int i = 0; i < vector.size(); i++){
        cout<<vector[i]<<" ";
    }
    cout<<endl;
}

vector<vector<int>>llenar (){
    int num;
    vector<int>v1;
    vector<int>v2;
    vector<int>v3;
    vector<int>v4;
    for(int i = 1; i < 5 ; i++){
        for(int e = 0; e < 4; e++){
            cout<<"ingrese numeros en la matriz"<<endl;
            cin>>num;
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

void convertirVector(vector<vector<int>>matriz){
    vector<int>vector;
    for(int i= 0; i < 4; i++){
        for(int e = 0; e < 4; e++){
            vector.push_back(matriz[i][e]);
        }
    }
    mostrar(vector);
}

int main(){
    vector<vector<int>>matriz=llenar();
    convertirVector(matriz);
}