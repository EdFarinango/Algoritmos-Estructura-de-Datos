#include <iostream>
#include <fstream>
using namespace std;

void escribirArchivo();
void leerArchivo();
int main()

{
	
    escribirArchivo();
    cin.ignore();
    leerArchivo();
    return 0;
}


void escribirArchivo()
{
  string nombre = "*";
  string apellido;
  int edad;
  char r;
  ofstream archivoprueba;
  string nombrearchivo;
  
  cout<<"Ingrese el nombre del archivo: ";
  getline(cin,nombrearchivo);
  archivoprueba.open(nombrearchivo.c_str(),ios::out);
  do
  {
    int lineas;
    cout<<"Ingresa la cantidad de líneas para el triángulo: ";
    cin>>lineas;
    
    for (int i = lineas; i >= 1; i--)
    {
       
        
        for (int j = 0; j < i; j++)
        {
        	if(i%2==0){
        	
        	cout<<"*";
        	
     
    
		}else{
			cout<<"-";
			
		}
            
        }
        cout<<endl;
    }
    getline(cin,nombre); 
    getline(cin,apellido);
    archivoprueba<<nombre<<endl<<apellido<<endl<<edad<<endl;
    cout<<"Desea ingresar otro valor s/n ";

    cin>>r;

    cin.ignore();
  }
  while(r=='s'|| r=='S');

  archivoprueba.close();

}
void leerArchivo()
{
  string nombre;
  string apellido;
  int edad;
  
  ifstream archivolectura("Uno.txt");
  string texto;
  while(!archivolectura.eof())
    {
      archivolectura>>nombre>>apellido>>edad;

      if(!archivolectura.eof())
            {
              cout<<"Nombre:"<<nombre<<endl;
              cout<<"Apellido:"<<apellido<<endl;
              cout<<"Edad:"<<edad<<endl;
            }
    }
  archivolectura.close();

}
