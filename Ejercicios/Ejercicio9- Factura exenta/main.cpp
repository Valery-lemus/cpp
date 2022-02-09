#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char** argv) {
	
	// datos de entrada

    double subtotal  = 0 ;
    double total = 0 ;
    double impuesto = 0.15 ;
    int descuento = 0;
    double calculoDescuento = 0;
    double calculoImpuesto = 0;
    char estaExenta;

    cout << " Ingrese el subtotal de la factura: " ;
    cin >> subtotal;
    
    cout << " Ingrese el descuento (0, 10, 15, 20): ";
    cin >> descuento;
    
    cout << " Es factura Exenta? S/N: ";
    cin >> estaExenta;
    
    //Proceso
    
    if(estaExenta == 's' || estaExenta == 'S' )
      {
        calculoDescuento = (subtotal * descuento) / 100;
        calculoImpuesto = (subtotal - calculoDescuento) * 0.00;
        total = subtotal - calculoDescuento + calculoImpuesto;
      }
	  
    else 
       {  
        calculoDescuento = (subtotal * descuento) / 100;
        calculoImpuesto = (subtotal - calculoDescuento) * impuesto;
        total = subtotal - calculoDescuento + calculoImpuesto;
	     
        }  
    
    // salida

    cout << endl;
    cout << " Total a pagar es: " << total;
	return 0;
}
