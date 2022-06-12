#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    //declarando variables
    
    double subtotal = 0, total = 0, impuesto = 0.15, calculoDescuento = 0, calculoImpuesto = 0;
    int descuento = 0;
    char exenta;

    cout << "\nIngrese el subtotal de la factura: ";
    cin >> subtotal;

    cout << "Ingrese el descuento (0, 10, 15, 20): ";
    cin >> descuento;

    cout << "¿Es factura exenta?";
    cout <<"\nEscriba S o N : ";
    cin >> exenta;
    
    //proceso

    if ( exenta == 'S' || exenta == 's')
    {
        calculoDescuento = (subtotal * descuento) / 100;
        total = subtotal - calculoDescuento;    
        
    }   else 
        
        if ( exenta == 'N' || exenta == 'n')
    {
        calculoDescuento = (subtotal * descuento) / 100;
        calculoImpuesto = (subtotal - calculoDescuento) * impuesto;
        total = (subtotal - calculoDescuento) + calculoImpuesto;
    }
    
    //salida
    cout << endl;
    cout << "El total a pagar es: L. " << total;

    return 0;
}
