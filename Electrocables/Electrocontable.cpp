#include <iostream>
using namespace std;




int main() {
	int puntoRed, punto, punto1,N;
	int aux=0, suma=0;
	int aux1=0, suma1=0;
	string lugarInst;	
	float total, porcentaje, a, porcentaje1, total2, b, c;

	cout<<"\t***EMPRESA ELECTROCABLES***"<<endl;
	cout<<"\tEste es un software contable"<<endl;
	cout<<"Ingrese el lugar de la instalacion"<<endl;
	cin>>lugarInst;
	
	cout<<"Ingrese el numero de puntos de red que van a ser instalados"<<endl;
	cin>>N;
	int puntos[N]={ };
	int conectores[N]={ };
	for(int i=1; i<=N; i++){
		punto++;
		cout<<"Punto de red #"<<punto<<endl;
		cout<<"Ingrese la distancia entre el conector del punto de red hasta el equipo de conectividad"<<endl;
		cin>>puntos[i];
		aux=puntos[i];
		suma=(aux + suma);
		cout<<"Ingrese el numero de conectores para el punto de red"<<endl;
		cin>>conectores[i];
		aux1=conectores[i];
		a=suma1*suma;
		suma1=aux1 + suma1;
		
		
	}
	porcentaje = (a * 5)/100;
	total=((a)*0.90);
	total2=(suma1*2)*0.50;
	porcentaje1 = (total2 * 15)/100;
	b=(total2+porcentaje1)+(total);
	c=(b*45)/100;
	cout<<"\tEl detalle de la instalacion es la siguiente"<<endl;
	cout<<"La distancia total del cable utilizado en la instalacion es: "<<(a + porcentaje)<<endl;
	cout<<"El costo del cable segun la categoria 5e es: "<<total<<endl;
	cout<<"Precio total de conectores RJ45 (hembre y macho )es: "<<total2+porcentaje1<<endl;
	cout<<"El total del material utilizado es: "<<b<<endl;
	cout<<"La ganacia  es: "<<c<<endl;
	cout<<"El total a pagar por su instalacion es: "<<c+b<<endl;
	cout<<"Gracias por su compra";
	return 0;
}



