#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int>enteros={1,2,3,4,5,6,7};
    enteros.erase(enteros.end() - (enteros.size() - 3));
    for(int i = 0; i < enteros.size(); i++){
        cout<<enteros[i]<<endl;;
    }
}