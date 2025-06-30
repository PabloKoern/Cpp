#include <iostream>
#include <cstdlib>
using namespace std;
bool esPrimo(int n)
{
	bool result=true;
	int divisor=2;
	while (divisor<n)
	{
		if (n % divisor ==0)
			result=false;
		divisor++;
	}
	return result;
}
void primos(int n)
{
	int i=1, cont=0;
	while (cont<n)
	{
		if (esPrimo(i))
		{
			cout << i << ", ";
			cont++;
		}
		i++;
	}
	cout << endl << endl;
}
int maximoPrimo(int n)
{
	int result=0;
	int i=2;
	while (i<=n)
	{
		if (esPrimo(i))
			result=i;
		i++;
	}
	return result;
}
int cantidadDigitos(int n)
{
	int result=1;
	while (n>9)
	{
		n=n/10;
		result++;
	}
	return result;
}
void divisores(int n)
{
	int i=1;
	do
	{
		if (n%i==0)
			cout << i << ", ";
		i++;
	} while (i<=10);
	cout << endl << endl;
}
void promedio()
{
	int i=1;
	int valor=0, suma=0;
	do
	{
		cout << "Ingrese valor " << i << ": ";
		cin >> valor;
		suma +=valor;
		i++;
	} while (i<=10);
	cout << "el promedio es " << static_cast<float>(suma)/10 << endl << endl;
}
int potencia(int a, int b)
{
	int result =a, i=1;
	do
	{
		result=result*a;
		i++;
	} while (i<b);
	return result;
}
void fibonacci (int n)
{
	int i=1, a=0, b=1, c=0;;
	do
	{
		c=a+b;
		cout << c << ", ";
		a=b;
		b=c;
		i++;
	} while (i<n);
}
int main()
{
	int valor=0;
	do
	{
		cout << "Ingrese valor positivo: ";
		cin >> valor;
		if (valor<0)
			cout << "El numero debe ser positivo" << endl;
		else if (esPrimo(valor))
			cout << "El numero " << valor << " ES primo" << endl;
		else
			cout << "El numero " << valor << " NO es primo" << endl;
	}
	while (valor<0);
	primos(valor);
	cout << "El maximo primo entre 1 y 100 es: " << maximoPrimo(100) << endl;
	cout << "1000 tiene " << cantidadDigitos(1000) << " digitos" << endl;
	cout << "Los divisores de " <<valor<<" son:" << endl;
	divisores(valor);
	promedio();
	cout << "3 elevado a 4 es:" << potencia(3,4) << endl;
	cout << "Fibonacci " << endl;
	fibonacci(valor);
	return 0;
}
