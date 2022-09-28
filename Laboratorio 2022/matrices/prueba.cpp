#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<vector<int>>matriz={           
    {1,2,3},
    {4,5,6},
    {7,8,9} 
    };
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout<<matriz[i][j];
        }
        cout<<endl;
    }
    matriz[1].erase(matriz[1].end() - (matriz[1].end() - 1) );
    for(int i = 0; i < matriz.size(); i++){
        for(int j = 0; j < matriz[i].size(); j++){
            cout<<matriz[i][j];
        }
        cout<<endl;
    }
}