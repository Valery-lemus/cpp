#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char** argv) {
	
	int nota = 0;

    cout << "Ingrese la nota que obtuvo: ";
    cin >> nota;

    if (nota > 100 || nota< 0){
    	cout << "Ingrese una nota entre 0 - 100";
    	return 0;
	}
	
    if (nota >= 96 && nota <= 100) {
        cout << "Obtuviste una A++";
    }
    
    if (nota >= 91 && nota <= 95) {
        cout << "Obtubiste una A+";
    }  
	  
    if (nota >= 86 && nota <= 90) {
        cout << "Obtubiste una A";
    }   
	  
    if (nota >= 81 && nota <= 85) {
        cout << "Obtubiste una A-";	
    }
	            
	if (nota >= 76 && nota <= 80) {
        cout << "Obtubiste una B+";
    }
	                
    if (nota >= 71 && nota <= 75 ){ 
        cout << "Obtubiste una B";
    }
    
    if (nota >= 66 && nota <= 70 ){ 
        cout << "Obtubiste una B-";
    }
    
    if (nota >= 60 && nota <= 65 ){ 
        cout << "Obtubiste una C";
    }
    
    if (nota >= 54 && nota <= 60 ){ 
        cout << "Obtubiste una C";
    }
    
    if (nota >= 51 && nota <= 55 ){ 
        cout << "Obtubiste una C-";
    }
							           
	if (nota >= 46 && nota <= 50 ){ 
        cout << "Obtubiste una D+";
    }
    
	if (nota >= 41 && nota <= 45 ){ 
        cout << "Obtubiste una D";
    }
    
	if (nota >= 36 && nota <= 40 ){ 
        cout << "Obtubiste una D-";
    }

	if(nota >= 31 && nota <= 35 ){ 
       cout << "Obtubiste una E+";
    }

    if(nota >= 26 && nota <= 30 ){ 
      cout << "Obtubiste una E";
    }

	if(nota >= 21 && nota <= 25 ){ 
       cout << "Obtubiste una E-";
    }

	if(nota >= 16 && nota <= 20 ){ 
       cout << "Obtubiste una F+";
    }

   if(nota >= 11 && nota <= 15 ){ 
      cout << "Obtubiste una F";
    }
		
    if(nota >= 6 && nota <= 10 ){ 
       cout << "Obtubiste una F";
    }
								                              
    if(nota >= 1 && nota <= 5 ){ 
       cout << "Obtubiste una F-";
    }  
  
	if(nota >= 0 && nota <= 0 ){ 
       cout << "Obtubiste una F--";
    }
								                                                       
	   
    return 0;
}
