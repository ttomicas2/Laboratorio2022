#include <iostream>
using namespace std;
int main(){
    float num;
    int multi;

    while (num !=0) {
      
        cout<<"ingrese los numeros que quiera"<<endl;
        cin>>num;
   
        if (num ==0)
        {
          cout<<"su numero no es valido"<<endl;
        }
        else
        {
          multi = num * 2;
          cout<<multi<<endl;
        }
    }
}