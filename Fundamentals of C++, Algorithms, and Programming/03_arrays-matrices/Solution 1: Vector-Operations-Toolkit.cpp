#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
typedef int vector[5];
vector a, b, suma;
//1. inicializaVector(v, n), that initializes the values of a Vector to 0 of length
n.
void inicializavector(vector v, int n)
{
	for (int i = 0; i < n; i++)
		v[i] = 0;
}
void inicializavectorRandom(vector v, int n)
{
	srand(time(NULL));
	for (int i = 0; i < n; i++)
		v[i] = rand() % 5 + 1;
}
//2. llenarVectorSerie(v, s, n), that fills the vector v of length n,
//with data incremented according to a fixed series s.
void llenarvectorserie(vector v, int s, int n)
{
	int serie = s;
	for (int i = 0; i < n; i++)
	{
		v[i] = serie;
		serie += s;
	}
}
//3. invierteVector(v1, v2, n), that completes a second vector v2 with the data of
the first v1,
//both of length n, but in reverse order.
    void inviertevector(vector v1, vector v2, int n)
{
	int j = 0;
	for (int i = n - 1; i >= 0; i--)
	{
		v2[i] = v1[j];
		j++;
	}
}
//4. imprimeVector(v, n), that prints the contents of a vector v of length n
void imprimevector(vector v, int n, char nombre)
{
	for (int i = 0; i < n; i++)
		cout << nombre << "[" << i << "] = " << v[i] << endl;
}
int main()
{
	int largo = 5;
	for (int i = 0; i < largo; i++)
	{
		cout << "Enter a[" << i << "]: ";
		cin >> a[i];
	}
	llenarvectorserie(a, 3, largo);
	cout << "-----------------------------" << endl;
	imprimevector(a, largo, 'a');
	cout << "-----------------------------" << endl;
	inicializavectorRandom(a, largo);
	imprimevector(a, largo, 'a');
	llenarvectorserie(a, 3, largo);
	cout << "-----------------------------" << endl;
	imprimevector(a, largo, 'a');
	inviertevector(a, b, largo);
	cout << "-----------------------------" << endl;
	imprimevector(b, largo, 'b');
	cout << "-----------------------------" << endl;
	inicializavectorRandom(a, largo);
	imprimevector(a, largo, 'a');
	return 0;
}
