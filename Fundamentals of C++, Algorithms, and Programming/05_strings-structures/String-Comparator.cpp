#include <iostream>
#include <cstring>
using namespace std;
#define largo 30
typedef char cadena[largo];
void compara(cadena n1, cadena n2)
{
	if(strcmp(n1,n2)>0)
		cout << "N1 Mayor" << endl;
	else if(strcmp(n1,n2)<0)
		cout << "N1 Menor" << endl;
	else
		cout << "son iguales" << endl;
}
int main()
{
	cadena nombre1;
	cadena nombre2;
	cout << "Ingrese nombre 1: ";
	cin.getline(nombre1,largo);
	cout << "Ingrese apellido 2: ";
	cin.getline(nombre2,largo);
	cout <<endl<< nombre1<<" / " << nombre2 <<endl;
	compara(nombre1, nombre2);
	cout <<endl<< nombre2<<" / " << nombre1 <<endl;
	compara(nombre2, nombre1);
	cout <<endl<< nombre1<<" / " << nombre1 <<endl;
	compara(nombre1, nombre1);
	return 0;
}
