#include <iostream>
#include <vector>
#include <fstream>
#include <sstream>
using namespace std;

bool llena(vector<vector<int>>matriz){
    for(int i = 0; i < matriz.size(); i++ ){
        for (int j = 0; j < matriz[i].size(); j++){
            if(matriz[i][j] == 0){
                return false;
            }
        }
    }
    return true;
}

bool cuatroEnLinea(vector<vector<int>>matriz, int &jugadorGanador){
    int cantenFila = 0;
    int cantenColumna = 0;
    int cantenDiagonalP = 0;
    int cantenDiagonalM = 0;
    for(int i = 0; i < matriz.size(); i++){
        for(int j = 0; j < matriz[i].size(); j++){
            cantenFila = 0;
            cantenColumna = 0;
            cantenDiagonalP = 0;
            cantenDiagonalM = 0;
            if(matriz[i][j]==1){
                for(int enFila = j; enFila < matriz[i].size() && matriz[i][enFila]==1 ;enFila++){
                    cantenFila++;
                }
                for(int enFila = j - 1; enFila >= 0 && matriz[i][enFila]==1;enFila--){
                    cantenFila++;
                }
                for(int enColumna = i; enColumna < matriz.size() && matriz[enColumna][j]==1  ;enColumna++){
                    cantenColumna++;
                }
                for(int enColumna = i - 1; enColumna >= 0 && matriz[enColumna][j]==1;enColumna--){
                    cantenColumna++;
                }
                for(int enDiagonalP = 0;(i + enDiagonalP) < matriz.size() && (j + enDiagonalP) < matriz.size() && matriz[i + enDiagonalP][j+enDiagonalP]==1;enDiagonalP++){
                    cantenDiagonalP++;
                }
                for(int enDiagonalP = 1; (i - enDiagonalP) >= 0 && (j - enDiagonalP) >= 0 && matriz[i - enDiagonalP][j - enDiagonalP]==1;enDiagonalP++){
                    cantenDiagonalP++;
                }
                for(int enDiagonalM = 0; (i - enDiagonalM) >= 0 && (j + enDiagonalM) < matriz[i].size() && matriz[i - enDiagonalM][j + enDiagonalM]==1 ; enDiagonalM++){
                    cantenDiagonalM++;
                }
                for(int enDiagonalM = 1; (j - enDiagonalM) >= 0 && (i + enDiagonalM) < matriz[i].size() && matriz[i + enDiagonalM][j - enDiagonalM]==1; enDiagonalM++){
                    cantenDiagonalM++;
                }
                if(cantenFila >= 4 || cantenColumna >= 4 || cantenDiagonalP >= 4 || cantenDiagonalM >= 4){
                    jugadorGanador = 1;
                    return true;
                }
            }
            if(matriz[i][j]==2){
                for(int enFila = j; enFila < matriz[i].size() && matriz[i][enFila]==2 ;enFila++){
                    cantenFila++;
                }
                for(int enFila = j - 1; enFila >= 0 && matriz[i][enFila]==2;enFila--){
                    cantenFila++;
                }
                for(int enColumna = i; enColumna < matriz.size() && matriz[enColumna][j]==2  ;enColumna++){
                    cantenColumna++;
                }
                for(int enColumna = i - 1; enColumna >= 0 && matriz[enColumna][j]==2;enColumna--){
                    cantenColumna++;
                }
                for(int enDiagonalP = 0;(i + enDiagonalP) < matriz.size() && (j + enDiagonalP) < matriz.size() && matriz[i + enDiagonalP][j+enDiagonalP]==2;enDiagonalP++){
                    cantenDiagonalP++;
                }
                for(int enDiagonalP = 1; (i - enDiagonalP) >= 0 && (j - enDiagonalP) >= 0 && matriz[i - enDiagonalP][j - enDiagonalP]==2;enDiagonalP++){
                    cantenDiagonalP++;
                }
                for(int enDiagonalM = 0; (i - enDiagonalM) >= 0 && (j + enDiagonalM) < matriz[i].size() && matriz[i - enDiagonalM][j + enDiagonalM]==2 ; enDiagonalM++){
                    cantenDiagonalM++;
                }
                for(int enDiagonalM = 1; (j - enDiagonalM) >= 0 && (i + enDiagonalM) < matriz[i].size() && matriz[i + enDiagonalM][j - enDiagonalM]==2; enDiagonalM++){
                    cantenDiagonalM++;
                }
                if(cantenFila >= 4 || cantenColumna >= 4 || cantenDiagonalP >= 4 || cantenDiagonalM >= 4){
                    jugadorGanador = 2;
                    return true;
                }
            }
        }
    }
    return false;
}

void sumarPuntuacion (string nombre){
    ifstream registroLectura;
    ofstream registroEscritura;
    string linea;
    int lineaInt;
    string ruta_archivo = "usuarios.txt";
    string nuevo_nombre = "usuarios2.txt";
    rename(ruta_archivo.c_str(), nuevo_nombre.c_str());
    registroEscritura.open(ruta_archivo, ios::app);
    registroLectura.open(nuevo_nombre);
    while (getline(registroLectura, linea, ';')){
        registroEscritura << linea << ";";
        getline(registroLectura, linea, ';');
        registroEscritura << linea << ";";
        if(linea==nombre) {
            getline(registroLectura, linea, ';');
            lineaInt = stoi(linea);
            lineaInt++;
            registroEscritura << lineaInt << ";";
        }
        else{
            getline(registroLectura, linea, ';');
            registroEscritura << linea << ";";
        }
    }
    registroLectura.close();
    remove(nuevo_nombre.c_str()); 
}

void borrarPartida (string nombre){
    ifstream registroLectura;
    ofstream registroEscritura;
    string linea;
    int lineaInt;
    string ruta_archivo = "partidas.txt";
    string nuevo_nombre = "partidas2.txt";
    rename(ruta_archivo.c_str(), nuevo_nombre.c_str());
    registroEscritura.open(ruta_archivo, ios::app);
    registroLectura.open(nuevo_nombre);
    while (getline(registroLectura, linea, ':')){
        getline(registroLectura, linea, ':');
        if(linea==nombre) {
            for(int i = 0; i<=15; i++){
                getline(registroLectura, linea);
            }
        }
        else{
            registroEscritura << ":" << linea << ":";
            for(int i = 0; i<=15; i++){
                getline(registroLectura, linea);
                registroEscritura << linea << endl;
            }
        }
    }
    registroLectura.close();
    remove(nuevo_nombre.c_str()); 
}

void guardarPartida(vector<vector<int>>&matriz, string nombreUsuario, string nombreUsuario2){
    ofstream archivo;
    archivo.open("partidas.txt", ios::app);
    archivo<<endl<<":"<<nombreUsuario<<" vs "<<nombreUsuario2<<":";
    for(int i = 0; i<matriz.size(); i++){
        archivo<<endl;
        for(int j = 0; j <matriz[i].size(); j++){
            archivo<<matriz[i][j]<<" ";
        }
    }
}

void mostrarTablero(vector<vector<int>>matriz){
    cout<<"|  ||1 ||2 ||3 ||4 ||5 ||6 ||7 ||8 ||9 ||10||11||12||13||14||15|"<<endl;
    for(int i = 0; i<matriz.size() ; i++){
        if(i+1 < 10){
            cout<<"|"<<i+1<<" |";
        }
        else{
            cout<<"|"<<i+1<<"|";
        }
        for(int j = 0; j<matriz[i].size(); j++){
            if(matriz[i][j]==0){
                cout<<"|  |";
            }
            else if(matriz[i][j] == 1){
                cout<<"|X |";
            }
            else if(matriz[i][j] == 2){
                cout<<"|O |";
            }
        }
        cout<<endl;
    }
}

string juego(vector<vector<int>>&matriz, string nombreUsuario, string nombreUsuario2){
    int jugadorGanador = 0;
    string seguir;
    while(!llena(matriz) && !cuatroEnLinea(matriz, jugadorGanador)){
        seguir = "Asheeee";
        mostrarTablero(matriz);
        int columna=0;
        while(columna>15 || columna < 1){
            cout<<"Es el turno de "<<nombreUsuario<<endl;
            cin>>columna;
            if(columna>15 || columna < 1){
                cout<<"Ingrese un numero valido"<<endl;
            }
        }
        for(int i = 14; i>=0 ; i--){
            if(matriz[i][columna-1]==0){
                matriz[i][columna-1]=1;
                i = -1;
            }
        }
        if(!llena(matriz) && !cuatroEnLinea(matriz, jugadorGanador)){
            mostrarTablero(matriz);
            columna=0;
            while(columna>15 || columna < 1){
                cout<<"Es el turno de "<<nombreUsuario2<<endl;
                cin>>columna;
                if(columna>15 || columna < 1){
                    cout<<"Ingrese un numero valido"<<endl;
                }
            }
            for(int i = 14; i>=0 ; i--){
                if(matriz[i][columna-1]==0){
                    matriz[i][columna-1]=2;
                    i = -1;
                }
            }
            if(!llena(matriz) && !cuatroEnLinea(matriz, jugadorGanador)){
                mostrarTablero(matriz);
                while(seguir[0] != 'S' && seguir[0] != 's' && seguir[0] != 'N' && seguir[0] != 'n'){
                    cout<<"¿Quieren seguir jugando?(S/N)"<<endl;
                    cin>>seguir;
                    if(seguir[0] == 'N' || seguir[0] == 'n') {
                        return seguir;
                    } 
                    if(seguir[0] != 'S' && seguir[0] != 's' && seguir[0] != 'N' && seguir[0] != 'n'){
                        cout<<"Ingrese una opcion valida"<<endl;
                    }
                }
            }
        }
    }
    mostrarTablero(matriz);
    if(llena(matriz)){
        cout<<"La matriz esta llena"<<endl;
    }
    else if(jugadorGanador==1){
        cout<<"Gano "<<nombreUsuario<<endl;
        sumarPuntuacion(nombreUsuario);
    }
    else{
        cout<<"Gano "<<nombreUsuario2<<endl;
        sumarPuntuacion(nombreUsuario2);
    }
    return "S";
}

bool chequearPartida(string nombre){
    ifstream archivo;
    string linea;
    archivo.open("partidas.txt");
    while(getline(archivo, linea, ':')) {
        if(linea == nombre){
            return true;
        }
    }
    return false;
}

bool chequear(string nombre){
    ifstream archivo;
    string linea;
    archivo.open("usuarios.txt");
    while(getline(archivo, linea, ';')) {
        getline(archivo, linea, ';');
        if(linea == nombre){
            return true;
        }
        getline(archivo, linea, ';');
    }
    return false;
}

void crearUsuario(string nombre){
    ofstream archivo;
    archivo.open("usuarios.txt", ios::app);
    archivo <<endl<<";" << nombre << ";" << "0" << ";";
}

void cargarPartida(string nombreUsuario, string nombreUsuario2){
    string nombrePartida;
    bool esta;
    ifstream archivo;
    int n;
    string linea;
    string seguir;
    vector<int>v1;
    nombrePartida= nombreUsuario + " vs " + nombreUsuario2;
    vector<vector<int>>matriz;
    if(chequearPartida(nombrePartida)){
        archivo.open("partidas.txt");
        while(getline(archivo, linea, ':')){
            if(nombrePartida == linea){
                for(int i = 0; i<15 ; i++){
                    v1= {};
                    for(int i = 0; i<15; i++){
                        archivo>>n;
                        v1.push_back(n);
                    }
                    matriz.push_back(v1);
                }
            }
        }
        seguir = juego(matriz, nombreUsuario, nombreUsuario2);
        if(seguir[0] == 'N' || seguir[0] == 'n'){
            borrarPartida(nombrePartida);
            guardarPartida(matriz, nombreUsuario, nombreUsuario2);
        }
        else{
            borrarPartida(nombrePartida);
        }
    }
    else if(!chequearPartida(nombrePartida)){
        cout<<"No se encontro la partida"<<endl;
    }
}

void iniciarPartida(vector<vector<int>>matriz ){
    ofstream archivo;
    string nombreUsuario;
    string nombreUsuario2;
    string nombrePartida;
    string seguir;
    string cargar;
    bool esta = true;
    archivo.open("partidas.txt", ios::app);
    cout<<"Ingrese nombre de usuario o pase a registrarse por favor si es usted muy amable."<<endl;
    cin>>nombreUsuario;
    if(!chequear(nombreUsuario)){
        crearUsuario(nombreUsuario);
        cout<<"No se encontro, usuario creado"<<endl;
    }
    nombreUsuario2 = nombreUsuario;
    while(nombreUsuario == nombreUsuario2){
        cout<<"Ingrese el nombre del segundo jugador"<<endl;
        cin>>nombreUsuario2;
        if(nombreUsuario == nombreUsuario2){
            cout<<"No se puede jugar contra uno mismo"<<endl;
        }
    }
    if(!chequear(nombreUsuario2)){
        crearUsuario(nombreUsuario2);
        cout<<"No se encontro, usuario creado"<<endl;
    }
    nombrePartida= nombreUsuario + " vs " + nombreUsuario2;
    if(chequearPartida(nombrePartida)){
        while(cargar[0] != 'C' && cargar[0] != 'c' && cargar[0] != 'E' && cargar[0] != 'e'){
            cout<<"Ya hay una partida con ese nombre, ¿Desea cargarla o eliminarla y crear una nueva?(C/E)"<<endl;
            cin>>cargar;
            if(cargar[0] == 'C' || cargar[0] == 'c'){
                cargarPartida(nombreUsuario, nombreUsuario2);
            }
            else if(cargar[0] == 'E' || cargar[0] == 'e'){
                borrarPartida(nombrePartida);
                seguir = juego(matriz, nombreUsuario, nombreUsuario2);
                if(seguir[0] == 'N' || seguir[0] == 'n'){
                    borrarPartida(nombrePartida);
                    guardarPartida(matriz, nombreUsuario, nombreUsuario2);
                }
                else{
                    borrarPartida(nombrePartida);
                }
            }
            else{
                cout<<"Ingrese una opcion valida"<<endl;
            }
        }
    }
    else{
        seguir = juego(matriz, nombreUsuario, nombreUsuario2);
        if(seguir[0] == 'N' || seguir[0] == 'n'){
            borrarPartida(nombrePartida);
            guardarPartida(matriz, nombreUsuario, nombreUsuario2);
        }
        else{
            borrarPartida(nombrePartida);
        }
    }
}

void verPuntuacion(){
    ifstream archivo;
    string nombre;
    string linea;
    bool esta = false;
    cout<<"Ingrese su nombre"<<endl;
    cin>>nombre;
    archivo.open("usuarios.txt");
    while(getline(archivo, linea, ';')) {
        getline(archivo, linea, ';');
        if(nombre==linea) {
            getline(archivo, linea, ';');
            cout<< "Sus puntos: " << linea<<endl;
            cout<<" "<<endl;
            esta = true;
        }
        else{
            getline(archivo, linea, ';');
        }
    }
    if(!esta){
        cout<<"No se encontro el usuario"<<endl;
    }
}

void verPodio(){
    ifstream archivo;
    string linea;
    string lineaNombre;
    int lineaInt;
    int puntosPrimero = 0;
    int puntosSegundo = 0;
    int puntosTercero = 0;
    string nombrePrimero;
    string nombreSegundo;
    string nombreTercero;
    archivo.open("usuarios.txt");
    while(getline(archivo, linea, ';')) {
        getline(archivo, lineaNombre, ';');
        getline(archivo, linea, ';');
        lineaInt = stoi(linea);
        if(puntosPrimero<=lineaInt) {
            puntosTercero=puntosSegundo;
            nombreTercero=nombreSegundo;
            puntosSegundo=puntosPrimero;
            nombreSegundo=nombrePrimero;
            puntosPrimero=lineaInt;
            nombrePrimero=lineaNombre;
        } else if(puntosSegundo<=lineaInt) {
            puntosTercero=puntosSegundo;
            nombreTercero=nombreSegundo;
            puntosSegundo=lineaInt;
            nombreSegundo=lineaNombre;
        } else if(puntosTercero<=lineaInt) {
            puntosTercero=lineaInt;
            nombreTercero=lineaNombre;
        }
    }
    
    cout<<"1- " << nombrePrimero << " !puntitos= " << puntosPrimero << endl;
    cout<<"2- " << nombreSegundo << " !puntitos= "<< puntosSegundo << endl;
    cout<<"3- " << nombreTercero << " !puntitos= "<< puntosTercero << endl;
}


void menu(){
    cout<<"Ingrese una opcion"<<endl;
    cout<<"1. Iniciar nueva partida"<<endl;
    cout<<"2. Cargar partida guardada"<<endl;
    cout<<"3. Ver tu puntuacion"<<endl;
    cout<<"4. Ver podio"<<endl;
    cout<<"5. salir"<<endl;
}



int main(){
    vector<vector<int>>matriz={
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}
    };  
    int n;
    bool salir = false;
    while(!salir){
        menu();
        cin>>n;
        switch (n) {
            case 1: 
            iniciarPartida(matriz);
            break;

            case 2:{
            bool esta = false;
            string nombreUsuario;
            string nombreUsuario2;
            while(!chequear(nombreUsuario)){
                cout<<"Ingrese su nombre para acceder a sus datos"<<endl;
                cin>>nombreUsuario;
                if(!chequear(nombreUsuario)){
                    cout<<"No existe un usuario con ese nombre"<<endl;
                } 
            }
            while(!chequear(nombreUsuario2)){
                cout<<"Ingrese su nombre para acceder a sus datos"<<endl;
                cin>>nombreUsuario2;
                if(!chequear(nombreUsuario)){
                    cout<<"No existe un usuario con ese nombre"<<endl;
                } 
            }
            cargarPartida(nombreUsuario, nombreUsuario2);
            }
            break;

            case 3:
            verPuntuacion();
            break;

            case 4: 
            verPodio();
            break;
            
            case 5:
            salir = true;
            break;

            default:
            cout<<"Elija una opción válida por favor"<<endl;
            break;
        }
    }
}