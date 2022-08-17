#include <iostream>
using namespace std;
void variable( int &numero){
cout<<"ingrese un numero"<<endl;
cin>>numero;
}

int main(){
int numero;
variable(numero);
cout<<numero<<endl;


}