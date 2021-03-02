#include <iostream>
#include<fstream>
using namespace std;

int main() {
	float pa;
	string na;
	int a;
	ofstream promedioAl;
	promedioAl.open("Nombre y promedio de menor a mayor.txt", ios::out);
	cout<<"Cuantos alumnos hay en el aula"<<endl;
	cin>>a;
	promedioAl<<"En el aula hay "<<a<<" alumnos"<<endl;
	string n[a];
	float p[a];
	for(int i=0; i<a; i++){
		cout<<"Ingrese nombre del alumno "<< i+1<<" : ";
		cin>>n[i];
		cout<<"Ingrese el promedio "<< i+1<<" : ";
		cin>>p[i];
	}
	
	for(int i=0; i<a; i++){
		for(int j=0; j<a; j++){
			if(p[j]>p[i]){
				pa=p[i];
				na=n[i];
				p[i]=p[j];
				n[i]=n[j];
				p[j]=pa;
				n[j]=na;	
			}
			
		}
	}
	promedioAl<<"Lista de estudiantes con promedios de menor a mayor"<<endl;
	cout<<"Lista de estudiantes con promedios de menor a mayor"<<endl;
	
	for(int i=0; i<a; i++){
	
		cout<<n[i]<<" 	"<<p[i]<<endl;
		promedioAl<<n[i]<<" 	"<<p[i]<<endl;
	}
	
	promedioAl.close();
	
	
	
	
	
	
	
	return 0;
}
