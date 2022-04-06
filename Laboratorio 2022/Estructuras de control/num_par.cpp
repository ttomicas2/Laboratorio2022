#include <iostream>
using namespace std;
int main(){
    float num;
    cout<<"ingrese un numero"<<endl;
    cin>>num;
    if (num < 0){
        num = num * (-1);
    }
    while (num >= 1){
            num = num-2;
        }
    if (num == 0) {
        cout<<"es par"<<endl;
    }
    else{
        cout<<"es impar"<<endl;
    }
}  