#include <iostream>
#include <vector>
#include <string.h>
using namespace std;

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
//EMPLEADOS//
void nuevo_empleado(vector<empleado>&empleados, empleado empleado_variable, vector<vector<int>>&matriz){
    vector<int>v1;
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
}

void modificar_empleado(empleado empleado_variable, vector<vector<int>>&matriz, vector<empleado>empleados){
    int dni_ingresado;
    int posicion;
    bool esta = false;
    int n;
    cout<<"Ingrese dni del empleado que busca modificar"<<endl;
    cin>>dni_ingresado;
    for(int i = 0; i < matriz.size(); i++){
        if(matriz[i][0] == dni_ingresado){
            esta = true;
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
        default:
            cout<<"El numero no es valido"<<endl;
            break;
        }
    }
    else{
        cout<<"El empleado no existe"<<endl;
    }
}

void eliminar_empleado(empleado empleado_variable, vector<vector<int>>&matriz, vector<empleado>empleados){
    int dni;
    bool esta = false;
    cout<<"Ingrese dni del empleado que quiera eliminar"<<endl;
    cin>>dni;
    for(int i = 0; i < matriz.size(); i++){
        if(dni == matriz[i][0]){
            matriz.erase(matriz.end() - (matriz.size() - i));
            esta = true;
        }
    }
    if(esta == true){
        for(int i = 0; i < empleados.size(); i++){
            if(dni == empleados[i].dni){
                empleados.erase(empleados.end() - (empleados.size() - i));
            }
        }
        
        

    }
}

//EMPLEADOS//

//PRODUCTOS//

void nuevo_producto(producto producto_variable){
    cout<<"ingrese la cantidad vendida del producto"<<endl;
    cin>> producto_variable.cant_vendida;
    cout<<"ingrese el codigo del producto"<<endl;
    cin>> producto_variable.codigo;
    cout<<"ingrese el precio de compra del producto"<<endl;
    cin>> producto_variable.precio_compra;
    cout<<"ingrese precio de venta del producto"<<endl;
    cin>> producto_variable.precio_venta;
}

void modificar_producto(producto){

}

void eliminar_producto(producto){

}

//PRODUCTO//

void llenar_matriz(vector<vector<empleado>>matriz){


}

int main(){
    vector<vector<int>>matriz;
    vector<empleado>empleados;
    vector<producto>productos;
}