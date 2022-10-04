#include <iostream>
#include <cmath> 
#include <vector>
#include <string>
#include <iostream>
#include <fstream>
using namespace std;


/************* Ejercicio 1 *************/

// Decidir si un vector esta ordenado tanto ascendente como descendentemente
bool estaOrdenadoAsc(vector<int> v){
  int i=0;
  int longitud = v.size();
  bool esMenor = true;
  while(i<=longitud-2 && esMenor){
    esMenor = v[i]<=v[i+1];
    i++;
  }
  return i==longitud-1;
}

bool estaOrdenadoDesc(vector<int> v){
  int longitud = v.size();
  int i=0;
  bool esMayor = true;
  while(i<=longitud-2 && esMayor){
    esMayor = v[i]>=v[i+1];
    i++;
  }

  return i==longitud-1;
}

bool estaOrdenado(vector<int> v){
  int longitud = v.size();
  if (longitud==0 || longitud==1)
    return true;
  else
    return estaOrdenadoDesc(v) || estaOrdenadoAsc(v);
  }


/************* Ejercicio 2 *************/

// Decidir si un numero es primo.
bool esPrimo(int numero){
  if(numero>2) {
    int i=2;
    bool divide = false;
    while(i<numero && !divide){
      divide = numero%i == 0;
      i++;
    }  
    return i==numero;
  }
  else if(numero==2){
    return true;
  }
  else{
    return false;
  }
}

/************* Ejercicio 3 *************/

// Decidir si un elemento dado pertenece al vector.
bool pertenece(int elemento, vector<int> v){
  int longitud = v.size();
  if(longitud==0)
   return false;
  else {
   int i=0;
   bool sigo = true;
   while((i<=longitud) && sigo){
    sigo = v[i]!=elemento;
    i++;
  }
   return i<=longitud;
  }
}

/************* Ejercicio 4 *************/

// Calcular el k-esimo numero de fibonacci
long fibonacci(int k){
  if(k==0){
    return 0;
  } 
  else if(k==1){
    return 1;
  }  
  else{
    long i=0;
    long j=1;
    long m;
    int nesimo;
    for(nesimo==1; nesimo<=k; nesimo++){
      m = j;
      j = i+j;
      i = m;
    }
    return j;
  }
}

/************* Ejercicio 5 *************/

// Encontrar el maximo comun divisor de dos numeros
int maximo(int x, int y){
  if(x<0){
    x=-x;
  }  
  if(y<0){
    y=-y;
  } 
  if(x>y){
    return x;
  }  
  else {
    return y;
  } 
}

int minimo(int x, int y){
  if(x<0){
    x=-x;
  }
  if(y<0){
    y=-y;
  }
  if(x<y){
    return x;
  }
  else{
    return y;
  }
}

int maximoComunDivisor(int x, int y){
  int a = maximo(x,y);
  int b = minimo(x,y);
  int resto;
  while((b!=0) && (b!=1)){
    resto = a%b;
    a = b;
    b = resto;
  }
  if(a==0)
    return a;
  else
    return 1;
 }

/************* Ejercicio 6 *************/

// Para un vector de enteros, calcular la sumatoria del doble de los elementos positivos y pares.
int sumaDoble(vector<int> v){
  int suma=0;
  for(unsigned int i=0; i<v.size(); i++){
    if(v[i]%2==0 && v[i]>=0) 
      suma += v[i]*2;
  }
  return suma;
}

/************* Ejercicio 7 *************/

// Contar la cantidad de palabras que hay en un archivo de texto.
int cantPalabras(string filename) {
  ifstream miArchivo;
  string palabra;
  int cont = 0;

  miArchivo.open(filename.c_str(), ifstream::in);
  if(miArchivo.is_open()) {
    while(!miArchivo.eof()) {
      miArchivo >> palabra;
      cont++;
    }
  }
  miArchivo.close();
  return cont;
}

/************* Ejercicio 8 *************/

/* El archivo SensadoRemoto.txt contiene una lista de valores reales provenientes de una estacion
* de medicion de una variable fisica dada, cuyos valores son positivos menores a 1.
* Escribir un programa que calcule el promedio de los valores tomados durante un periodo de tiempo.
* Verificar el resultado obtenido.
*/
float valorMedio() {
  ifstream miArchivo;
  float val;
  float acum = 0;
  int cont = 0;

  miArchivo.open("datos/SensadoRemoto.txt",ifstream::in);
  if(miArchivo.is_open()) {
    while(!miArchivo.eof()) {
      miArchivo >> val;
      if(val < 1 && val >0){
      acum += val;
      cont++;
      }
    }
  }
  miArchivo.close();

  return acum/cont;
}

// Devolver en res la fraccion (entre 0 y 1) de numeros mayores a 0.
float fraccion(vector<int> v, float &res){
  float count = 0;
  float longitud = v.size();
  for(int i = 0; i < v.size(); i++){
    if(v[i] > 0){
      count++;
    }
  }
  if(v.size() != 0){
  res = count / longitud;
  }
}

void printBeginTest(int testNumber, string testName){
    cout << "Corriendo test " << testNumber << " " << testName << endl;
}

void printEndTest(int testNumber, string testName){
    cout << "Finalizado test " << testNumber << " " << testName << endl << endl;
}

bool esAproximado(const float calc, const float orig){
  float num;
    float precision = 0.01;
    float absErr = abs(calc-orig);
    if(calc == 0 || orig == 0){
        return absErr < precision;
    }else{
        return (absErr / abs(calc)) < precision; 
    }
}

bool asegurar(bool estimated, bool expected) {
    return estimated == expected;
}

/************* Casos de testeo *************/

bool test01_estaOrdenado(){
    int testNumber = 1;
    string testName = "estaOrdenado";
    
    printBeginTest(testNumber, testName);
    
    vector<int> ordDesc = {123, 3, 0, -1, -123};
    vector<int> ordAsc = {-501, 0, 12, 456, 501, 99999};
    vector<int> vacio = {};
    vector<int> desord = {-1, 0, 1, -1, 56, 98, 10};
    vector<int> unoSolo = {23};
    vector<int> soloDos = {1,2};
    vector<int> pico = {-4,-3,-2,-1,0,-1,-2,-3,-4};
    vector<int> dosPicos = {0,1,2,3,4,3,2,1,0,1,2,3,4,3,2,1};
    vector<int> iguales = {0,0,0,0,0,0,0,0,0,0};
    
    bool res = asegurar(estaOrdenado(ordDesc), true);
    res &= asegurar(estaOrdenado(ordAsc), true);
    res &= asegurar(estaOrdenado(vacio), true);
    res &= asegurar(estaOrdenado(desord), false);
    res &= asegurar(estaOrdenado(unoSolo), true);
    res &= asegurar(estaOrdenado(soloDos), true);
    res &= asegurar(estaOrdenado(dosPicos), false);
    res &= asegurar(estaOrdenado(iguales), true);

    printEndTest(testNumber, testName);
    return res;
}

bool test02_esPrimo(){
    int testNumber = 2;
    string testName = "esPrimo";
    printBeginTest(testNumber, testName);
    
    bool res = asegurar(esPrimo(0), false);
    res &= asegurar(esPrimo(1), false);
    res &= asegurar(esPrimo(2), true);
    res &= asegurar(esPrimo(3), true);
    res &= asegurar(esPrimo(5), true);
    res &= asegurar(esPrimo(17), true);
    res &= asegurar(esPrimo(-2), false);
    res &= asegurar(esPrimo(919), true);
    res &= asegurar(esPrimo(643), true);
    res &= asegurar(esPrimo(-643), false);
    res &= asegurar(esPrimo(100), false);
    printEndTest(testNumber, testName);
    return res;
}

bool test03_pertenece(){
    int testNumber = 3;
    string testName = "pertenece";
    printBeginTest(testNumber, testName);
    
    vector<int> enteros= {5, -323, 253, 0, -7, 100};
    vector<int> vacio= {};
    vector<int> todosIguales = {1,1,1,1,1,1,1,1,1,1,1};
    
    bool res = asegurar(pertenece(0,enteros), true);
    res &= asegurar(pertenece(7,enteros), false);
    res &= asegurar(pertenece(100,enteros), true);
    res &= asegurar(pertenece(-323,enteros), true);
    res &= asegurar(pertenece(1,vacio), false);
    res &= asegurar(pertenece(1,todosIguales), true);
    res &= asegurar(pertenece(4,todosIguales), false);
    printEndTest(testNumber, testName);
    return res;
}

bool test04_fibonacci(){
    int testNumber = 5;
    string testName = "fibonacci";
    printBeginTest(testNumber, testName);
    
    bool res = asegurar(fibonacci(0), 0);
    res &= asegurar(fibonacci(1), 1);
    res &= asegurar(fibonacci(2), 1);
    res &= asegurar(fibonacci(3), 2);
    res &= asegurar(fibonacci(4), 3);
    res &= asegurar(fibonacci(5), 5);
    res &= asegurar(fibonacci(7), 13);
    res &= asegurar(fibonacci(15), 610);
    res &= asegurar(fibonacci(50), 12586269025);
    res &= asegurar(fibonacci(16), 987);
    res &= asegurar(fibonacci(45), 1134903170);
    printEndTest(testNumber, testName);
    return res;
}

bool test05_maximoComunDivisor(){
    int testNumber = 6;
    string testName = "maximoComunDivisor";
    printBeginTest(testNumber, testName);
    
    bool res = asegurar(maximoComunDivisor(1,1), 1);
    res &= asegurar(maximoComunDivisor(1,2), 1);
    res &= asegurar(maximoComunDivisor(6,2), 2);
    res &= asegurar(maximoComunDivisor(17,19), 1);
    res &= asegurar(maximoComunDivisor(100,0), 100);
    res &= asegurar(maximoComunDivisor(100,10), 10);
    res &= asegurar(maximoComunDivisor(28,56), 28);
    res &= asegurar(maximoComunDivisor(6,10), 2);
    res &= asegurar(maximoComunDivisor(-6,10), 2);
    res &= asegurar(maximoComunDivisor(10,-6), 2);
    res &= asegurar(maximoComunDivisor(0,1), 1);
    
    printEndTest(testNumber, testName);
    return res;
}

bool test06_sumaDoble(){
    int testNumber = 7;
    string testName = "sumaDoble";
    printBeginTest(testNumber, testName);
    
    vector<int> impares = {1,3,5,7,9,11,23,33,99,101};
    vector<int> pares= {2,4,6,8,10,50,990};
    vector<int> mezcla = {-1, 0, 500, 22, -2, 35, 16, -10, 12, 66, 76, -2};
    vector<int> vacio= {};
    vector<int> paresNeg = {-2,1,1,1,-2,2,1,-2,-2,1};
    
    bool res = asegurar(sumaDoble(impares), 0);
    res &= asegurar(sumaDoble(pares), 2140);
    res &= asegurar(sumaDoble(mezcla), 1384);
    res &= asegurar(sumaDoble(vacio), 0);
    res &= asegurar(sumaDoble(paresNeg), 4);
    printEndTest(testNumber, testName);
    return res;
}

bool test07_cantPalabras(){
    int testNumber = 8;
    string testName = "cantPalabras";
    printBeginTest(testNumber, testName);

    bool res = true;
    // Poner el path completo o bien en CLion entrar a Run->Edit Configuration y en donde dice
    // "Working directory" escribir la ruta en donde se encuentra el archivo main.cpp
    res &= asegurar(cantPalabras("datos/loremIpsum.txt"), 98);
    res &= asegurar(cantPalabras("datos/losprofetas.txt"), 64);

    printEndTest(testNumber, testName);
    return res;
}

bool test08_valorMedio(){
    int testNumber = 9;
    string testName = "valorMedio";
    printBeginTest(testNumber, testName);

    bool res = true;
    res &= esAproximado(valorMedio(), 0.4948);

    printEndTest(testNumber, testName);
    return res;
}

bool test10_fraccion(){
    int testNumber = 10;
    string testName = "fraccion";
    printBeginTest(testNumber, testName);

    vector<int> variado = {1,2,3,-5,7,9,-11,23,-33,99};
    vector<int> todosPos = {1,2,3,7,9,23,99};
    vector<int> todosNeg = {-1,-2,-3,-7,-9,-23,-99};
    vector<int> con0= {0,0,-2,4,6,8,10,50,0};
    vector<int> todos0s = {0,0,0,0};
    vector<int> vacio= {};
    vector<int> todosIgualesPos = {1,1,1,1,1,1,1};
    vector<int> todosIgualesNeg = {-1,-1,-1,-1,-1,-1,-1};

    float calc;
    bool res = true;
    fraccion(variado,calc);
    res &= esAproximado(calc, 0.7);
    fraccion(todosPos,calc);
    res &= esAproximado(calc, 1);
    fraccion(todosNeg,calc);
    res &= esAproximado(calc, 0);
    fraccion(con0,calc);
    res &= esAproximado(calc, 0.555);
    fraccion(todos0s,calc);
    res &= esAproximado(calc , 0);
    fraccion(vacio,calc);
    res &= esAproximado(calc, 0);
    fraccion(todosIgualesPos,calc);
    res &= esAproximado(calc, 1);
    fraccion(todosIgualesNeg,calc);
    res &= esAproximado(calc, 0);

    printEndTest(testNumber, testName);
    return res;
}

int main()
{
    int exitos = 0;
    int total = 10;
    
    cout << endl << "=====Test 01=====" << endl;
    exitos += test01_estaOrdenado() ? 1 : 0;
    cout << "Exitos acumulados: " << exitos << endl; 
    cout << endl << "=====Test 02=====" << endl;
    exitos += test02_esPrimo() ? 1 : 0;
    cout << "Exitos acumulados: " << exitos << endl; 
    cout << endl << "=====Test 03=====" << endl;
    exitos += test03_pertenece() ? 1 : 0;
    cout << "Exitos acumulados: " << exitos << endl; 
    cout << endl << "=====Test 04=====" << endl;
    exitos += test04_fibonacci() ? 1 : 0;
    cout << "Exitos acumulados: " << exitos << endl; 
    cout << endl << "=====Test 05=====" << endl;
    exitos += test05_maximoComunDivisor() ? 1 : 0;
    cout << "Exitos acumulados: " << exitos << endl; 
    cout << endl << "=====Test 06=====" << endl;
    exitos += test06_sumaDoble() ? 1 : 0;
    cout << "Exitos acumulados: " << exitos << endl; 
    cout << endl << "=====Test 07=====" << endl;
    exitos += test07_cantPalabras() ? 1 : 0;
    cout << "Exitos acumulados: " << exitos << endl; 
    cout << endl << "=====Test 08=====" << endl;
    exitos += test08_valorMedio() ? 1 : 0;
    cout << "Exitos acumulados: " << exitos << endl; 
    cout << endl << "=====Test 9=====" << endl;
    exitos += test10_fraccion() ? 1 : 0;

    cout << "# Ejercicios correctos:" << exitos << endl;
    cout << "# Ejercicios incorrectos: " << total - exitos << endl;
}


