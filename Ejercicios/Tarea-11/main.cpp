#include <iostream>
#include <ctime>
#include <cstdlib>


using namespace std;

int main(){

int cadena [5] [5] = {};
int total = 0;

srand (time(0));

for (int i = 0; i < 5; i++){

for (int j = 0; j < 5; j++)
{
	cadena [i] [j] = 0 + rand() %100;
	total += cadena [i] [j] ;
}
}
cout << " Total suma:" <<total<<endl;

	return 0;
}
