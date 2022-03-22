#include <iostream>
using namespace std;
int main(){
    int num;
    cout<<"ingrese un numero"<<endl;
    cin>>num;
    if (num < 0){
        num = num * (-1);   
    }
    
    if (num%2== 0){
        cout<<"El numero es par"<<endl;

    }
    else{
        cout<<"es impar"<<endl;
    }


}