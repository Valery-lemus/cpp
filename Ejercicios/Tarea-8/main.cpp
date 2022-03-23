#include <iostream>
#include <math.h>

using namespace std;

int main() 
{
	double num;
	double raizCuadrada;
	
	cout << "Raiz Cuadrada" << endl << endl;
	cout << "Ingrese el Valor: ";
	cin >> num;
	
	raizCuadrada = sqrt(num);
	
	cout << "La raiz cuadrada de " << num << " " <<"es" << " " << raizCuadrada << endl;
	
	return 0;
}
