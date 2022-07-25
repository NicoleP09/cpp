#include <iostream>
#include<stdlib.h>

using namespace std;

extern void agregarProducto(string descripcion, int cantidad, double precio);

void productos(int opcion)
{
    system("cls");

    int opcionProducto = 0;

    switch (opcion)
    { 
    case 1:
    {
        cout << "BEBIDAS CALIENTES" << endl;
        cout << "*****************" << endl;
        cout << "1 - Capuccino" << endl;
        cout << "2 - Expresso" << endl;
        cout << "3 - Late de Caramelo" << endl;
        cout << endl;

        cout << "Ingrese una opcion: ";
        cin >> opcionProducto;

        switch (opcionProducto)
        {
        case 1:
            agregarProducto("1 Capuccino - L 40.00", 1, 40);
            break;
        case 2:
            agregarProducto("1 Expresso - L 30.00", 1, 30);
            break;
        case 3:
            agregarProducto("1 Late de Caramelo - L 45.00", 1, 45);
            break;         
        default:
            {
                cout << "opcion no valida";
                return;
                break;
            }
        }

        cout << endl;
        cout << "Producto agregado" << endl << endl;
        system("pause");
        
        break;
    }
    case 2:
    {
        cout << "BEBIDAS FRIAS" << endl;
        cout << "*************" << endl;
        cout << "1 - Limonada con Fresa" << endl;
        cout << "2 - Limonada con Menta" << endl;
        cout << "3 - Late Frio" << endl;
        cout << endl;

        cout << "Ingrese una opcion: ";
        cin >> opcionProducto;

        switch (opcionProducto)
        {
        case 1:
            agregarProducto("1 Limonada con Fresa - L 65.00", 1, 65);
            break;
        case 2:
            agregarProducto("1 Limonada con Menta - L 60.00", 1, 60);
            break;
        case 3:
            agregarProducto("1 Late Frio - L 55.00", 1, 55);
            break;         
        default:
            {
                cout << "opcion no valida";
                return;
                break;
            }
        }

        cout << endl;
        cout << "Producto agregado" << endl << endl;
        system("pause");
        break;
    }
    case 3:
    {
        cout << "REPOSTERIA" << endl;
        cout << "**********" << endl;
        cout << "1 - Cheesecake" << endl;
        cout << "2 - Brownie" << endl;
        cout << "3 - Chilena" << endl;
        cout << endl;

        cout << "Ingrese una opcion: ";
        cin >> opcionProducto;

        switch (opcionProducto)
        {
        case 1:
            agregarProducto("1 Cheesecake - L 75.00", 1, 75);
            break;
        case 2:
            agregarProducto("1 Brownie - L 45.00", 1, 45);
            break;
        case 3:
            agregarProducto("1 Chilena - L 22.00", 1, 22);
            break;         
        default:
            {
                cout << "opcion no valida";
                return;
                break;
            }
        }

        cout << endl;
        cout << "Producto agregado" << endl << endl;
        system("pause");
        break;
    }        
    default:
        break;
    }
}