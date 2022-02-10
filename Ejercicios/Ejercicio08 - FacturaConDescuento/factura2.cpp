#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    //datos de entrada
    double subtotal = 0, total = 0, impuesto = 0.15, calculoDescuento = 0, calculoImpuesto = 0;
    int descuento = 0;

    cout << "\nIngrese el subtotal de la factura: ";
    cin >> subtotal;

    cout << "Ingrese el descuento (0, 10, 15, 20): ";
    cin >> descuento;

    //proceso
    calculoDescuento = (subtotal * descuento) / 100;
    calculoImpuesto = (subtotal - calculoDescuento) * 0.15;
    total = subtotal - calculoDescuento + calculoImpuesto;


    //salida
    cout << endl;
    cout << "El total a pagar es: " << total;

    return 0;
}
