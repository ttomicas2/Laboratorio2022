#include <iostream>
using namespace std;
int menu(int num){
    cout<<"elija una opcion "<<endl<<"1. Suma 2. Resta 3. Multiplicación 4. División 5. Salir"<<endl;
    cin>>num;
    return num;
}

int main(){
    int num;
  num = menu(num);
}    