#include <iostream>
#include <vector>
using namespace std;
void mostrar_vector(vector<int>numeros){
    for(int i = 0; i < numeros.size(); i++){
        cout<<numeros[i]<<endl;
    }
}
void suma(vector<int>numbers, vector<int>numbers2){
    vector<int>numbers3;
    int num3;
    if (numbers.size() != numbers2.size()){
        cout<<"los vectores son de distinto tamaño"<<endl;
    }
    else if (numbers.size() == numbers2.size()){
        for (int i = 0; i < numbers.size(); i++){
            num3 = numbers[i] + numbers2[i];
            numbers3.push_back(num3);
        }
        cout<<"El tamañardo de los vectorardos es acordardo mensardo, esta es la suma de los vectorardos anashe jiji"<<endl;
        mostrar_vector(numbers3);
    }
}
int main(){
    int num1;
    int num2;
    vector<int>numbers;
    vector<int>numbers2;
    
    while (num1 != 0){
        cout<<"ingrese un numero "<<"cuando quiera la lista ingrese 0"<<endl;
        cin>>num1;
        if(num1 != 0){
            numbers.push_back(num1);
        }
    }
    while (num2 != 0){
        cout<<"ingrese un numero "<<"cuando quiera la lista ingrese 0"<<endl;
        cin>>num2;
        if (num2 != 0){
            numbers2.push_back(num2);
        }
    }
    suma(numbers, numbers2);
}
