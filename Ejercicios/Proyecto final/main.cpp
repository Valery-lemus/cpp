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
cout<< "1- Geografía" <<endl;
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
  
cout<<"Geografía"<<endl;
cout<<"---------"<<endl<<endl;
 
cout<<"1-¿Cual es el oceano mas grande del mundo?"<<endl;
cout<<"a) Oceano Pacifico"<<endl;
cout<<"b) Océano Índico"<<endl;
cout<<"c) Océano Atlántico"<<endl;
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
cout<<"2-¿Cuál es el país más grande del mundo?"<<endl;
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
cout<<"3-¿En qué continente se encuentra Surinam?"<<endl;
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
cout<<"4-¿Cuál es la nación más pequeña del mundo?"<<endl;
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
cout<<"5-¿Cuál es la única ciudad que está en dos continentes distintos?"<<endl;
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
cout<<"6-¿Cuál es la ciudad italiana conocida como «la novia del mar»"<<endl;
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
cout<<"7-¿Cuál es la cascada más alta del mundo?"<<endl;
cout<<"a) El Salto del Ángel"<<endl;
cout<<"b) Cataratas del Niáraga"<<endl;
cout<<"c) Cataratas de Iguazú"<<endl;
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
cout<<"8-¿Cuál es la capital de Pakistán?"<<endl;
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

cout<<"9-¿La bandera de Estonia consiste en 3 franjas Horizontales de color?"<<endl;
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
 
cout<<"10-¿Cuál es el nombre del río más largo del mundo?"<<endl;
cout<<"a) Río Nilo"<<endl;
cout<<"b) Río Amazonas"<<endl;
cout<<"c) Río Danubio"<<endl;
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
cout<<"11-¿Cuál es el país más poblado de la tierra?"<<endl;
cout<<"a) España"<<endl;
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
cout<<"12-¿Cuál es la ciudad de los rascacielos?"<<endl;
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
cout<<"13-¿En qué país se encuentra ubicada la Casa Rosada?"<<endl;
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
cout<<"14-¿Cuál es la capital de Nicaragua?"<<endl;
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
cout<<"15-¿Cuál es la segunda montaña más alta del mundo?"<<endl;
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
	
	cout<<"1-¿Cuándo terminó la II Guerra Mundial?"<<endl;
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
	  
	  cout<<"2-¿En qué año llegó Cristobal Colón a América?"<<endl;
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
      
      cout<<"3-¿Quién es el padre del psicoanálisis?"<<endl;
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
      
       cout<<"4-¿Quién era el general de los Nazis en la Segunda Guerra Mundial?"<<endl;
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
      
        cout<<"5-¿Cuál es el libro sagrado de los musulmanes?"<<endl;
      cout<<"a) La Biblia"<<endl;
      cout<<"b) El Talmud"<<endl;
      cout<<"c) El Corán"<<endl;
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
      
       cout<<"6-¿En qué país se usó la primera bomba atómica?"<<endl;
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
      
    cout<<"7-¿Cuál es el idioma más antiguo que pervive en Europa?"<<endl;
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
      
      cout<<"8-¿Cómo se llama la primera mujer que viajó al espacio?"<<endl;
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
      
      cout<<"9-¿Cuál fue el primer hombre en ir a la luna?"<<endl;
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
      
      cout<<"10-¿En qué guerra participó Juana de Arco?"<<endl;
      cout<<"a) Guerra de la independencia francesa"<<endl;
      cout<<"b) Guerra de los 100 años"<<endl;
      cout<<"c) Guerra Civil Española"<<endl;
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
      
      cout<<"11-¿De qué año es la primera constitución española conocida como «La Pepa»?"<<endl;
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
      
      cout<<"12-¿Quién fue el primer emperador romano?"<<endl;
      cout<<"a) César Augusto"<<endl;
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
      
      cout<<"13-¿En qué isla murió Napoleón?"<<endl;
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
      
      cout<<"14-¿Qué año solo tuvo 355 días?"<<endl;
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
      
      cout<<"15-¿Qué Libro es el mas leido?"<<endl;
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
	
	cout<<"1-¿Cuál es el elemento químico más abundante en la corteza terrestre?"<<endl;
	cout<<"a) Oxígeno"<<endl;
	cout<<"b) Nitrógeno"<<endl;
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
	  
	cout<<"2-¿Cómo se denomina al resultado de una multiplicación?"<<endl;
	cout<<"a) Múltiplo"<<endl;
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
	  
	cout<<"3-¿A cuánto equivale el numero Pi?"<<endl;
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
	  
	cout<<"4-¿Cuál fue el primer metal que emplearon los seres humanos?"<<endl;
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
	  
	cout<<"5-¿Cuál es el primero de los números primos?"<<endl;
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
	  
	  cout<<"6-¿Cómo se denomina al tipo de triángulo que tiene sus tres lados iguales?"<<endl;
	cout<<"a) Isósceles"<<endl;
	cout<<"b) Equilátero"<<endl;
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
	  
	cout<<"7-¿Cuál es el primer elemento de la Tabla periódica?"<<endl;
	cout<<"a) Helio"<<endl;
	cout<<"b) Argón"<<endl;
	cout<<"c) Hidrógeno"<<endl;
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
	  
	  cout<<"8-¿Cómo se le denomina al centro de un átomo?"<<endl;
	cout<<"a) Electrón"<<endl;
	cout<<"b) Núcleo"<<endl;
	cout<<"c) Protón"<<endl;
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
	  
    cout<<"9-¿Cuál es el gas que se encuentra en mayor cantidad en el aire que respiramos?"<<endl;
	cout<<"a) Nitrógeno"<<endl;
	cout<<"b) Oxígeno"<<endl;
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
	   cout<<"10-¿Cuál es el símbolo químico del oro?"<<endl;
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
	  
	cout<<"11-¿Qué es el cobalto?"<<endl;
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
	  
	cout<<"12-¿Qué se le agrega al hierro para hacer acero?"<<endl;
	cout<<"a) Oxígeno"<<endl;
	cout<<"b) Carbono"<<endl;
	cout<<"c) Nitrógeno"<<endl;
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
	  
	cout<<"13-¿En qué parte del cuerpo se produce la insulina?"<<endl;
	cout<<"a) Hígado"<<endl;
	cout<<"b) Pulmones"<<endl;
	cout<<"c) Páncreas"<<endl;
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
	  
	cout<<"14-¿Qué rama de la biología estudia a los animales?"<<endl;
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
	  
	cout<<"15-¿Cómo se llama el proceso por medio del cual las plantas obtienen su alimento?"<<endl;
	cout<<"a) Biosíntesos"<<endl;
	cout<<"b) Fotosíntesis"<<endl;
	cout<<"c) Luminosíntesis"<<endl;
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
	cout<<"1-¿Quién escribió La Odisea?"<<endl;
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
	  
	cout<<"2-¿Cuál es la obra más importante de la literatura en español?"<<endl;
	cout<<"a) El Principito"<<endl;
	cout<<"b) Don Quijote de la Mancha"<<endl;
	cout<<"c) Cien años de soledad"<<endl;
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
	  
	cout<<"3-¿Quién pintó el famoso cuadro La última cena?"<<endl;
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
	  
	cout<<"4-¿Cómo se llama el Himno Nacional de Francia?"<<endl;
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
	  
	cout<<"5-¿A qué se denomina séptimo arte?"<<endl;
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
	  
	cout<<"6-¿Qué es un melómano?"<<endl;
	cout<<"a) Un amante de la música"<<endl;
	cout<<"b) Un amante del cine"<<endl;
	cout<<"c) Un amante de los cómics"<<endl;
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
	  
	cout<<"7-¿Cómo se llama la estrofa poética que está conformada por 10 versos de 8 sílabas cada uno?"<<endl;
	cout<<"a) Décima espinela"<<endl;
	cout<<"b) Decasílabo"<<endl;
	cout<<"c) Decasílabo octogonal"<<endl;
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
	  
	cout<<"8-¿Cuáles son las notas musicales?"<<endl;
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
	  
	cout<<"9-¿Quién escribió Cien años de soledad?"<<endl;
	cout<<"a) Gabriel García Márquez"<<endl;
	cout<<"b) Mario Vargas Llosa"<<endl;
	cout<<"c) Camilo José Cela"<<endl;
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
	  
	cout<<"10-¿Quién pintó La noche estrellada?"<<endl;
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
	  
	cout<<"11-¿Quién es denominado el Rey del Rock and Roll en Estados Unidos?"<<endl;
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
	  
	cout<<"12-¿Cuál es el nombre de la artista mexicana conocida como «la Doña»?"<<endl;
	cout<<"a) María Félix"<<endl;
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
	  
	cout<<"13-¿En qué año murió Kurt Cobain?"<<endl;
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
	  
	cout<<"14-¿Quién compuso Los Conciertos de Brandeburgo?"<<endl;
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
	  
	cout<<"15-¿Quién pinto la noche estrellada?"<<endl;
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
	
	cout<<"1-¿Cuánto dura un partido de fútbol?"<<endl;
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
	  
	cout<<"2-¿Cuándo se celebró el primer mundial de fútbol?"<<endl;
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
	  
	cout<<"3-¿¿Qué selección de fútbol ha ganado más Mundiales??"<<endl;
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
	  
	cout<<"4-¿Cuántos jugadores tiene un equipo de fútbol en el campo de juego?"<<endl;
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
	  
	cout<<"4-¿Cuántas Copas del Mundo ha ganado Italia?"<<endl;
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
	  
	cout<<"5-¿En qué año debutó Pep Guardiola como entrenador del FC Barcelona?"<<endl;
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
	  
	cout<<"6-¿Cómo se llama la anotación de un tanto en fútbol americano?"<<endl;
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
	  
	cout<<"7-¿Cada cuántos años se celebran los Juegos Olímpicos?"<<endl;
	cout<<"a) Cada 5 años"<<endl;
	cout<<"b) Cada 4 años"<<endl;
	cout<<"c) Cada 6 años"<<endl;
	cout<<"d) Cada 2 años "<<endl;
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
	  
	cout<<"8-¿Cuál es el deporte más popular en la India?"<<endl;
	cout<<"a) Futbol"<<endl;
	cout<<"b) Basquetball"<<endl;
	cout<<"c) Voleibol"<<endl;
	cout<<"d) El críquet "<<endl;
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
	  
	cout<<"9-¿Cuántos cubos coloreados hay en el Cubo de Rubik?"<<endl;
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
	  
	cout<<"10-¿Cuál es el deporte nacional en Japón?"<<endl;
	cout<<"a) Karate"<<endl;
	cout<<"b) Artes Marciales"<<endl;
	cout<<"c) El sumo"<<endl;
	cout<<"d) El críquet "<<endl;
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
	  
	cout<<"11-¿Qué 3 tipos de armas se utilizan en esgrima?"<<endl;
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
	  
	cout<<"12-¿Cuál es la lesión más frecuente entre los corredores?"<<endl;
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
	  
	cout<<"13-¿Cuánto tiempo se recomienda que pase entre un entrenamiento y una comida?"<<endl;
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
	  
	cout<<"14-¿Cuántos Km de distancia mide una maratón?"<<endl;
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
	  
	cout<<"15-¿Cuáles son los cinco colores del anillo de los Juegos Olímpicos?"<<endl;
	cout<<"a) Azul, rojo, amarillo, verde y negro"<<endl;
	cout<<"b) Azul, rojo, amarillo, verde y violeta"<<endl;
	cout<<"c) índigo, rojo, morado, verde y negro"<<endl;
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


