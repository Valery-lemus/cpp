#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char** argv) {
	int nota = 0;

    cout << "Ingrese la nota que obtuvo: ";
    cin >> nota;


    if (nota >= 95 && nota <= 100) {
        cout << "Obtuviste una A";
    } else{
	
    	if (nota >= 85 && nota <= 94) {
            cout << "Obtubiste una B";
    	} else {
   	        if (nota >= 75 && nota <= 94) {
                cout << "Obtubiste una C";
	        } else{
	            if (nota >= 65 && nota <= 74) {
                    cout << "Obtubiste una D";	
	            } else{
		            if (nota >= 60 && nota <= 64) {
                        cout << "Obtubiste una E";
	                 } else{
				         if (nota >= 0 && nota < 60 ){ 
                              cout << "Obtubiste una F";
                          } else{
                         	cout << "Ingrese una nota entre 0 - 100";
						  } 
                        }
                    }
	        	}
            }
	    }       

  return 0;
}    