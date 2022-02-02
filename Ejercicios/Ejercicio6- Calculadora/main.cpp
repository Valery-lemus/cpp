#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char** argv) {
	
	//Datos de Entrada
    int a = 0;
	int b = 0;
	int suma, resta, multiplicacion, division;
	
	cout << "Ingrese valor a :" << endl;
	cin >> a;
	cout << "Ingrese valor b : "<< endl;
	cin >> b;
	
	//Proceso
	suma = a + b;
	resta = a - b;
	multiplicacion = a * b;
	division = a / b;
	
	//Salida
	cout << " La suma de a + b = " << suma << endl;
	cout << " La resta de a - b = " << resta << endl;
	cout << " La multiplicacion de a * b = " << multiplicacion << endl;
	cout << " La division de a / b = " << division << endl;
	
	
	
	return 0;
}
