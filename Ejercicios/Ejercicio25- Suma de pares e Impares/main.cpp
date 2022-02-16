#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char** argv) {
	
	int pares = 0;
	int impares = 0;
	int total= 0;
	
	for(int i = 1; i <= 10; i++) 
	{
		if (i % 2 == 0  ){
			pares = pares + i;
		}
		else
		   impares = i + impares;
    }
    
     total = pares + impares;
     
    cout << endl;
    cout << "Total pares: " << pares << endl;
    cout << "Total impares: " << impares << endl;
    cout << "Total de pares e Impares: " << total;

	return 0;
}
