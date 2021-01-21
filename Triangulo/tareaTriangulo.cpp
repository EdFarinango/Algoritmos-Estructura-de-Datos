//Eduardo Farinango GR3 TSDS-AYED

#include <iostream>
using namespace std;


int main() {
	float ladoUno, ladoDos, ladoTres;
	float catUno, catDos, catTres, hipoT;
	float areaTriangulo;
	
	cout<<"Ingrese el Lado 1 del triangulo: ";
	cin>>ladoUno;
	cout<<"Ingrese el Lado 2 del triangulo: ";
	cin>>ladoDos;
	cout<<"Ingrese el Lado 3 del triangulo: ";
	cin>>ladoTres;
	
	if(ladoUno>ladoDos){
		catUno=ladoDos;
		if(ladoUno>ladoTres){
			hipoT=ladoUno;
            catDos=ladoTres;
		}else{
			hipoT=ladoTres;
            catDos=ladoUno;
		}
	}else{
		catUno=ladoUno;
		if(ladoDos>ladoTres){
			hipoT=ladoDos;
			catDos=ladoTres;
		}else{
			hipoT=ladoTres;
			catDos=ladoDos;
		}
	}
	
	if(hipoT*hipoT == catUno*catUno+catDos*catDos){
		areaTriangulo=(catUno*catDos)/2;
        cout<<"El area es: "<<areaTriangulo<<endl;
		
	}else{
		cout<<"No es un triangulo rectangulo."<<endl;
		
	}     
    	
	return 0;
}
