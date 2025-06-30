#include <iostream>
using namespace std;
int a, b, c;
int cubo(int p1)
{
	return p1*p1*p1;
}
int cuadrado(int p1)
{
	return p1*p1;
}
int cubica(int param1, int param2, int param3)
{
	return cubo(param1)+cuadrado(param2)+param3;
}
int main()
{
	cout<< "Favor ingrese valor1: ";
	cin>> a;
	cout<< "Favor ingrese valor2: ";
	cin>> b;
	cout<< "Favor ingrese valor3: ";
	cin>> c;
	cout << "f(a3 + b2 +c)= " << cubica(a,b,c) <<endl;
	return 0;
}
