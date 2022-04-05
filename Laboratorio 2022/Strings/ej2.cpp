#include <iostream>
using namespace std;
int main(){
    string palabra1;
    string palabra2;
    cout<<"escriba una palabra"<<endl;
    cin>>palabra1;
    cout<<"escriba otra palabra"<<endl;
    cin>>palabra2;
    char ultima_letra = palabra1[palabra1.size() -1];
    char ultima_letra2 = palabra2[palabra2.size() -1];

    (ultima_letra == ultima_letra2) ? cout<<"la ultima letra es igual"<<endl : cout<<"la ultima letra no es igual"<<endl;
}