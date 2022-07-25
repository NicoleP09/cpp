#include <iostream>
#include <stdlib.h>

using namespace std;

double subtotal = 0, ivs = 0;
int total;

string listaProductos;

void agregarProducto(string descripcion, int cantidad, double precio)
{
    listaProductos = listaProductos + descripcion + '\n';
    total = total + (cantidad * precio);

    /*El precio en la carta de menu ya tenia el IMPUESTO incluido, asi que se lo sacaremos para desenglosar 
    los montos en orden*/ 

    subtotal = total / 1.15;
    ivs = total - subtotal;
    total = subtotal + ivs; 

     
}

void imprimirFactura()
{
    system("cls");
    cout << "*******" << endl;
    cout << "FACTURA" << endl;
    cout << "*******" << endl;
    cout << endl;

    cout << "Productos:" << endl;
    cout << listaProductos;

    cout << endl;
    cout << "Subtotal:      " << subtotal;
    cout << "IVS 15%:       " << ivs;
    cout << "Total a Pagar: " << total;
    cout << endl;
    cout << endl;
    
    system("pause");
}