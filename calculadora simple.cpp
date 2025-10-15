#include <iostream>
#include <math.h>
#include <cstdlib>

using namespace std;
int main (){
	
	int pin,kel,num=0, lvl=0;
	float nom=0, wi=0,nam=0,ram=0,rt=0;
	long double sun;
	
	
	
 cout<<"\tBienvenido a la calculadora limitada"<<endl;
	
	cout<<"\nLas opciones disponibles son las siguientes."<<endl;
	
	cout<<"\n1.Sacar la raiz cuadrada de un numero"<<endl;
	cout<<"\n2.Sacar la raiz cubica de un numero"<<endl;
	cout<<"\n3.Sacar la potencia de un numero"<<endl;
	cout<<"\n4.Sacar una suma"<<endl;
	cout<<"\n5.Sacar una resta"<<endl;
	cout<<"\n6.Sacar una multiplicacion"<<endl;
	cout<<"\n7.Sacar una division"<<endl;
	cout<<"\n8.Que numero es par o impar, saber si es positivo o negativo"<<endl;
	cout<<"\n9.Saber si un numero es mayor o menor"<<endl;
	cout<<"\n10.Se equivoco y desea salir del programa."<<endl;
	cout<<"\nIntroduzca su opcion: "; cin>>pin;
	
	
	
	
	switch (pin) {
		case 1: cout<<"\nIntroduzca el numero el cual quiera saber la raiz cuadrada: ";cin>>nom;
	wi=sqrt(nom);
	cout<<"La raiz cuadrada del numero introducido es: "<<wi<<endl;break;
	
	case 2: cout<<"\nIntroduzca el numero el cual quiera saber la raiz cubica: ";cin>>nom;
	wi=cbrt(nom);
	cout<<"La raiz cubica del numero introducido es: "<<wi<<endl;break;
	
	case 3: cout<<"\nIntroduzca el numero: ";cin>>nom;
	cout<<"Introduzca a cuanto esta elevado: ";cin>>lvl;
	wi=pow(nom,lvl);
	cout<<"\nLa potencia es igual a: "<<wi<<endl;break;
	
	case 4: cout<<"\tSE ACEPTA UN MAXIMO DE CUATRO NUMEROS PARA SUMAR"<<endl;
	cout<<"\n¿Cuantos numeros va a sumar?: ";cin>>kel;
	if (kel==2){
		cout<<"\nPrimer numero: ";cin>>nam;cout<<"Segundo numero: ";cin>>ram;
		sun=nam+ram;
		cout<<"El resultado es: "<<sun<<endl;break;
	}
	else if (kel==3){
		cout<<"\nPrimer numero: ";cin>>nam;cout<<"Segundo numero: ";cin>>ram;cout<<"Tercer numero: ";cin>>rt;
		sun=nam+ram+rt;
		cout<<"El resultado es: "<<sun<<endl;break;
	}
	else if (kel==4){
		cout<<"\nPrimer numero: ";cin>>nam;cout<<"Segundo numero: ";cin>>ram;cout<<"Tercer numero: ";cin>>rt;cout<<"Cuarto numero: ";cin>>wi;
		sun=nam+ram+rt+wi;
		cout<<"El resultado es: "<<sun<<endl;break;
	}
	else{
		cout<<"\nNo se puede computar la opcion"<<endl;break;
	}
	
	case 5: cout<<"\tSE ACEPTA UN MAXIMO DE CUATRO NUMEROS PARA RESTAR"<<endl;
	cout<<"\n¿Cuantos numeros va a restar?: ";cin>>kel;
	if (kel==2){
		cout<<"\nPrimer numero: ";cin>>nam;cout<<"Segundo numero: ";cin>>ram;
		sun=nam-ram;
		cout<<"El resultado es: "<<sun<<endl;break;
	}
	else if (kel==3){
		cout<<"\nPrimer numero: ";cin>>nam;cout<<"Segundo numero: ";cin>>ram;cout<<"Tercer numero: ";cin>>rt;
		sun=nam-ram-rt;
		cout<<"El resultado es: "<<sun<<endl;break;
	}
	else if (kel==4){
		cout<<"\nPrimer numero: ";cin>>nam;cout<<"Segundo numero: ";cin>>ram;cout<<"Tercer numero: ";cin>>rt;cout<<"Cuarto numero: ";cin>>wi;
		sun=nam-ram-rt-wi;
		cout<<"El resultado es: "<<sun<<endl;break;
	}
	else{
		cout<<"\nNo se puede computar la opcion"<<endl;break;
	}
	case 6: cout<<"\tSE ACEPTA UN MAXIMO DE CUATRO NUMEROS PARA MULTIPLICAR"<<endl;
	cout<<"\n¿Cuantos numeros va a multiplicar?: ";cin>>kel;
	if (kel==2){
		cout<<"\nPrimer numero: ";cin>>nam;cout<<"Segundo numero: ";cin>>ram;
		sun=nam*ram;
		cout<<"El resultado es: "<<sun<<endl;break;
	}
	else if (kel==3){
		cout<<"\nPrimer numero: ";cin>>nam;cout<<"Segundo numero: ";cin>>ram;cout<<"Tercer numero: ";cin>>rt;
		sun=nam*ram*rt;
		cout<<"El resultado es: "<<sun<<endl;break;
	}
	else if (kel==4){
		cout<<"\nPrimer numero: ";cin>>nam;cout<<"Segundo numero: ";cin>>ram;cout<<"Tercer numero: ";cin>>rt;cout<<"Cuarto numero: ";cin>>wi;
		sun=nam*ram*rt*wi;
		cout<<"El resultado es: "<<sun<<endl;break;
	}
	else{
		cout<<"\nNo se puede computar la opcion"<<endl;break;
	}
	case 7: cout<<"\tIntroduzca los numeros que quiere dividir";
	cout<<"\nDividendo: ";cin>>nam;
	cout<<"\nDivisor: ";cin>>ram;
	wi=nam/ram;
	cout<<"\nEl resultado es: "<<wi<<endl;break;
	
	case 8: cout<<"\nIntroduzca el numero el cual desea saber si es par o impar y si es + o -: ";cin>>num;
    if (num%2==0&&num>=0){
		cout<<"\nEl numero es par y positivo"<<endl;break;
	}
	else if (num%2==0&&num<0) {
	cout<<"\nEl numero es par y negativo"<<endl;break;
	}
	else if (num<0){
		cout<<"\nEl numero es impar y negativo"<<endl;break;
	}
	else {
		cout<<"\nEl numero es impar y positivo"<<endl;break;
	}
	
	case 9: cout<<"\tIntroduzca los numeros";
		cout<<"\nPrimer numero: ";cin>>nam;cout<<"Segundo numero: ";cin>>ram;
		if (nam>ram){
			cout<<"El numero "<<nam<<" es mayor que "<<ram<<endl;break;
} else {
	cout<<"\nEl numero "<<ram<<" es mayor que "<<nam<<endl;break;
}
	
	case 10:  cout<<"Presione cualquier tecla hasta que salga de la aplicacion"<<endl;break;
	
	}
			
	system("PAUSE");
	return 0;
}
