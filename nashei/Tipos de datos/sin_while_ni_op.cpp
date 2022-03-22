#include <iostream>
using namespace std;
int main(){
    int num;
    cout<<"Ingrese un numero"<<endl;
    cin>>num;
    if (num<0){
        num = num * (-1);
    }
    int division1 = (num / 2);
    int division2 = ((num + 1) / 2); 
    if (division1 == division2){
        cout<<"Es par"<<endl;
    }
    else{
        cout<<"es impar"<<endl;
    }
}