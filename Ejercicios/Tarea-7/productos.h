#include <iostream>
#include <ctime>
#include "factura.h"

using namespace std;


 void agregarProducto(string descripcion, int cantidad, double precio);

void productos (int opcion)

{
    system("cls");

    int opcionProducto = 0;

    switch (opcion)
    {
    case 1:
    {
        cout << "BEBIDAS CALIENTES" << endl;
        cout << "******************" << endl;
        cout << "1- Capuccino " << endl;
        cout << "2- Expresso " << endl;
        cout << "3- Latte " << endl;
        cout << "4- Moo Caliente " << endl;
        cout << endl;

        cout << "Ingrese una opcion: ";
        cin >> opcionProducto;

            switch (opcionProducto)
            {
            case 1:
                agregarProducto("1 Capuccino L 40.00", 1, 40);
                break;
            case 2:
                agregarProducto("1 Expresso L 30.00", 1, 30);
                break;
            case 3:
                agregarProducto("1 Latte L 50.00", 1, 50);
                break;
            case 4:
                agregarProducto("1 Moo Caliente L 60.00", 1, 60);
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
        cout << "1- Granita de Cafe " << endl;
        cout << "2- Te Frio " << endl;
        cout << "3- Mocha Helado" << endl;
        cout << "4- Latte Helado " << endl;
        cout << endl;

        cout << "Ingrese una opcion: ";
        cin >> opcionProducto;

            switch (opcionProducto)
            {
            case 1:
                agregarProducto("1 Granita de cafe L 45.00", 1, 45);
                break;
            case 2:
                agregarProducto("1 Te Frio L 30.00", 1, 30);
                break;
            case 3:
                agregarProducto("1 Mocha Helado L 50.00", 1, 50);
                break;
            case 4:
                agregarProducto("1 Latte Helado L 50.00", 1, 50);
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
        cout << "1- Pai de Manza " << endl;
        cout << "2- Pastel tres Leches " << endl;
        cout << "3- Pai de Limon " << endl;
        cout << "4- Pan de Banano " << endl;
        cout << endl;

        cout << "Ingrese una opcion: ";
        cin >> opcionProducto;

            switch (opcionProducto)
            {
            case 1:
                agregarProducto("1 Pai de Manzana L 25.00", 1, 25);
                break;
            case 2:
                agregarProducto("1 Pastel tres leches L 30.00", 1, 30);
                break;
            case 3:
                agregarProducto("Pai de Limon L 20.00", 1, 20);
                break;
            case 4:
                agregarProducto("1 Pan de Banano L 35.00", 1, 35);
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