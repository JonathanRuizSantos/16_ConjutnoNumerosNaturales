#include <iostream>

/*
Determinar en un conjunto de n números naturales:
¿ Cuántos son menores que 15 ?
¿ Cuántos son mayores que 50 ?
¿ Cuántos están en el rango entre 25 y 45 ?
*/

using namespace std;
int main(void){
	int num, cont = 0, dato, cont15 = 0, cont50 = 0, cont2545 = 0;
	
	cout<<"PROGRAMA QUE DETERMINA LOS CONJUNTOS DE N NUMEROS NATURALES"<<endl<<endl;
	cout<<"¿Cuantos numeros contiene el conjunto? R. ";
	cin>>num;
	
	do{
		cout<<cont+1<<". - Ingresa un numero entero: ";
		cin>>dato;
		
		if(dato < 15){
			cont15++;
		}
		if(dato >  50){
			cont50++;
		}
		if(dato >25 && dato <= 45){
			cont2545++;
		}
		
		cont++;
	}while(cont < num);
	
	cout<<endl;
	
	cout<<"Numeros menores a 15: "<<cont15<<endl;
	cout<<"Numeros mayores a 50: "<<cont50<<endl;	
	cout<<"Numeros entre 25 y 45: "<<cont2545<<endl;
	
	return 0;
}