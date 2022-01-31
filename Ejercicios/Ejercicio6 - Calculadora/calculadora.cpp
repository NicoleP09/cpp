#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    //declaracion de variables 
    int a=0, b=0, suma=0, resta=0, multiplicacion=0, division=0;

    cout << "\nDigite el valor de a: ";
    cin >> a;
    cout << "Digite el valor de b: ";
    cin >> b;
    cout << endl;

    //proceso

    suma = a + b;
    resta = a - b;
    division = a / b;
    multiplicacion = a * b;

    //salida

    cout << "La suma de a + b = " << suma;
    cout << "La resta de a - b = " << resta;
    cout << "La division de a / b = " << division;
    cout << "La multiplicacion de a * b = " << multiplicacion;



    return 0;
}
