#include <iostream>
using namespace std;
int main(){
    int libros;
    int multi;
    int precio;

    cout<<"ingrese una cantidad de libros"<<endl;
    cin>>libros;

    if (libros>5){
        precio = 250;
    }
    else{
        precio = 300;
    }

    multi = libros * precio;
    
    cout<<multi<<endl;

    

    

}