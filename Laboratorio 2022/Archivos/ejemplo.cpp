#include <iostream>
#include <fstream>
using namespace std;
int main(){
ifstream archivo;
string frase;
string rutarchivo = "hola.txt";
archivo.open("hola.txt");
if (archivo.is_open())
{
    while (getline(archivo, frase,'.'))
    {
        cout<<frase<<endl;
    }

}
archivo.close();
}