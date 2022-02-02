#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char** argv) {
	//Datos de Entrada
    int a = 0;
	int b = 0;
	int resultado = 0;
	
	cout << "Ingrese valor a :" << endl;
	cin >> a;
	cout << "Ingrese valor b : "<< endl;
	cin >> b;
	
	
	//Proceso
	resultado = a + b;
	
	// Salida
	cout << "La suma de a + b es: " << resultado;
	
	
	return 0;
}
