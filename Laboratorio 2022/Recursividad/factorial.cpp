#include <iostream>
using namespace std;

int factorial(int n){
    if(n <= 1){
        return 1;
    }
    else{
        return n * factorial(n-1);
    }
}

int main(){
    int suma = factorial(5);
    cout<<suma<<endl;
}