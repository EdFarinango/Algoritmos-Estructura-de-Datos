#include <iostream>
#include <fstream>
using namespace std;



void escribirArchivo();
void leerArchivo();
void cabecera ();
void menu ();

int main() 
{
	char letra1;
	do{
	cabecera ();
    menu ();
    
    cout<< "\n Desea continuar en el programa" <<endl;
      
        cout << "[S/N]" <<endl;
       
        cin>>letra1;
        
   }while(letra1=='S' || letra1== 's');
    if (letra1=='N'|| letra1=='n'){
    cout<< "Buen dia" <<endl;
    }else{
        
    }
	
				
				
				
				
				
	  	
	  	
	  	
	  	
	}
		
	
	
	  
	  
	
	


void escribirArchivo()
{
  string nombre;
  string apellido;
  int edad;
  char r;
  ofstream archivoprueba;
  string nombrearchivo;
  cin.ignore();
  cout<<"Ingrese el nombre del archivo: ";
  getline(cin,nombrearchivo);
  archivoprueba.open(nombrearchivo.c_str(),ios::out);
  do
  {
    cout<<"\t Ingrese el nombre:";
    getline(cin,nombre); 
    cout<<"\t Ingrese el apellido:";
    getline(cin,apellido); 
    cout<<"\t Ingrese la edad:";
    cin>>edad;

    archivoprueba<<nombre<<" "<<apellido<<" "<<edad<<endl;

    cout<<"Desea ingresar otro contacto s/n ";

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
  
  ifstream archivolectura("libreta.txt");
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

void cabecera (){
    cout<< "\tAlgoritmos y Estrcturada de Datos \n" <<endl;
    cout<< "1.-Ingresar Datos" << std::endl;
    cout<< "2.- MOstrar Datos" <<endl;
    //cout<< "3.- SALIR" <<endl;
}

void menu(){
    int opcion;
    cout << "Ingrese el numero de su opcion: ";
    
    cin>>opcion;
    switch(opcion){
        case 1:
            cout << "\t Ingreso de Datos\n" <<endl;
            
			escribirArchivo();            
            break;
        case 2:
        	cout << "********************************" <<endl;
        	leerArchivo();
            break;
                
        default:
            std::cout << "La opcion lo existe" << std::endl;
            break;
    }
}
