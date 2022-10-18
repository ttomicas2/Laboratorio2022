#include <iostream>
using namespace std;

int sumaHastaN(int n){
    if(n == 1){
        return n;
    }
    else{
        return n + sumaHastaN(n-1);
    }
}

int main(){
    int suma = sumaHastaN(5);
    cout<<suma<<endl;
}