#include <iostream>
#include <vector>
#include <fstream>
using namespace std;

struct Diccionario{
    string palabraEsp;
    string palabraIng;
};

void mostrar(vector<int>vector){
    for(int i = 0; i < vector.size(); i++){
        cout<<vector[i]<<" ";
    }
    cout<<endl;
}

vector<Diccionario>llenar (){
    string palabra;
    ifstream archivo;
    Diccionario miDiccionario;
    vector<Diccionario>diccionario;
    archivo.open("diccionario.txt");
    int tamanoMatrizFilas = 1000;
    for(int i = 0; i < tamanoMatrizFilas && getline(archivo, palabra, ':') ;i++){
        miDiccionario.palabraEsp=palabra;
        getline(archivo, palabra, ';');
        miDiccionario.palabraIng=palabra;
        diccionario.push_back(miDiccionario);
    }
    return diccionario;
}

void convertirVector(vector<vector<int>>matriz){
    vector<int>vector;
    for(int i= 0; i < 4; i++){
        for(int e = 0; e < 4; e++){
            vector.push_back(matriz[i][e]);
        }
    }
    mostrar(vector);
}

vector<Diccionario> definir(Diccionario miDiccionario, string palabraEsp, string palabraIng, vector<Diccionario>diccionario){
    miDiccionario.palabraIng=palabraIng;
    miDiccionario.palabraEsp=palabraEsp;
    diccionario.push_back(miDiccionario);
    return diccionario;
}

bool existe(Diccionario miDiccionario, string palabra, int modo, vector<Diccionario>diccionario){
    bool existencia = false;
    for(int i = 0; i < diccionario.size(); i++){
        if(modo == 1){
            if(diccionario[i].palabraEsp == palabra){
                existencia = true;
            }
        }
        else{
            if(diccionario[i].palabraIng == palabra){
                existencia = true;
            }
        }
    }
    return existencia;
}

bool traducir(Diccionario miDiccionario, string palabra, int modo, vector<Diccionario>diccionario){
    bool existencia = false;
    for(int i = 0; i < diccionario.size(); i++){
        if(modo == 1){
            if(diccionario[i].palabraEsp == palabra){
                cout<<"la palabra traducida es: "<<diccionario[i].palabraIng<<endl;
                existencia = true;
            }
        }
        else{
            if(diccionario[i].palabraIng == palabra){
                existencia = true;
                cout<<"la palabra traducida es: "<<diccionario[i].palabraEsp<<endl;
            }
        }
    }
    return existencia;
}

void menu(vector<Diccionario>diccionario){
    Diccionario miDiccionario;
    string palabraEsp; 
    string palabraIng;
    int menu;
    bool salir = false;
    while(salir == false){
        cout<<"Ingrese que quiere hacer"<<endl;
        cout<<"1. Agregar definicion"<<endl;
        cout<<"2. Buscar palabra en diccionariardo"<<endl;
        cout<<"3. traducir una palabra"<<endl;
        cout<<"4. Salir"<<endl;
        cin>>menu;
        switch (menu)
        {
        case 1:
            cout<<"Ingrese una palabra en español"<<endl;
            cin>>palabraEsp;
            cout<<"Ingrese su traduccion en ingles"<<endl;
            cin>>palabraIng;
            diccionario=definir(miDiccionario, palabraEsp, palabraIng, diccionario);
            break;
        case 2:{
            int modo = 0;
            string palabra;
            bool existencia;
            while(modo != 1 && modo != 2){
                cout<<"Ingrese 1 si es en español y 2 si es en ingles"<<endl;
                cin>>modo;
            }
            cout<<"Ingrese la palabra que quiera buscar"<<endl;
            cin>>palabra;
            existencia=existe(miDiccionario, palabra, modo, diccionario);
            if(existencia == true){
                cout<<"La palabra existe"<<endl;
            }
            else{
                cout<<"La palabra no existe"<<endl;
            }
        }
            break;
        case 3:{
            int modo = 0;
            string palabra;
            bool traduccion;
            while(modo != 1 && modo!= 2){
                cout<<"Ingrese 1 si es en español y 2 si es en ingles"<<endl;
                cin>>modo;
            }
            cout<<"Ingrese la palabra que quiera buscar"<<endl;
            cin>>palabra;
            traduccion=traducir(miDiccionario, palabra, modo, diccionario);
            if(traduccion == true){
                cout<<"La traduccion se realizo con exito"<<endl;
            }
            else{
                cout<<"La traduccion no se pudo realizar"<<endl;
            }
        }
            break;   
        case 4:
            salir = true;
            break;
        default:
            cout<<"ingrese una opcion valida"<<endl;
            break;
        }
    }
}

int main(){
    vector<Diccionario>diccionario=llenar();
    menu(diccionario);
}