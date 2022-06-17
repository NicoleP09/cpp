#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int pares = 0, impar = 0, total = 0;

    for (int i = 1; i <= 10; i++)
    {
        if (i % 2 == 0) {
            pares = pares + i;
        } else
        
        {
            if ( i % 1 == 0)
            {
                impar = impar + i;
            }
            
        }
        total = pares + impar;
        cout << i << " ";
    }

    cout << endl;
    cout << endl;
    cout << "  Total pares:   " << pares << endl;
    cout << "+ Total impares: " << impar << endl;
    cout << "===================" << endl;
    cout << "  Suma Total:    " << total << endl;

    return 0;
}
