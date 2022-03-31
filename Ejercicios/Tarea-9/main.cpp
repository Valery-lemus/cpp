# include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <stdio.h>
#include <cstdlib> 
#include <ctime> 



using namespace std;


int main ()
{

int dado1;
int dado2; 
int si; 
int no; 
int rest;

do

{

srand(time(0));

dado1 = 1 + (int) ((rand() / 32767.1) * 6);

dado2 = 1 + (int) ((rand() / 32767.1) * 6);

cout <<"El dado uno callo en: " <<dado1  << endl;
cout << "El dado dos callo en: "<< dado2 << endl;

cout <<"La suma de los dos dados lanzados es: " << (dado1 + dado2) << endl << endl;

cout <<"¿Quiere lanzar nuevamente los dados? " << endl;

cout <<"1- si "<< endl;

cout <<"2- no " << endl;

cin >> rest;

cout << endl;

}

while (rest == 1);

_getch();

}
