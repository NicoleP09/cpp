#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    //datos de entrada 

    double subtotal = 0, total = 0, impuesto = 0.15;

    cout << "\nIngrese el subtotal de la factura: ";
    cin >> subtotal;

    //proceso

    total = subtotal + (subtotal * 0.15);


    //salida
    cout << endl;
    cout << "El total a pagar es: " << total;

    return 0;
}
