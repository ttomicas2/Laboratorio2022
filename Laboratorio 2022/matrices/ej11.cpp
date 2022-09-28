#include <iostream>
#include <vector>
#include <string.h>
using namespace std;
struct posmat{
    int x;
    int y;
}
struct fecha{
    int dia;
    int mes;
    int año;
};

struct empleado{
    int dni;
    string nombre;
    string apellido;
    fecha fecha_nacimiento;
    fecha fecha_ingreso;
    string localidad;
};

struct producto{
    float precio_compra;
    float precio_venta;
    int codigo;
    int cant_vendida;   
};
void mostrar (vector<vector<int>>mat){
    for(int i = 0; i < mat.size(); i++){
        for(int j = 0; j < mat[i].size(); j++){
            cout<<mat[i][j];
        }
        cout<<endl;
    }
}
void mostrar_productos(vector<producto>productos){
    for(int i = 0; i < productos.size(); i++){
        cout<<productos[i].codigo<<endl;
    }
}
void mostrar_empleados(vector<empleado>empleados){
    for(int i = 0; i < empleados.size(); i++){
        cout<<empleados[i].nombre<<endl;
    }
}
//EMPLEADOS//
void nuevo_empleado(vector<empleado>&empleados, vector<vector<int>>&matriz){
    vector<int>v1;
    empleado empleado_variable;
    cout<<"ingrese nombre del empleado"<<endl;
    cin>> empleado_variable.nombre;
    cout<<"ingrese apellido del empleado"<<endl;
    cin>> empleado_variable.apellido;
    cout<<"ingrese dni del empleado"<<endl;
    cin>> empleado_variable.dni;
    cout<<"ingrese dia de ingreso del empleado"<<endl;
    cin>> empleado_variable.fecha_ingreso.dia;
    cout<<"ingrese mes de ingreso del empleado"<<endl;
    cin>> empleado_variable.fecha_ingreso.mes;
    cout<<"ingrese año de ingreso del empleado"<<endl;
    cin>> empleado_variable.fecha_ingreso.año;
    cout<<"ingrese dia de nacimiento del empleado"<<endl;
    cin>> empleado_variable.fecha_nacimiento.dia;
    cout<<"ingrese mes de nacimiento del empleado"<<endl;
    cin>> empleado_variable.fecha_nacimiento.mes;
    cout<<"ingrese año de nacimiento del empleado"<<endl;
    cin>> empleado_variable.fecha_nacimiento.año;
    cout<<"ingrese localidad del empleado"<<endl;
    cin>> empleado_variable.localidad;
    v1.push_back(empleado_variable.dni);
    matriz.push_back(v1);
    empleados.push_back(empleado_variable);
    mostrar(matriz);
    mostrar_empleados(empleados);
}

void modificar_empleado( vector<vector<int>>&matriz, vector<empleado>&empleados){
    int dni_ingresado;
    int posicion;
    bool esta = false;
    int n;
    int p;
    cout<<"Ingrese dni del empleado que busca modificar"<<endl;
    cin>>dni_ingresado;
    for(int i = 0; i < matriz.size(); i++){
        if(matriz[i][0] == dni_ingresado){
            esta = true;
            p = i;
        }
    }
    
    if(esta == true){
        for(int i = 0; i < empleados.size(); i++){
            if(dni_ingresado == empleados[i].dni){
                posicion = i;
            }
        }
        cout<<"que desea modificar"<<endl;
        cout<<"1. Nombre"<<endl;
        cout<<"2. Apellido"<<endl;
        cout<<"3. Fecha de ingreso"<<endl;
        cout<<"4. fecha de nacimiento"<<endl;
        cout<<"5. Localidad"<<endl;
        cout<<"6. Dni"<<endl;
        cin>>n;
        switch (n)
        {
        case 1:
            cout<<"Ingrese nombre"<<endl;
            cin>>empleados[posicion].nombre;
            break;
        case 2:
            cout<<"Ingrese apellido"<<endl;
            cin>>empleados[posicion].apellido;
            break;
        case 3:
            cout<<"Ingresar dia"<<endl;
            cin>>empleados[posicion].fecha_ingreso.dia;
            cout<<"Ingresar mes"<<endl;
            cin>>empleados[posicion].fecha_ingreso.mes;
            cout<<"Ingresar año"<<endl;
            cin>>empleados[posicion].fecha_ingreso.año;
            break;
        case 4:
            cout<<"Ingresar dia"<<endl;
            cin>>empleados[posicion].fecha_nacimiento.dia;
            cout<<"Ingresar mes"<<endl;
            cin>>empleados[posicion].fecha_nacimiento.mes;
            cout<<"Ingresar año"<<endl;
            cin>>empleados[posicion].fecha_nacimiento.año;
            break;
        case 5:
            cout<<"Ingresar localidad"<<endl;
            cin>>empleados[posicion].localidad;
        case 6:
            cout<<"Ingrese dni"<<endl;
            cin>>empleados[posicion].dni;
            matriz[p][0]=empleados[posicion].dni
        default:
            cout<<"El numero no es valido"<<endl;
            break;
        }
    }
    else{
        cout<<"El empleado no existe"<<endl;
    }
    mostrar(matriz);
    mostrar_empleados(empleados);
}

void eliminar_empleado( vector<vector<int>>&matriz, vector<empleado>&empleados){
    int dni;
    bool esta = false;
    cout<<"Ingrese dni del empleado que quiera eliminar"<<endl;
    cin>>dni;
    for(int i = 0; i < matriz.size(); i++){
        if(dni == matriz[i][0]){
            matriz.erase(matriz.end() - (matriz.end() - i));
            esta = true;
        }
    }
    if(esta == true){
        for(int i = 0; i < empleados.size(); i++){
            if(dni == empleados[i].dni){
                empleados.erase(empleados.end() - (empleados.end() - i));
            }
        }
    }
    else{
        cout<<"No se encontro un empleado con ese dni"<<endl;
    }
    mostrar(matriz);
    mostrar_empleados(empleados);
}

//EMPLEADOS//

//PRODUCTOS//

void nuevo_producto(vector<vector<int>>&matriz, vector<producto>&productos){
    producto producto_variable;
    vector<int>v1;
    cout<<"ingrese la cantidad vendida del producto"<<endl;
    cin>> producto_variable.cant_vendida;
    cout<<"ingrese el codigo del producto"<<endl;
    cin>> producto_variable.codigo;
    cout<<"ingrese el precio de compra del producto"<<endl;
    cin>> producto_variable.precio_compra;
    cout<<"ingrese precio de venta del producto"<<endl;
    cin>> producto_variable.precio_venta;
    v1.push_back(producto_variable.codigo);
    matriz.push_back(v1);
    productos.push_back(producto_variable);
    mostrar(matriz);
    mostrar_productos(productos);
}

void modificar_producto( vector<vector<int>>&matriz, vector<producto>&productos){
    int codigo;
    int posicion;
    bool esta = false;
    int n;
    posmat p;
    cout<<"Ingrese codigo del producto que busca modificar"<<endl;
    cin>>codigo;
    for(int i = 0; i < matriz.size(); i++){
        for(int j = 0; j < matriz[i].size(); j++){
            if(matriz[i][j] == codigo){
                esta = true;
                p.x=i;
                p.y=j;
            }
        }
    }
    
    if(esta == true){
        for(int i = 0; i < productos.size(); i++){
            if(codigo == productos[i].codigo){
                posicion = i;
            }
        }
        cout<<"que desea modificar"<<endl;
        cout<<"1. Cantidad de ventas"<<endl;
        cout<<"2. Codigo"<<endl;
        cout<<"3. Precio de Compra"<<endl;
        cout<<"4. Precio de Venta"<<endl;
        cin>>n;
        switch (n)
        {
        case 1:
            cout<<"Ingrese Cantidad de ventas"<<endl;
            cin>>productos[posicion].cant_vendida;
            break;
        case 2:
            cout<<"Ingrese Codigo"<<endl;
            cin>>productos[posicion].codigo;
            matriz[p.x][p.y] = productos[posicion].codigo;
            break;
        case 3:
            cout<<"Ingresar Precio de compra"<<endl;
            cin>>productos[posicion].precio_compra;

            break;
        case 4:
            cout<<"Ingresar Precio de venta"<<endl;
            cin>>productos[posicion].precio_venta;
            break;
        default:
            cout<<"El numero no es valido"<<endl;
            break;
        }
    }
    else{
        cout<<"El empleado no existe"<<endl;
    }
    mostrar(matriz);
    mostrar_productos(productos);
}

void eliminar_producto( vector<vector<int>>&matriz, vector<producto>&productos){
    int codigo;
    vector<vector<int>>mat_temp;
    vector<int>v1;
    bool esta = false;
    cout<<"Ingrese Codigo del producto que quiera eliminar"<<endl;
    cin>>codigo;
    for(int i = 0; i < matriz.size(); i++){
        for(int j = 0; j < matriz[i].size(); j++ ){
            if(codigo == matriz[i][j]){
                esta = true;
                matriz[i].erase(matriz[i].end() - (matriz[i].size() - j - 1));
            }
        }
    }
    if(esta == true){
        for(int i = 0; i < productos.size(); i++){
            if(codigo == productos[i].codigo){
                productos.erase(productos.end() - (productos.end() - i));
            }
        }
    }
    else{
        cout<<"No se encontro un producto con ese codigo"<<endl;
    }
    mostrar(matriz);
    mostrar_productos(productos);
}

//PRODUCTO//

void promedio(vector<vector<int>>&matriz, vector<producto>&productos){
    float vueltas = 0;
    float prom;
    for(int i = 0; i < productos.size(); i++){
        prom += (productos[i].precio_venta-productos[i].precio_compra);
        vueltas++;
    }
    cout<<"La ganancia promedio es: "<<prom/vueltas<<endl;
}

void mayor_antiguedad(vector<vector<int>>&matriz, vector<producto>&productos){

}

int main(){
    vector<vector<int>>matriz;
    vector<empleado>empleados;
    vector<producto>productos;
    int menu = 0;
    bool salir = false;
    while(!salir){
    cout<<"Ingrese una opcion"<<endl;
    cout<<"1. Dar de alta nuevos producto, eliminar y modificarlos"<<endl;
    cout<<"2. Dar de alta nuevos empleados, eliminar y modificarlos"<<endl;
    cout<<"3. Calcular la ganancia promedio de los productos que se venden"<<endl;
    cout<<"4. Nombre del empleado con mayor antigüedad en el trabajo junto con la fecha en que inició"<<endl;
    cout<<"5. Código del producto que se vendió más"<<endl;
    cout<<"6. Imprimir el dni, nombre de cada empleado junto con el nombre del último producto que se les añadió para vender"<<endl;
    cout<<"7. Imprimir la fecha de nacimiento del empleado más grande en edad y el más joven"<<endl; 
    cout<<"8. salir"<<endl;
    cin>>menu;
    switch (menu)
    {
    case 1:{
        int caso;
        bool salir = false;
        while(!salir){
            cout<<"Ingrese:"<<endl;
            cout<<"1. Para dar de alta un producto"<<endl;
            cout<<"2. para eliminar un producto"<<endl;
            cout<<"3. modificar un producto"<<endl;
            cout<<"4. salir"<<endl;
            cin>>caso;
            switch(caso){
                case 1:
                    nuevo_producto(matriz, productos);
                    break;
                case 2:
                    eliminar_producto(matriz, productos);
                    break;
                case 3:
                    modificar_producto(matriz, productos);
                    break;
                case 4:
                    salir = true;
                    break;
                default:
                    cout<<"ingrese una opcion valida"<<endl;
                    break;
            }
        }
        break;}
    case 2:{
        int caso;
        bool salir = false;
        while(!salir){
            cout<<"Ingrese:"<<endl;
            cout<<"1. Para dar de alta un empleado"<<endl;
            cout<<"2. para eliminar un empleado"<<endl;
            cout<<"3. modificar un empleado"<<endl;
            cout<<"4. salir"<<endl;
            cin>>caso;
            switch(caso){
                case 1:
                    nuevo_empleado(empleados, matriz);
                    break;
                case 2:
                    modificar_empleado(matriz, empleados);
                    break;
                case 3:
                    eliminar_empleado(matriz, empleados);
                    break;
                case 4:
                    salir = true;
                    break;
                default:
                    cout<<"ingrese una opcion valida"<<endl;
                    break;
            }
        }
        break;}
    case 3:
        promedio(matriz, productos);
        break;
    case 4:

        break;
    case 5:

        break;
    case 6:

        break;
    case 7:

        break;
    case 8:
        salir = true;
        break;
    default:
        break;
    }  
    }
}