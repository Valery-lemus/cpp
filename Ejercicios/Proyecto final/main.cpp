#include <iostream>
#include <stdlib.h>
#include <locale.h>

using std::cout;
using std::cin;
using std::endl;
using namespace std;

int main ()
{
	setlocale(LC_ALL,"");
	
int Opc=0 ;//sera la opcion de elegir
int Salir;//indica el momento para salir del programa
char respuesta;
char nombre[20];
int total;
int conteo_buenas = 0, conteo_malas = 0;
int total_buenas = 0, total_malas = 0;

cout<<"	J U E G O  D E  T R I V I A S"<<endl<<endl;
cout<<"Ingrese su nombre\n\n\n";
cin>>nombre;
cout<<"---------------------";
cout<<"\n\n Bienvenido\n\n\n"<<" "<<nombre<<endl;
cout<<"---------------------" <<endl;

for (int i=0; i<6; i++)
{
 
 for(int i=0; i < 6; i++)
{
cout<< "MENU"<<endl;
cout<<"****"<<endl;
cout<< "1- Geograf�a" <<endl;
cout<< "2- Historia" <<endl;
cout<< "3- Ciencia"<<endl;
cout<< "4- Arte"<<endl;
cout<< "5- Deporte"<<endl;
cout<< "6- Salir"<<endl;
cout<<"Dame otra opcion(rango 1-6)"<<endl;
cin>>Opc;
 
switch (Opc) 
{
  case 1: // Modulo a
  {
  
cout<<"Geograf�a"<<endl;
cout<<"---------"<<endl<<endl;
 
cout<<"1-�Cual es el oceano mas grande del mundo?"<<endl;
cout<<"a) Oceano Pacifico"<<endl;
cout<<"b) Oc�ano �ndico"<<endl;
cout<<"c) Oc�ano Atl�ntico"<<endl;
cin>>respuesta;
 
      if(respuesta=='a')
      {
      	cout<<"la respuesta es correcta"<<endl;
      	conteo_buenas++;
	  }
else{
	cout<<"La respuesta es incorrecta"<<endl;
	conteo_malas++;
}
cout<<"2-�Cu�l es el pa�s m�s grande del mundo?"<<endl;
cout<<"a) China"<<endl;
cout<<"b) Rusia"<<endl;
cout<<"c) India"<<endl;
cin>>respuesta;
       if(respuesta=='b')
{
	          
cout<<"la respuesta es correcta"<<endl;
 conteo_buenas++;
 }
else
{
cout<<"La respuesta es incorrecta"<<endl;
conteo_malas++;	
} 
cout<<"3-�En qu� continente se encuentra Surinam?"<<endl;
cout<<"a) Africa"<<endl;
cout<<"b) America del Sur "<<endl;
cout<<"c) Oceania"<<endl;
cout<<"d) Europa"<<endl;
cin>>respuesta;
       if(respuesta=='b')
       {
       	cout<<"la respuesta es correcta"<<endl;
 		conteo_buenas++;
	   }

else
{
	cout<<"La respuesta es incorrecta"<<endl;
	conteo_malas++;
}
cout<<"4-�Cu�l es la naci�n m�s peque�a del mundo?"<<endl;
cout<<"a) Andorra"<<endl;
cout<<"b) Monaco"<<endl;
cout<<"c) El Vaticano"<<endl;
cout<<"d) Ninguna"<<endl;
cin>>respuesta;
       if(respuesta=='c')
{

cout<<"la respuesta es correcta"<<endl;
conteo_buenas++;
 }
else
{
cout<<"La respuesta es incorrecta"<<endl;
conteo_malas++;
} 
cout<<"5-�Cu�l es la �nica ciudad que est� en dos continentes distintos?"<<endl;
cout<<"a) Moscu"<<endl;
cout<<"b) Estambul "<<endl;
cout<<"c) Berlin"<<endl;
cout<<"d) Ninguna"<<endl;
cin>>respuesta;
       if(respuesta=='b')
       {
       	cout<<"la respuesta es correcta"<<endl;
       	conteo_buenas++;
	   }
else
{
	cout<<"La respuesta es incorrecta"<<endl;
	conteo_malas++;
} 
cout<<"6-�Cu�l es la ciudad italiana conocida como �la novia del mar�"<<endl;
cout<<"a) Roma"<<endl;
cout<<"b) Florencia"<<endl;
cout<<"c) Venecia "<<endl;
cout<<"d) Milan "<<endl;
cin>>respuesta;
       if(respuesta=='c')
       {
       	cout<<"la respuesta es correcta"<<endl;
       	conteo_buenas++;
	   }
else
{
	cout<<"La respuesta es incorrecta"<<endl;
	conteo_malas++;
}
cout<<"7-�Cu�l es la cascada m�s alta del mundo?"<<endl;
cout<<"a) El Salto del �ngel"<<endl;
cout<<"b) Cataratas del Ni�raga"<<endl;
cout<<"c) Cataratas de Iguaz�"<<endl;
cout<<"d) Cataratas del Paraiso"<<endl;
cin>>respuesta;
       if(respuesta=='a')
{

cout<<"la respuesta es correcta"<<endl;
conteo_buenas++;
 }
else{
	cout<<"La respuesta es incorrecta"<<endl;
	conteo_malas++;
}
cout<<"8-�Cu�l es la capital de Pakist�n?"<<endl;
cout<<"a) Bagdag"<<endl;
cout<<"b) Islamabad"<<endl;
cout<<"c) Marrakech"<<endl;
cout<<"d) Ninguna"<<endl;
cin>>respuesta;
       if(respuesta=='b')
       {
        cout<<"la respuesta es correcta"<<endl;
        conteo_buenas++;
    }
else
{
cout<<"La respuesta es incorrecta"<<endl;
conteo_malas++;
}

cout<<"9-�La bandera de Estonia consiste en 3 franjas Horizontales de color?"<<endl;
cout<<"a) Rojo, blanco y azul"<<endl;
cout<<"b) Azul, negro y blanco"<<endl;
cout<<"c) Amarillo, verde y rojo"<<endl;
cout<<"d) Rojo, azul y verde "<<endl;
cin>>respuesta;
       if(respuesta=='b')
      {
       	cout<<"la respuesta es correcta"<<endl;
       	conteo_buenas++;
	   } 
else
{
	cout<<"La respuesta es incorrecta"<<endl;
	conteo_malas++;
}
 
cout<<"10-�Cu�l es el nombre del r�o m�s largo del mundo?"<<endl;
cout<<"a) R�o Nilo"<<endl;
cout<<"b) R�o Amazonas"<<endl;
cout<<"c) R�o Danubio"<<endl;
cout<<"d) Ninguna de las anteriores"<<endl;
cin>>respuesta;
       if(respuesta=='b')
       {
       	cout<<"la respuesta es correcta"<<endl;
       	conteo_buenas++;
	   } 
else
{
	cout<<"La respuesta es incorrecta"<<endl;
	conteo_malas++;
}
cout<<"11-�Cu�l es el pa�s m�s poblado de la tierra?"<<endl;
cout<<"a) Espa�a"<<endl;
cout<<"b) China"<<endl;
cout<<"c) Rusia"<<endl;
cout<<"d)Estados Unidos"<<endl;
cin>>respuesta;
       if(respuesta=='b')
       {
       	cout<<"la respuesta es correcta"<<endl;
       	conteo_buenas++;
	   }
else
{
	cout<<"La respuesta es incorrecta"<<endl;
	conteo_malas++;
}
cout<<"12-�Cu�l es la ciudad de los rascacielos?"<<endl;
cout<<"a) Tokio"<<endl;
cout<<"b) Dubai"<<endl;
cout<<"c) Hong Kong"<<endl;  
cout<<"d) New York"<<endl;
cin>>respuesta;
       if(respuesta=='d')
       {
       	cout<<"la respuesta es correcta"<<endl;
       	conteo_buenas++;
	   }
else
{
	cout<<"La respuesta es incorrecta"<<endl;
	conteo_malas++;
}
cout<<"13-�En qu� pa�s se encuentra ubicada la Casa Rosada?"<<endl;
cout<<"a) Argentina"<<endl;
cout<<"b) Chile"<<endl;
cout<<"c) Mexico"<<endl;
cout<<"d) Paraguay"<<endl;
cin>>respuesta;
       if(respuesta=='a')
       {
       	cout<<"la respuesta es correcta"<<endl;
       	conteo_buenas++;
	   }
else
{
	cout<<"La respuesta es incorrecta"<<endl;
	conteo_malas++;
}
cout<<"14-�Cu�l es la capital de Nicaragua?"<<endl;
cout<<"a) Brasil"<<endl;
cout<<"b) Ninguna"<<endl;
cout<<"c) Managua"<<endl;
cout<<"d) San tiago "<<endl;
cin>>respuesta;
       if(respuesta=='c')
       {
       	cout<<"la respuesta es correcta"<<endl;
       	conteo_buenas++;
	   }
else
{
	cout<<"La respuesta es incorrecta"<<endl;
	conteo_malas++;
}
cout<<"15-�Cu�l es la segunda monta�a m�s alta del mundo?"<<endl;
cout<<"a) K2"<<endl;
cout<<"b) K1"<<endl;
cout<<"c) K3"<<endl;
cout<<"d) K5"<<endl;
cin>>respuesta;
       if(respuesta=='a')
       {
	   cout<<"la respuesta es correcta"<<endl;
	   conteo_buenas++;
       }
 
else
{
    cout<<"La respuesta es incorrecta"<<endl;
    conteo_malas++;
}
cout<<"Total de buenas: "<<conteo_buenas<<endl;
cout<<"Total de malas: "<<conteo_malas<<endl;

system("pause");
system("cls");

        break;
}
case 2: // Modulo b
{
	cout<<"Historia"<<endl;
	cout<<"--------"<<endl<<endl;
	
	cout<<"1-�Cu�ndo termin� la II Guerra Mundial?"<<endl;
	cout<<"a) 1945"<<endl;
	cout<<"b) 1947"<<endl;
	cout<<"c) 1943"<<endl;
	cout<<"d) 1955"<<endl;
	cin>>respuesta;
	     if(respuesta=='a')
    {
       	cout<<"la respuesta es correcta"<<endl;
       	conteo_buenas++;
	   } 
else
{
	cout<<"La respuesta es incorrecta"<<endl;
	conteo_malas++;
}
	  
	  cout<<"2-�En qu� a�o lleg� Cristobal Col�n a Am�rica?"<<endl;
      cout<<"a) 1429"<<endl;
      cout<<"b) 1492"<<endl;
      cout<<"c) 1592"<<endl;
      cout<<"d) 1548"<<endl;
      cin>>respuesta;
       if(respuesta=='b')
      {
       	cout<<"la respuesta es correcta"<<endl;
       	conteo_buenas++;
	   } 
else
{
	cout<<"La respuesta es incorrecta"<<endl;
	conteo_malas++;
}
      
      cout<<"3-�Qui�n es el padre del psicoan�lisis?"<<endl;
      cout<<"a) Sigmund Freud"<<endl;
      cout<<"b) Carl Gustav Jung"<<endl;
      cout<<"c) Skinner"<<endl;
      cout<<"d) Mark"<<endl;
      cin>>respuesta;
       if(respuesta=='a')
      {
       	cout<<"la respuesta es correcta"<<endl;
       	conteo_buenas++;
	   } 
else
{
	cout<<"La respuesta es incorrecta"<<endl;
	conteo_malas++;
}
      
       cout<<"4-�Qui�n era el general de los Nazis en la Segunda Guerra Mundial?"<<endl;
      cout<<"a) Benito Mussolini"<<endl;
      cout<<"b) Adolf Hitler"<<endl;
      cout<<"c) Heinrich Himmler"<<endl;
      cout<<"d) Carl Gustav Jung"<<endl;
      cin>>respuesta;
       if(respuesta=='b')
       {
       	cout<<"la respuesta es correcta"<<endl;
       	conteo_buenas++;
	   } 
else
{
	cout<<"La respuesta es incorrecta"<<endl;
	conteo_malas++;
}
      
        cout<<"5-�Cu�l es el libro sagrado de los musulmanes?"<<endl;
      cout<<"a) La Biblia"<<endl;
      cout<<"b) El Talmud"<<endl;
      cout<<"c) El Cor�n"<<endl;
      cout<<"d) Ninguna"<<endl;
      cin>>respuesta;
       if(respuesta=='c')
       {
       	cout<<"la respuesta es correcta"<<endl;
       	conteo_buenas++;
	   } 
else
{
	cout<<"La respuesta es incorrecta"<<endl;
	conteo_malas++;
}
      
       cout<<"6-�En qu� pa�s se us� la primera bomba at�mica?"<<endl;
      cout<<"a) Rusia"<<endl;
      cout<<"b) Estados Unidos"<<endl;
      cout<<"c) Japon"<<endl;
      cout<<"d) Ucrania"<<endl;
      cin>>respuesta;
       if(respuesta=='c')
       {
       	cout<<"la respuesta es correcta"<<endl;
       	conteo_buenas++;
	   } 
else
{
	cout<<"La respuesta es incorrecta"<<endl;
	conteo_malas++;
}
      
    cout<<"7-�Cu�l es el idioma m�s antiguo que pervive en Europa?"<<endl;
      cout<<"a) Vasco"<<endl;
      cout<<"b) Ingles"<<endl;
      cout<<"c) Frances"<<endl;
      cout<<"d) Italiano"<<endl;
      cin>>respuesta;
       if(respuesta=='a')
       {
       	cout<<"la respuesta es correcta"<<endl;
       	conteo_buenas++;
	   } 
else
{
	cout<<"La respuesta es incorrecta"<<endl;
	conteo_malas++;
}
      
      cout<<"8-�C�mo se llama la primera mujer que viaj� al espacio?"<<endl;
      cout<<"a) Valentina Tereshkova"<<endl;
      cout<<"b) Alexandra Tereshkova"<<endl;
      cout<<"c) Amanda Tereshkova"<<endl;
      cout<<"d) Marie Tereshkova"<<endl;
      cin>>respuesta;
       if(respuesta=='a')
       {
       	cout<<"la respuesta es correcta"<<endl;
       	conteo_buenas++;
	   } 
else
{
	cout<<"La respuesta es incorrecta"<<endl;
	conteo_malas++;
}
      
      cout<<"9-�Cu�l fue el primer hombre en ir a la luna?"<<endl;
      cout<<"a) Louis Armstrong"<<endl;
      cout<<"b) Neil Armstrong"<<endl;
      cout<<"c) Michael Armstrong"<<endl;
      cout<<"d) Alfred Armstrong"<<endl;
      cin>>respuesta;
       if(respuesta=='b')
       {
       	cout<<"la respuesta es correcta"<<endl;
       	conteo_buenas++;
	   } 
else
{
	cout<<"La respuesta es incorrecta"<<endl;
	conteo_malas++;
}
      
      cout<<"10-�En qu� guerra particip� Juana de Arco?"<<endl;
      cout<<"a) Guerra de la independencia francesa"<<endl;
      cout<<"b) Guerra de los 100 a�os"<<endl;
      cout<<"c) Guerra Civil Espa�ola"<<endl;
      cout<<"d) Ninguna"<<endl;
      cin>>respuesta;
       if(respuesta=='b')
       {
       	cout<<"la respuesta es correcta"<<endl;
       	conteo_buenas++;
	   } 
else
{
	cout<<"La respuesta es incorrecta"<<endl;
	conteo_malas++;
}
      
      cout<<"11-�De qu� a�o es la primera constituci�n espa�ola conocida como �La Pepa�?"<<endl;
      cout<<"a) 1812"<<endl;
      cout<<"b) 1835"<<endl;
      cout<<"c) 1978"<<endl;
      cout<<"d) 1888"<<endl;
      cin>>respuesta;
       if(respuesta=='a')
       {
       	cout<<"la respuesta es correcta"<<endl;
       	conteo_buenas++;
	   } 
else
{
	cout<<"La respuesta es incorrecta"<<endl;
	conteo_malas++;
}
      
      cout<<"12-�Qui�n fue el primer emperador romano?"<<endl;
      cout<<"a) C�sar Augusto"<<endl;
      cout<<"b) Julio Cesar"<<endl;
      cout<<"c) Marco Aurelia"<<endl;
      cout<<"d) Mario Tulio"<<endl;
      cin>>respuesta;
       if(respuesta=='a')
      {
       	cout<<"la respuesta es correcta"<<endl;
       	conteo_buenas++;
	   } 
else
{
	cout<<"La respuesta es incorrecta"<<endl;
	conteo_malas++;
}
      
      cout<<"13-�En qu� isla muri� Napole�n?"<<endl;
      cout<<"a) Sicilia"<<endl;
      cout<<"b) Santa Elena"<<endl;
      cout<<"c) Creta"<<endl;
      cout<<"d) Ninguno"<<endl;
      cin>>respuesta;
       if(respuesta=='b')
       {
       	cout<<"la respuesta es correcta"<<endl;
       	conteo_buenas++;
	   } 
else
{
	cout<<"La respuesta es incorrecta"<<endl;
	conteo_malas++;
}
      
      cout<<"14-�Qu� a�o solo tuvo 355 d�as?"<<endl;
      cout<<"a) 1582"<<endl;
      cout<<"b) 1615"<<endl;
      cout<<"c) 1823"<<endl;
      cout<<"d) Ninguno"<<endl;
      cin>>respuesta;
       if(respuesta=='a')
      {
       	cout<<"la respuesta es correcta"<<endl;
       	conteo_buenas++;
	   } 
else
{
	cout<<"La respuesta es incorrecta"<<endl;
	conteo_malas++;
}
      
      cout<<"15-�Qu� Libro es el mas leido?"<<endl;
      cout<<"a) El Diccionario"<<endl;
      cout<<"b) La Enciclopedia"<<endl;
      cout<<"c) La biblia"<<endl;
      cout<<"d) Ninguno"<<endl;
      cin>>respuesta;
       if(respuesta=='c')
      {
       	cout<<"la respuesta es correcta"<<endl;
       	conteo_buenas++;
	   } 
else
{
	cout<<"La respuesta es incorrecta"<<endl;
	conteo_malas++;
}
cout<<"Total de buenas: "<<conteo_buenas<<endl;
cout<<"Total de malas: "<<conteo_malas<<endl;

      system("pause");
      system("cls");

        break;
}
case 3: // Modulo c
{
	cout<<"Ciencia"<<endl;
	cout<<"-------"<<endl<<endl;
	
	cout<<"1-�Cu�l es el elemento qu�mico m�s abundante en la corteza terrestre?"<<endl;
	cout<<"a) Ox�geno"<<endl;
	cout<<"b) Nitr�geno"<<endl;
	cout<<"c) Carbono"<<endl;
	cout<<"d) Helio"<<endl;
	cin>>respuesta;
	     if(respuesta=='a')
        {
       	cout<<"la respuesta es correcta"<<endl;
       	conteo_buenas++;
	   } 
else
{
	cout<<"La respuesta es incorrecta"<<endl;
	conteo_malas++;
}
	  
	cout<<"2-�C�mo se denomina al resultado de una multiplicaci�n?"<<endl;
	cout<<"a) M�ltiplo"<<endl;
	cout<<"b) Resultado"<<endl;
	cout<<"c) Producto"<<endl;
	cout<<"d) Residuo"<<endl;
	cin>>respuesta;
	     if(respuesta=='c')
       {
       	cout<<"la respuesta es correcta"<<endl;
       	conteo_buenas++;
	   } 
else
{
	cout<<"La respuesta es incorrecta"<<endl;
	conteo_malas++;
}
	  
	cout<<"3-�A cu�nto equivale el numero Pi?"<<endl;
	cout<<"a) 3.1614"<<endl;
	cout<<"b) 3.1416"<<endl;
	cout<<"c) 3.416"<<endl;
	cout<<"d) 3.1461"<<endl;
	cin>>respuesta;
	     if(respuesta=='b')
     {
       	cout<<"la respuesta es correcta"<<endl;
       	conteo_buenas++;
	   } 
else
{
	cout<<"La respuesta es incorrecta"<<endl;
	conteo_malas++;
}
	  
	cout<<"4-�Cu�l fue el primer metal que emplearon los seres humanos?"<<endl;
	cout<<"a) Bronce"<<endl;
	cout<<"b) Acero"<<endl;
	cout<<"c) Cobre"<<endl;
	cout<<"d) Ninguno"<<endl;
	cin>>respuesta;
	     if(respuesta=='c')
     {
       	cout<<"la respuesta es correcta"<<endl;
       	conteo_buenas++;
	   } 
else
{
	cout<<"La respuesta es incorrecta"<<endl;
	conteo_malas++;
}
	  
	cout<<"5-�Cu�l es el primero de los n�meros primos?"<<endl;
	cout<<"a) 0"<<endl;
	cout<<"b) 1"<<endl;
	cout<<"c) 2"<<endl;
	cout<<"d) 4"<<endl;
	cin>>respuesta;
	     if(respuesta=='c')
     {
       	cout<<"la respuesta es correcta"<<endl;
       	conteo_buenas++;
	   } 
else
{
	cout<<"La respuesta es incorrecta"<<endl;
	conteo_malas++;
}
	  
	  cout<<"6-�C�mo se denomina al tipo de tri�ngulo que tiene sus tres lados iguales?"<<endl;
	cout<<"a) Is�sceles"<<endl;
	cout<<"b) Equil�tero"<<endl;
	cout<<"c) Recto"<<endl;
	cout<<"d) Ninguno"<<endl;
	cin>>respuesta;
	     if(respuesta=='b')
    {
       	cout<<"la respuesta es correcta"<<endl;
       	conteo_buenas++;
	   } 
else
{
	cout<<"La respuesta es incorrecta"<<endl;
	conteo_malas++;
}
	  
	cout<<"7-�Cu�l es el primer elemento de la Tabla peri�dica?"<<endl;
	cout<<"a) Helio"<<endl;
	cout<<"b) Arg�n"<<endl;
	cout<<"c) Hidr�geno"<<endl;
	cout<<"d) Oxigeno"<<endl;
	cin>>respuesta;
	     if(respuesta=='c')
     {
       	cout<<"la respuesta es correcta"<<endl;
       	conteo_buenas++;
	   } 
else
{
	cout<<"La respuesta es incorrecta"<<endl;
	conteo_malas++;
}
	  
	  cout<<"8-�C�mo se le denomina al centro de un �tomo?"<<endl;
	cout<<"a) Electr�n"<<endl;
	cout<<"b) N�cleo"<<endl;
	cout<<"c) Prot�n"<<endl;
	cout<<"d) Centro"<<endl;
	cin>>respuesta;
	     if(respuesta=='b')
     {
       	cout<<"la respuesta es correcta"<<endl;
       	conteo_buenas++;
	   } 
else
{
	cout<<"La respuesta es incorrecta"<<endl;
	conteo_malas++;
}
	  
    cout<<"9-�Cu�l es el gas que se encuentra en mayor cantidad en el aire que respiramos?"<<endl;
	cout<<"a) Nitr�geno"<<endl;
	cout<<"b) Ox�geno"<<endl;
	cout<<"c) Carbono"<<endl;
	cout<<"d) Helio"<<endl;
	cin>>respuesta;
	     if(respuesta=='a')
        {
       	cout<<"la respuesta es correcta"<<endl;
       	conteo_buenas++;
	   } 
else
{
	cout<<"La respuesta es incorrecta"<<endl;
	conteo_malas++;
}
	   cout<<"10-�Cu�l es el s�mbolo qu�mico del oro?"<<endl;
	cout<<"a) Or"<<endl;
	cout<<"b) Au"<<endl;
	cout<<"c) Ao"<<endl;
	cout<<"d) Ae"<<endl;
	cin>>respuesta;
	     if(respuesta=='b')
        {
       	cout<<"la respuesta es correcta"<<endl;
       	conteo_buenas++;
	   } 
else
{
	cout<<"La respuesta es incorrecta"<<endl;
	conteo_malas++;
}
	  
	cout<<"11-�Qu� es el cobalto?"<<endl;
	cout<<"a) Un mineral"<<endl;
	cout<<"b) Un vegetal"<<endl;
	cout<<"c) Un Animal"<<endl;
	cout<<"d) Un producto"<<endl;
	cin>>respuesta;
	     if(respuesta=='a')
   {
       	cout<<"la respuesta es correcta"<<endl;
       	conteo_buenas++;
	   } 
else
{
	cout<<"La respuesta es incorrecta"<<endl;
	conteo_malas++;
}
	  
	cout<<"12-�Qu� se le agrega al hierro para hacer acero?"<<endl;
	cout<<"a) Ox�geno"<<endl;
	cout<<"b) Carbono"<<endl;
	cout<<"c) Nitr�geno"<<endl;
	cout<<"d) Ninguno"<<endl;
	cin>>respuesta;
	     if(respuesta=='b')
        {
       	cout<<"la respuesta es correcta"<<endl;
       	conteo_buenas++;
	   } 
else
{
	cout<<"La respuesta es incorrecta"<<endl;
	conteo_malas++;
}
	  
	cout<<"13-�En qu� parte del cuerpo se produce la insulina?"<<endl;
	cout<<"a) H�gado"<<endl;
	cout<<"b) Pulmones"<<endl;
	cout<<"c) P�ncreas"<<endl;
	cout<<"d) Ninguno"<<endl;
	cin>>respuesta;
	     if(respuesta=='c')
 {
       	cout<<"la respuesta es correcta"<<endl;
       	conteo_buenas++;
	   } 
else
{
	cout<<"La respuesta es incorrecta"<<endl;
	conteo_malas++;
}
	  
	cout<<"14-�Qu� rama de la biolog�a estudia a los animales?"<<endl;
	cout<<"a) Fauna"<<endl;
	cout<<"b) Medicina"<<endl;
	cout<<"c) Teologia"<<endl;
	cout<<"d) Ninguno"<<endl;
	cin>>respuesta;
	     if(respuesta=='d')
 {
       	cout<<"la respuesta es correcta"<<endl;
       	conteo_buenas++;
	   } 
else
{
	cout<<"La respuesta es incorrecta"<<endl;
	conteo_malas++;
}
	  
	cout<<"15-�C�mo se llama el proceso por medio del cual las plantas obtienen su alimento?"<<endl;
	cout<<"a) Bios�ntesos"<<endl;
	cout<<"b) Fotos�ntesis"<<endl;
	cout<<"c) Luminos�ntesis"<<endl;
	cout<<"d) Ninguno"<<endl;
	cin>>respuesta;
	     if(respuesta=='b')
        {
       	cout<<"la respuesta es correcta"<<endl;
       	conteo_buenas++;
	   } 
else
{
	cout<<"La respuesta es incorrecta"<<endl;
	conteo_malas++;
}
cout<<"Total de buenas: "<<conteo_buenas<<endl;
cout<<"Total de malas: "<<conteo_malas<<endl;
	  
	  system("pause");

        break;
        
}
case 4: // Modulo d
{
	cout<<"Arte"<<endl;
	cout<<"-----"<<endl<<endl;
	cout<<"1-�Qui�n escribi� La Odisea?"<<endl;
	cout<<"a) Homero"<<endl;
	cout<<"b) Virgilio"<<endl;
	cout<<"c) Cervantes"<<endl;
	cout<<"d) Amaya"<<endl;
	cin>>respuesta;
	     if(respuesta=='a')
         {
       	cout<<"la respuesta es correcta"<<endl;
       	conteo_buenas++;
	   } 
else
{
	cout<<"La respuesta es incorrecta"<<endl;
	conteo_malas++;
}
	  
	cout<<"2-�Cu�l es la obra m�s importante de la literatura en espa�ol?"<<endl;
	cout<<"a) El Principito"<<endl;
	cout<<"b) Don Quijote de la Mancha"<<endl;
	cout<<"c) Cien a�os de soledad"<<endl;
	cout<<"d) Amor en tiempos de colera"<<endl;
	cin>>respuesta;
	     if(respuesta=='b')
    {
       	cout<<"la respuesta es correcta"<<endl;
       	conteo_buenas++;
	   } 
else
{
	cout<<"La respuesta es incorrecta"<<endl;
	conteo_malas++;
}
	  
	cout<<"3-�Qui�n pint� el famoso cuadro La �ltima cena?"<<endl;
	cout<<"a) Rembrandt"<<endl;
	cout<<"b) Velazquez"<<endl;
	cout<<"c) Leonardo da Vinci"<<endl;
	cout<<"d) Miguel Angelo"<<endl;
	cin>>respuesta;
	     if(respuesta=='c')
   {
       	cout<<"la respuesta es correcta"<<endl;
       	conteo_buenas++;
	   } 
else
{
	cout<<"La respuesta es incorrecta"<<endl;
	conteo_malas++;
}
	  
	cout<<"4-�C�mo se llama el Himno Nacional de Francia?"<<endl;
	cout<<"a) La Internaciona"<<endl;
	cout<<"b) La Marsellesa"<<endl;
	cout<<"c) La solitaria"<<endl;
	cout<<"d) La incondicional"<<endl;
	cin>>respuesta;
	     if(respuesta=='b')
     {
       	cout<<"la respuesta es correcta"<<endl;
       	conteo_buenas++;
	   } 
else
{
	cout<<"La respuesta es incorrecta"<<endl;
	conteo_malas++;
}
	  
	cout<<"5-�A qu� se denomina s�ptimo arte?"<<endl;
	cout<<"a) Pintura"<<endl;
	cout<<"b) Escultura"<<endl;
	cout<<"c) Cine"<<endl;
	cout<<"d) Musica"<<endl;
	cin>>respuesta;
	     if(respuesta=='c')
     {
       	cout<<"la respuesta es correcta"<<endl;
       	conteo_buenas++;
	   } 
else
{
	cout<<"La respuesta es incorrecta"<<endl;
	conteo_malas++;
}
	  
	cout<<"6-�Qu� es un mel�mano?"<<endl;
	cout<<"a) Un amante de la m�sica"<<endl;
	cout<<"b) Un amante del cine"<<endl;
	cout<<"c) Un amante de los c�mics"<<endl;
	cout<<"d) Ninguno"<<endl;
	cin>>respuesta;
	     if(respuesta=='a')
     {
       	cout<<"la respuesta es correcta"<<endl;
       	conteo_buenas++;
	   } 
else
{
	cout<<"La respuesta es incorrecta"<<endl;
	conteo_malas++;
}
	  
	cout<<"7-�C�mo se llama la estrofa po�tica que est� conformada por 10 versos de 8 s�labas cada uno?"<<endl;
	cout<<"a) D�cima espinela"<<endl;
	cout<<"b) Decas�labo"<<endl;
	cout<<"c) Decas�labo octogonal"<<endl;
	cout<<"d) Decasilabo pentagonal"<<endl;
	cin>>respuesta;
	     if(respuesta=='a')
    {
       	cout<<"la respuesta es correcta"<<endl;
       	conteo_buenas++;
	   } 
else
{
	cout<<"La respuesta es incorrecta"<<endl;
	conteo_malas++;
}
	  
	cout<<"8-�Cu�les son las notas musicales?"<<endl;
	cout<<"a) Do, Re, Mi"<<endl;
	cout<<"b) Do, Re, Mi, Sol, La, Si, Do"<<endl;
	cout<<"c) Do, Re, Mi, Fa, Sol, La, Si"<<endl;
	cout<<"d) Do, Re, Sol, La, Si"<<endl;
	cin>>respuesta;
	     if(respuesta=='c')
     {
       	cout<<"la respuesta es correcta"<<endl;
       	conteo_buenas++;
	   } 
else
{
	cout<<"La respuesta es incorrecta"<<endl;
	conteo_malas++;
}
	  
	cout<<"9-�Qui�n escribi� Cien a�os de soledad?"<<endl;
	cout<<"a) Gabriel Garc�a M�rquez"<<endl;
	cout<<"b) Mario Vargas Llosa"<<endl;
	cout<<"c) Camilo Jos� Cela"<<endl;
	cout<<"d) Rafael Amador"<<endl;
	cin>>respuesta;
	     if(respuesta=='a')
     {
       	cout<<"la respuesta es correcta"<<endl;
       	conteo_buenas++;
	   } 
else
{
	cout<<"La respuesta es incorrecta"<<endl;
	conteo_malas++;
}
	  
	cout<<"10-�Qui�n pint� La noche estrellada?"<<endl;
	cout<<"a) Rembrandt"<<endl;
	cout<<"b) Vincent van Gogh"<<endl;
	cout<<"c) Velazquez"<<endl;
	cout<<"d) Miguel Angelo"<<endl;
	cin>>respuesta;
	     if(respuesta=='b')
     {
       	cout<<"la respuesta es correcta"<<endl;
       	conteo_buenas++;
	   } 
else
{
	cout<<"La respuesta es incorrecta"<<endl;
	conteo_malas++;
}
	  
	cout<<"11-�Qui�n es denominado el Rey del Rock and Roll en Estados Unidos?"<<endl;
	cout<<"a) Bruce Springsteen"<<endl;
	cout<<"b) Michael Jackson"<<endl;
	cout<<"c) Elvis Presley"<<endl;
	cout<<"d) Camilo"<<endl;
	cin>>respuesta;
	     if(respuesta=='c')
     {
       	cout<<"la respuesta es correcta"<<endl;
       	conteo_buenas++;
	   } 
else
{
	cout<<"La respuesta es incorrecta"<<endl;
	conteo_malas++;
}
	  
	cout<<"12-�Cu�l es el nombre de la artista mexicana conocida como �la Do�a�?"<<endl;
	cout<<"a) Mar�a F�lix"<<endl;
	cout<<"b) Paulina Rubio"<<endl;
	cout<<"c) Frida Kahlo"<<endl;
	cout<<"d) Marie Mendez"<<endl;
	cin>>respuesta;
	     if(respuesta=='a')
    {
       	cout<<"la respuesta es correcta"<<endl;
       	conteo_buenas++;
	   } 
else
{
	cout<<"La respuesta es incorrecta"<<endl;
	conteo_malas++;
}
	  
	cout<<"13-�En qu� a�o muri� Kurt Cobain?"<<endl;
	cout<<"a) 1996"<<endl;
	cout<<"b) 1994"<<endl;
	cout<<"c) 1998"<<endl;
	cout<<"d) 1995"<<endl;
	cin>>respuesta;
	     if(respuesta=='b')
  {
       	cout<<"la respuesta es correcta"<<endl;
       	conteo_buenas++;
	   } 
else
{
	cout<<"La respuesta es incorrecta"<<endl;
	conteo_malas++;
}
	  
	cout<<"14-�Qui�n compuso Los Conciertos de Brandeburgo?"<<endl;
	cout<<"a) Mozart"<<endl;
	cout<<"b) Beethoven"<<endl;
	cout<<"c) Bach"<<endl;
	cout<<"d) Ninguno"<<endl;
	cin>>respuesta;
	     if(respuesta=='c')
 {
       	cout<<"la respuesta es correcta"<<endl;
       	conteo_buenas++;
	   } 
else
{
	cout<<"La respuesta es incorrecta"<<endl;
	conteo_malas++;
}
	  
	cout<<"15-�Qui�n pinto la noche estrellada?"<<endl;
	cout<<"a) Miguel Angel"<<endl;
	cout<<"b) Claude Monet"<<endl;
	cout<<"c) Pablo Picasso"<<endl;
	cout<<"d) Vincent van Gogh"<<endl;
	cin>>respuesta;
	     if(respuesta=='d')
     {
       	cout<<"la respuesta es correcta"<<endl;
       	conteo_buenas++;
	   } 
else
{
	cout<<"La respuesta es incorrecta"<<endl;
	conteo_malas++;
}
cout<<"Total de buenas: "<<conteo_buenas<<endl;
cout<<"Total de malas: "<<conteo_malas<<endl;
	  
	  	  system("pause");

        break;
        
}
case 5: // Modulo e
{
	cout<<"Deporte"<<endl;
	cout<<"-------"<<endl<<endl;
	
	cout<<"1-�Cu�nto dura un partido de f�tbol?"<<endl;
	cout<<"a) 90 minutos repartidos en dos partes de 45 minutos cada una"<<endl;
	cout<<"b) 90 minutos repartidos en tres partes de 30 minutos cada una"<<endl;
	cout<<"c) 90 minutos"<<endl;
	cout<<"d) 95 minutos"<<endl;
	cin>>respuesta;
	     if(respuesta=='a')
     {
       	cout<<"la respuesta es correcta"<<endl;
       	conteo_buenas++;
	   } 
else
{
	cout<<"La respuesta es incorrecta"<<endl;
	conteo_malas++;
}
	  
	cout<<"2-�Cu�ndo se celebr� el primer mundial de f�tbol?"<<endl;
	cout<<"a) El 15 de julio de 1930 en Uruguay"<<endl;
	cout<<"b) El 10 de julio de 1935 en Uruguay"<<endl;
	cout<<"c) El 13 de julio de 1930 en Uruguay"<<endl;
	cout<<"d) Ninguno"<<endl;
	cin>>respuesta;
	     if(respuesta=='c')
    {
       	cout<<"la respuesta es correcta"<<endl;
       	conteo_buenas++;
	   } 
else
{
	cout<<"La respuesta es incorrecta"<<endl;
	conteo_malas++;
}
	  
	cout<<"3-��Qu� selecci�n de f�tbol ha ganado m�s Mundiales??"<<endl;
	cout<<"a) Brasil"<<endl;
	cout<<"b) Uruguay"<<endl;
	cout<<"c) Panama"<<endl;
	cout<<"d) Ninguno"<<endl;
	cin>>respuesta;
	     if(respuesta=='a')
 {
       	cout<<"la respuesta es correcta"<<endl;
       	conteo_buenas++;
	   } 
else
{
	cout<<"La respuesta es incorrecta"<<endl;
	conteo_malas++;
}
	  
	cout<<"4-�Cu�ntos jugadores tiene un equipo de f�tbol en el campo de juego?"<<endl;
	cout<<"a) 12"<<endl;
	cout<<"b) 11"<<endl;
	cout<<"c) 10"<<endl;
	cout<<"d) 15"<<endl;
	cin>>respuesta;
	     if(respuesta=='b')
 {
       	cout<<"la respuesta es correcta"<<endl;
       	conteo_buenas++;
	   } 
else
{
	cout<<"La respuesta es incorrecta"<<endl;
	conteo_malas++;
}
	  
	cout<<"4-�Cu�ntas Copas del Mundo ha ganado Italia?"<<endl;
	cout<<"a) 4 Copas del Mundo"<<endl;
	cout<<"b) 5 Copas del Mundo"<<endl;
	cout<<"c) 8 Copas del Mundo"<<endl;
	cout<<"d) 3 Copas del Mundo "<<endl;
	cin>>respuesta;
	     if(respuesta=='a')
 {
       	cout<<"la respuesta es correcta"<<endl;
       	conteo_buenas++;
	   } 
else
{
	cout<<"La respuesta es incorrecta"<<endl;
	conteo_malas++;
}
	  
	cout<<"5-�En qu� a�o debut� Pep Guardiola como entrenador del FC Barcelona?"<<endl;
	cout<<"a) 17 de junio de 2009"<<endl;
	cout<<"b) 15 de junio de 2008"<<endl;
	cout<<"c) 17 de junio de 2008"<<endl;
	cout<<"d) 17 de junio de 2010 "<<endl;
	cin>>respuesta;
	     if(respuesta=='c')
 {
       	cout<<"la respuesta es correcta"<<endl;
       	conteo_buenas++;
	   } 
else
{
	cout<<"La respuesta es incorrecta"<<endl;
	conteo_malas++;
}
	  
	cout<<"6-�C�mo se llama la anotaci�n de un tanto en f�tbol americano?"<<endl;
	cout<<"a) Anotacion"<<endl;
	cout<<"b) Hong roll"<<endl;
	cout<<"c) Ninguno"<<endl;
	cout<<"d) El touchdown "<<endl;
	cin>>respuesta;
	     if(respuesta=='d')
    {
       	cout<<"la respuesta es correcta"<<endl;
       	conteo_buenas++;
	   } 
else
{
	cout<<"La respuesta es incorrecta"<<endl;
	conteo_malas++;
}
	  
	cout<<"7-�Cada cu�ntos a�os se celebran los Juegos Ol�mpicos?"<<endl;
	cout<<"a) Cada 5 a�os"<<endl;
	cout<<"b) Cada 4 a�os"<<endl;
	cout<<"c) Cada 6 a�os"<<endl;
	cout<<"d) Cada 2 a�os "<<endl;
	cin>>respuesta;
	     if(respuesta=='b')
 {
       	cout<<"la respuesta es correcta"<<endl;
       	conteo_buenas++;
	   } 
else
{
	cout<<"La respuesta es incorrecta"<<endl;
	conteo_malas++;
}
	  
	cout<<"8-�Cu�l es el deporte m�s popular en la India?"<<endl;
	cout<<"a) Futbol"<<endl;
	cout<<"b) Basquetball"<<endl;
	cout<<"c) Voleibol"<<endl;
	cout<<"d) El cr�quet "<<endl;
	cin>>respuesta;
	     if(respuesta=='d')
     {
       	cout<<"la respuesta es correcta"<<endl;
       	conteo_buenas++;
	   } 
else
{
	cout<<"La respuesta es incorrecta"<<endl;
	conteo_malas++;
}
	  
	cout<<"9-�Cu�ntos cubos coloreados hay en el Cubo de Rubik?"<<endl;
	cout<<"a) Cuenta con seis colores uniformes"<<endl;
	cout<<"b) Cuenta con seis colores Iguales"<<endl;
	cout<<"c) Cuenta con nueve colores uniformes"<<endl;
	cout<<"d) Cuenta con seis colores"<<endl;
	cin>>respuesta;
	     if(respuesta=='a')
 {
       	cout<<"la respuesta es correcta"<<endl;
       	conteo_buenas++;
	   } 
else
{
	cout<<"La respuesta es incorrecta"<<endl;
	conteo_malas++;
}
	  
	cout<<"10-�Cu�l es el deporte nacional en Jap�n?"<<endl;
	cout<<"a) Karate"<<endl;
	cout<<"b) Artes Marciales"<<endl;
	cout<<"c) El sumo"<<endl;
	cout<<"d) El cr�quet "<<endl;
	cin>>respuesta;
	     if(respuesta=='c')
 {
       	cout<<"la respuesta es correcta"<<endl;
       	conteo_buenas++;
	   } 
else
{
	cout<<"La respuesta es incorrecta"<<endl;
	conteo_malas++;
}
	  
	cout<<"11-�Qu� 3 tipos de armas se utilizan en esgrima?"<<endl;
	cout<<"a) Espada, florete y sable"<<endl;
	cout<<"b) Espada y sable"<<endl;
	cout<<"c) Espada"<<endl;
	cout<<"d) Espada y florete  "<<endl;
	cin>>respuesta;
	     if(respuesta=='a')
 {
       	cout<<"la respuesta es correcta"<<endl;
       	conteo_buenas++;
	   } 
else
{
	cout<<"La respuesta es incorrecta"<<endl;
	conteo_malas++;
}
	  
	cout<<"12-�Cu�l es la lesi�n m�s frecuente entre los corredores?"<<endl;
	cout<<"a) El tobillo del corredor"<<endl;
	cout<<"b) La rodilla del corredor"<<endl;
	cout<<"c) El brazo del corredor"<<endl;
	cout<<"d) Ninguno"<<endl;
	cin>>respuesta;
	     if(respuesta=='b')
 {
       	cout<<"la respuesta es correcta"<<endl;
       	conteo_buenas++;
	   } 
else
{
	cout<<"La respuesta es incorrecta"<<endl;
	conteo_malas++;
}
	  
	cout<<"13-�Cu�nto tiempo se recomienda que pase entre un entrenamiento y una comida?"<<endl;
	cout<<"a) 3 horas"<<endl;
	cout<<"b) 5 horas"<<endl;
	cout<<"c) 2 horas"<<endl;
	cout<<"d) Ninguno"<<endl;
	cin>>respuesta;
	     if(respuesta=='a')
 {
       	cout<<"la respuesta es correcta"<<endl;
       	conteo_buenas++;
	   } 
else
{
	cout<<"La respuesta es incorrecta"<<endl;
	conteo_malas++;
}
	  
	cout<<"14-�Cu�ntos Km de distancia mide una marat�n?"<<endl;
	cout<<"a) 41.85 km"<<endl;
	cout<<"b) 42.16 km"<<endl;
	cout<<"c) 43.77 km"<<endl;
	cout<<"d) 43.45 km"<<endl;
	cin>>respuesta;
	     if(respuesta=='b')
 {
       	cout<<"la respuesta es correcta"<<endl;
       	conteo_buenas++;
	   } 
else
{
	cout<<"La respuesta es incorrecta"<<endl;
	conteo_malas++;
}
	  
	cout<<"15-�Cu�les son los cinco colores del anillo de los Juegos Ol�mpicos?"<<endl;
	cout<<"a) Azul, rojo, amarillo, verde y negro"<<endl;
	cout<<"b) Azul, rojo, amarillo, verde y violeta"<<endl;
	cout<<"c) �ndigo, rojo, morado, verde y negro"<<endl;
	cout<<"d) Azul, rojo, amarillo, naranja y verde"<<endl;
	cin>>respuesta;
	     if(respuesta=='a')
 {
       	cout<<"la respuesta es correcta"<<endl;
       	conteo_buenas++;
	   } 
else
{
	cout<<"La respuesta es incorrecta"<<endl;
	conteo_malas++;
}
cout<<"Total de buenas: "<<conteo_buenas<<endl;
cout<<"Total de malas: "<<conteo_malas<<endl;	  
	   system("pause");

        break;
        
}
case 6: // Modulo f
{
	cout<<"Salio del programa"<<endl;
      system("pause");  
system("cls");
            
    
	break;  
}

}
}
}

}


