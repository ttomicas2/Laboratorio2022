#include <iostream>
using namespace std;
int main(){
    string palabra1;
    char letra;
    cout<<"escribi una palabra"<<endl;
    cin>>palabra1;
    cout<<"escriba una letra"<<endl;
    cin>>letra;
    palabra1[palabra1.size() -1] = letra;
    cout<<palabra1<<endl;
}
