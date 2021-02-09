#include <iostream>
#include <fstream>
using namespace std;

void leerArchivo();
void escribirArchivo();

int main() {
	/*int kilos, tamanio;
	char tipo;
	float total, precio;
	
	cout<<"Ingresa los kilos de uvas: ";
	cin>>kilos;
	cout<<"Ingresa el precio por kilo: ";
	cin>>precio;
	cout<<"Ingresa el tipo de uva: A o B: ";
	cin>>tipo;
	cout<<"Ingresa el tamanio de la uva 1 o 2: ";
	cin>>tamanio;
	
	if(tipo=='A'|tipo=='a'){
		if(tamanio ==1){
			precio = precio + 0.20;			
		}else{
			precio = precio + 0.30;
		}
	}else{
		if(tamanio == 1){
			precio = precio - 0.30;
		}else{
			precio = precio - 0.50;	
		}
	}
	total = precio * kilos;
	cout<<"La ganancia por "<<kilos<<" kilos de uva es: $"<<total<<endl;	
	*/
	
	escribirArchivo();
	leerArchivo();
	

return 0;
}


void escribirArchivo()
{
  string nombre;
  
  int edad;
  char r;
  int kilos, tamanio;
	char tipo;
	float total, precio;
  ofstream archivoprueba;
  string nombrearchivo;
  //cin.ignore();
  cout<<"Ingrese el nombre del archivo: ";
  getline(cin,nombrearchivo);
  archivoprueba.open(nombrearchivo.c_str(),ios::out);
  do
  {
    
	
	cout<<"Ingresa los kilos de uvas: ";
	cin>>kilos;
	cout<<"Ingresa el precio por kilo: ";
	cin>>precio;
	cout<<"Ingresa el tipo de uva: A o B: ";
	cin>>tipo;
	cout<<"Ingresa el tamanio de la uva 1 o 2: ";
	cin>>tamanio;
	if(tipo=='A'|tipo=='a'){
		if(tamanio ==1){
			precio = precio + 0.20;			
		}else{
			precio = precio + 0.30;
		}
	}else{
		if(tamanio == 1){
			precio = precio - 0.30;
		}else{
			precio = precio - 0.50;	
		}
	}
	total = precio * kilos;
	archivoprueba<<"La ganancia por "<<kilos<<" kilos de uva es: $"<<total<<endl;

    

    cout<<"Desea ingresar otros valores s/n ";

    cin>>r;

    cin.ignore();
  }
  while(r=='s'|| r=='S');

  archivoprueba.close();

}
void leerArchivo()
{
  
  
  int edad;
  int kilos;
	char tipo;
	float total, precio;
  
  ifstream archivolectura("Uvas.txt");
    while(!archivolectura.eof())
    {
      archivolectura>>kilos>>total;
      
      if(!archivolectura.eof())
            {
              cout<<"Ganacia por:"<<kilos<<endl;
              cout<<"Es de un valor de :"<<total<<endl;
              
            }
    }
  archivolectura.close();

}

