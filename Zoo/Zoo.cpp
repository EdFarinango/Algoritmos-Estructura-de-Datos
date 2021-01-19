#include <iostream>
using namespace std;
int main() {
char nombre[40], o;
int suma=0,pa,cant=0,especies=0,cont;
float peso,ptl=0;
do{
 cout<<"\tZOOLOGICO GUAYLLABAMBA"<<endl;
 cout<<"a)MAMIFEROS"<<endl;
 cout<<"b)REPTILES"<<endl;
 cout<<"c)AVES"<<endl;
 cout<<"d)NUMEROS DE ANIMALES Y PESO TOTAL"<<endl;
 cout<<"e)SALIR"<<endl;
 cout<<"INGRESE UNA OPCION:"<<endl;
 cin>>o;
 switch (o){
 case 'a' :
 cout<<"MAMIFEROS"<<endl;
 cout<<"Ingrese cuantas especies son:"<<endl;
 cin>>especies;
 for(cont=1;cont<=especies;cont++)
 {
 cout<<"Animal #"<<cont<<"-Que animal es:"<<endl;
 cin>>nombre;
 cout<<"Peso(kg) de cada:"<<nombre<<endl;
 cin>>peso;
 pa=peso*cant;
 cout<<"Cuantos animales son:"<<endl;
 cin>>cant;
 suma=suma+cant;
 ptl=ptl+(peso*cant);
 }
break;
case 'b':
printf("REPTILES\n");
 cout<<("Ingrese cuantas especies son:");
 cin>>especies;
 for(cont=1;cont<=especies;cont++)
 {
 cout<<"Animal #"<<cont<<"-Que animal es:"<<endl;
 cin>>nombre;
 cout<<"Peso(kg) de cada :"<<nombre<<endl;

 cin>>peso;
 pa=peso*cant;
 cout<<"Cuantos animales son:"<<endl;
 cin>>cant;
 suma=suma+cant;
 ptl=ptl+(peso*cant);
 }
break;
case 'c':
cout<<"AVES"<<endl;
 cout<<"Ingrese cuantas especies son:"<<endl;
 cin>>especies;
 for(cont=1;cont<=especies;cont++)
 {
 cout<<"Animal #"<<cont<<"-Que animal es:"<<endl;
 cin>>nombre;
 cout<<"Peso(kg) de cada :"<<nombre<<endl;
 cin>>peso;
 pa=peso*cant;
 cout<<"Cuantos animales son:"<<endl;
 cin>>cant;
 suma=suma+cant;
 ptl=ptl+(peso*cant);
 }
break;
case 'd':
 cout<<"PESO TOTAL DE LOS ANIMALES:"<<ptl<<endl;
 cout<<"NUMERO DE ANIMALES:"<<suma<<endl;
 cout<<"(Presione ENTER para continuar )"<<endl;
 getchar();
 getchar();
break;
default:
cout<<"ADIOS"<<endl;
getchar();
getchar();
break;
 }
 }
while(o!=0);
return 0;
}
