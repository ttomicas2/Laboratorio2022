#include <iostream>
using namespace std;
    int suma(float num1, float num2, float num3){
    num3 = num1 + num2;
    return num3;
}

int main(){
    float num1;
    float num2;
    float num3;
    cout<<"ingrese un numero"<<endl;
    cin>>num1;
    cout<<"ingrese otro numero"<<endl;
    cin>>num2;
    num3 = suma(num1, num2 , num3);
    cout<<"la suma da "<<endl<<num3<<endl;    
}