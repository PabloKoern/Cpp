#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	char nombre[30];
	char apellido[30]; // DefiniciC3n de cadenas
	char completo[60];
	char copianombre[30]; // DefiniciC3n de cadenas
	cout << "Ingrese nombre : ";
	cin.getline(nombre,30);
	cout << "Ingrese apellido : ";
	cin.getline(apellido,30);
	strcpy(completo, "");
	strcat(completo,nombre);
	strcat(completo," ");
	strcat(completo,apellido);
	strcpy(copianombre, nombre);
	cout << "Nombre : " << nombre << endl;
	cout << "Apellido : " << apellido << endl;
	cout << "Nombre Completo : " << completo << endl;
	cout << "Largo del Nombre Completo : " << strlen(completo) << endl;
	if(strcmp(nombre,apellido)==0)
		cout << "son iguales" << endl;
	else
		cout << "no son iguales" << endl;
	strcpy(copianombre, nombre);
	if(strcmp(nombre,copianombre)==0)
		cout << "son iguales" << endl;
	else
		cout << "no son iguales" << endl;
// Acceso a un carC!cter especC-fico
	cout << "Primer carC!cter: " << completo[0] << endl;
	for(int i=0; i< strlen(completo); i++)
		cout << completo[i] << endl;
	return 0;
}
