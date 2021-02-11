
#include <iostream>
#include <fstream>
using namespace std;
#define tam 6
#define tama 100
void ingresar(int a[], int n);
void ingresarOrd(int a[], int m);
void invertir(int a[], int n);
void ordenarOrd(int a[], int n);
void imprimir(int a[], int n);
void imprimirOrd(int a[], int m);
void cabecera();
void menu();
floatbusqueda(int arr[], int t, float dato);
void ingresarElementosArreglo(int arr[], int t);
void imprimirElementosArreglo(int arr[], int t);
int solicitarNumero();
void archivos(int arr[], int t);
void archivosOrd(int arr[], int t);
char *mess[] = {"Enero","Febrero","Marzo","Abril","Mayo","Junio","Julio","Agosto","Septiembre","Octubre","Noviembre","Diciembre"};
int main()
{
  int b;
  int c[12] = {}
  ;
  int valoresArreglo;
  char letra1;


  do
  {
    cabecera();
    menu();

    cout << "\n Desea continuar en el programa" << endl;

    cout << "[S/N]" << endl;

    cin >> letra1;

  }
  while (letra1 == 'S' || letra1 == 's');
  if (letra1 == 'N' || letra1 == 'n')
  {
    cout << "Buen dia" << endl;
  }
  else
  {

  }
    return 0;

}


void cabecera()
{
  cout << "\t TRABAJO EN GRUPO\n" << endl;
  cout << "\t Algoritmoss y Estrcturada de Datos \n" << endl;
  cout << "\t SELECCIONA UNA OPCION DEL MENU \n" << endl;
  cout << "1.- INTERCAMBIAR POSICIONES DE UN VECTOR" << endl;
  cout << "2.- ORDENAMINETO DE UN VECTOR" << endl;
  cout << "3.- CUENTA DE AHORROS VIRTUAL DEL BANCO DEL PICHICNHA" << endl;
  cout << "4.- SALIR" << endl;
}

void menu()
{
  int tamanio;
  int numero;
  int resultado;
  int opcion = 0;
  cout << "OPCION: ";
  cin >> opcion;
  switch (opcion)
  {
    case 1:
    	
      	int n;
      	cout << "\t Numero invertido\n" << endl;

      	int arreglo1[tam];
      	ingresar(arreglo1, n);
      	invertir(arreglo1, n);
      	imprimir(arreglo1, n);
    	archivos(arreglo1, n);
      
      break;
    case 2:
      cout << "\t ORDENAMIENTO DE UN VECTOR \n" << endl;
      int arreglo2[tama];
      int m;
      cout << "Cuantos valores va a ingresar al vector: ";
      cin >> m;
      ingresarOrd(arreglo2, m);
      ordenarOrd(arreglo2, m);
      cout << endl;
      imprimirOrd(arreglo2, m);
      archivosOrd(arreglo2, m);
      break;
    case 3:
      int b;
      int c[12] = {}
      ;
      int valoresArreglo;

      cout << "3.- CUENTA DE AHORROS VIRTUAL DEL BANCO DELPICHICNHA" << endl;
      cout << "Hola Alberto ahora puedes ingresar tus ahorros de mes en mes" <<endl;
      cout << "Ingrese los valores que vas a depositar" << endl;
      ingresarElementosArreglo(c, valoresArreglo);
      //cout<<"Los valores ingresados en el arreglo son:"<<endl;
      //imprimirElementosArreglo(c, valoresArreglo);

      int dato = solicitarNumero();

      if (busqueda(c, 11, dato) == 3)
      {
        cout << "ELEMENTO NO ENCONTRADO";
        
        ofstream archivoprueba;
		string nombrearchivo;
		getline(cin,nombrearchivo);
		archivoprueba.open("Cuenta.txt",ios::out);
		archivoprueba<<"Resultado de la busqueda: "<<endl;
		archivoprueba<<"Valor buscado: "<<dato<<"****"<<" ELEMENTO NO ENCONTRADO";	
		archivoprueba.close();
			
      }
      else
      {
        b = busqueda(c, 11, dato);

        cout << "El mes el que deposito ese valor fue en: " << mess[b - 1];
        ofstream archivoprueba;
		string nombrearchivo;
			  
		getline(cin,nombrearchivo);
		archivoprueba.open("cuenta.txt",ios::out);
		archivoprueba<<"Resultado de la busqueda: "<<endl;
		archivoprueba<<"Valor buscado: "<<dato<<" ELEMENTO ENCONTRADO POSICION: "<<busqueda(arreglo2,m,dato);	
		archivoprueba.close();

      }

      break;



  }
}

void ordenarOrd(int a[], int m)
{
  int aux;
  for (int i = 0; i < m; i++)
  {
    for (int j = i + 1; j < m; j++)
    {
      if (a[j] < a[i])
      {
        aux = a[i];
        a[i] = a[j];
        a[j] = aux;
      }
    }
  }
}

void ingresarOrd(int a[], int m)
{


  for (int i = 0; i < m; i++)
  {
    cout << "Ingrese los numeros a invertir:";
    cin >> a[i];
  }
}

void ingresar(int a[], int n)
{

  for (int i = 0; i < 6; i++)
  {
    cout << "Ingrese los numeros a invertir:";
    cin >> a[i];
  }
}

void invertir(int a[], int n)
{
  int aux;
  for (int i = 0; i < 6; i++)
  {
    for (int j = i + 1; j < 6; j++)
    {

      aux = a[i];
      a[i] = a[j];
      a[j] = aux;
    }
  }
}

void imprimir(int a[], int n)
{
  int i;
  int c = 0;
  cout << "Orden " << endl;
  for (i = 0; i < 6; i++)

  {

    c++;
    cout << "|" << a[i] << "|";

  }
}

void imprimirOrd(int a[], int m)
{
  int i;
  int c = 0;
  cout << "Orden " << endl;
  for (i = 0; i < m; i++)

  {
    c++;
    cout << "|" << a[i] << "|";

  }
}

float busqueda(int arr[], int t, float dato)
{
  int i;

  for (i = 0; i <= 11; i++)
  {

    if (arr[i] == dato)
    {
      return i + 1;

    }
  }

  return 3;
}

void ingresarElementosArreglo(int arr[], int t)
{
  char *mess[] = 
  {
    "Enero", "Febrero", "Marzo", "Abril", "Mayo", "Junio", "Julio", "Agosto","Septiembre", "Octubre", "Noviembre", "Diciembre"
  };
  for (int i = 0; i <= 11; i++)
  {
    cout << mess[i] << ": ";
    cin >> t;
    arr[i] = t;
  }

}

void imprimirElementosArreglo(int arr[], int t)
{
  for (int i = 0; i <= 11; i++){
  	cout << arr[i] << "|";
  }
    
}

int solicitarNumero()
{
  int n;
  cout << endl;
  cout << 
    "Ingresa el valor guardado en el banco para saber en que mes realizaste el deposito: ";
  cin >> n;
  return n;
}

void archivos(int arr[], int t){
	
	ofstream archivoprueba;
  	string nombrearchivo;
  
  	getline(cin,nombrearchivo);
  	archivoprueba.open("intercambiar.txt",ios::out);
  	archivoprueba<<"Arreglo en orden: ";	
  	for(int i=0; i<6; i++){
  		archivoprueba<<arr[i];
  	}
    
	
}
void archivosOrd(int arr[], int t){
	
	ofstream archivoprueba;
  	string nombrearchivo;
  
  	getline(cin,nombrearchivo);
  	archivoprueba.open("ordenamiento.txt",ios::out);
  	archivoprueba<<"Arreglo en orden: ";	
  	for(int i=0; i<t; i++){
  		archivoprueba<<arr[i];
  	}
  }
