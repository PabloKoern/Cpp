#include <iostream>
#include <iomanip>
using namespace std;
float nota1, nota2, nota3, nfinal;
float promedio(float n1, float n2, float n3)
{
	float prom = 0;
	prom = (n1+n2+n3)/3;
	return prom;
}
int main()
{
	cout<< "Favor ingrese nota1: ";
	cin>> nota1;
	cout<< "Favor ingrese nota2: ";
	cin>> nota2;
	cout<< "Favor ingrese nota3: ";
	cin>> nota3;
	nfinal = promedio(nota1,nota2,nota3);
	cout << fixed;
	cout << setprecision(2);
	cout << "El promedio es: " << nfinal <<endl;
	return 0;
}

