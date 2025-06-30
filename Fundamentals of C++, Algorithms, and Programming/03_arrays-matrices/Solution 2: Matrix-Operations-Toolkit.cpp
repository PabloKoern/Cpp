#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
//** valores iniciales
#define fil 3
#define col 3
#define tope 2
typedef int matriz[fil][col];
matriz b;
//**funciones
void cargamatriz(matriz m, int r, int c)
{
	srand(time(NULL));
	for (int i = 0; i < r; i++) //** Traverse the fil
		for (int j = 0; j < c; j++) //** Traverse the columns
			m[i][j] = rand() % tope;
}
void imprimematriz(matriz m, int r, int c, char name)
{
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
			cout << name << "[" << i << "][" << j << "] = " << m[i][j] << " ";
		cout << endl;
	}
}
//***********
bool MTSuperiorDerecha(matriz m, int r, int c)
{
	bool result = true; //Supuesto que SI es
	for (int i = 0; i < r; i++)
		for (int j = 0; j < i; j++)
			if (m[i][j] != 0)
				result = false;
	return result;
}
//***********
bool MTInferiorDerecha(matriz m, int r, int c)
{
	bool result = true; //Supuesto que SI es
	for (int i = 0; i < r; i++)
		for (int j = 0; j < c - i - 1; j++)
			if (m[i][j] != 0)
				result = false;
	return result;
}
//***********
void cargaidentidad(matriz m, int r, int c)
{
	for (int i = 0; i < r; i++) //** Recorre filas
		for (int j = 0; j < c; j++) //** Recorre las columnas
			if (i == j)
				m[i][j] = 1;
			else
				m[i][j] = 0;
}
bool MIdentidad(matriz m, int r, int c)
{
	bool result = true; //Supuesto que SI es
	for (int i = 0; i < r; i++)
		for (int j = 0; j < c; j++)
			if (i == j)
			{
				if (m[i][i] != 1)
					result = false;
			}
			else if (m[i][j] != 0)
				result = false;
	return result;
}
//***********
int main()
{
// initialize matriz
	cargamatriz(b, fil, col);
	imprimematriz(b, fil, col, 'b');
	cout <<endl;
//*************************************************************
	if (MTSuperiorDerecha(b, fil, col) )
		cout << "La Matriz es Triangular Superior Derecha"<<endl;
	else
		cout << "La Matriz NO es Triangular Superior Derecha"<<endl;
//*************************************************************
	if (MTInferiorDerecha(b, fil, col) )
		cout << "La Matriz es Triangular Inferior Derecha"<<endl;
	else
		cout << "La Matriz NO es Triangular Inferior Derecha"<<endl;
//*************************************************************
	if (MIdentidad(b, fil, col) )
		cout << "La Matriz es Identidad"<<endl;
	else
		cout << "La Matriz NO es Identidad"<<endl;
//*************************************************************
	cout <<endl;
	cargaidentidad(b, fil, col);
	imprimematriz(b, fil, col, 'b');
	if (MIdentidad(b, fil, col) )
		cout << "La Matriz es Identidad"<<endl;
	else
		cout << "La Matriz NO es Identidad"<<endl;
	return 0;
}
