#include <iostream>
#include <vector>
using namespace std;
void mostrar_vector(vector<int>numeros){
    for(int i = 0; i < numeros.size(); i++){
        cout<<numeros[i]<<endl;
    }
}
int main(){
    vector<int>v1;
    vector<int>v2;
    vector<int>v3;
    vector<int>indices;
    int num;
    for(int i = 0; i < 2; i++){
        cout<<"Escriba un numero que quiera ingresar en el vector"<<endl;
        cin>>num;
        if(i == 0){
        v1.push_back(3);
        } 
        v1.push_back(num);
    }
    for(int i = 0; i < 2; i++){
        cout<<"Escriba un numero que quiera ingresar en el vector"<<endl;
        cin>>num;
        if(i == 1){
        v2.push_back(3);
        } 
        v2.push_back(num);
    }
    for(int i = 0; i < 2; i++){
        cout<<"Escriba un numero que quiera ingresar en el vector"<<endl;
        cin>>num;
        v3.push_back(num);
        if(i == 1){
        v3.push_back(3);
        } 
    } 
    for(int i = 0; i < v1.size(); i++){
        if(v1[i] == 3){
            indices.push_back(i);
        }
    }
        for(int i = 0; i < v1.size(); i++){
        if(v2[i] == 3){
            indices.push_back(i);
        }
    } 
        for(int i = 0; i < v1.size(); i++){
        if(v3[i] == 3){
            indices.push_back(i);
        }
    } 
    mostrar_vector(indices);
}