#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    //datos de entrada
    int a=0, b=2, resultado=0;

    cout << "\nDigite el valor de a: ";
    cin >> a;
    cout << "Digite el valor de b: ";
    cin >> b;

    //proceso
    resultado = a + b;
    
    //salida
    cout << "\nLa suma de a + b es: " << resultado <<endl;

    return 0;
}
