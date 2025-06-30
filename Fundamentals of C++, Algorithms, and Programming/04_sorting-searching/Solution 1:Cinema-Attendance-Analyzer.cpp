#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
//** Valores Iniciales
#define fil 9
#define col 6
typedef int matriz[fil][col];
typedef int vector[fil];
//** Variables
matriz M;
//Generador de datos aleatorios para matriz
void Cargamatriz(matriz m, int r, int c)
{
	srand(time(NULL));
	for (int i=0; i<r-1; i++)
		for (int j=0; j<c-1; j++)
			m[i][j]=rand()%50+11;
}
//Despliegue por pantalla de Matriz
void Imprimematriz(matriz m, int r, int c, char name)
{
	for (int i=0; i<r; i++)
	{
		for (int j=0; j<c; j++)
			cout<<name<<"["<<i<<"]["<<j<<"] = "<<m[i][j]<<" ";
		cout<<"\n";
	}
}
// 1. Genere la funciC3n TotalPorPelicula(M), que deja la C:ltima Columna la suma de
espectadores por pelC-cula, contenido en las matriz M
void TotalPorPelicula(matriz M)
{
	int suma = 0;
	for (int i = 0; i < fil - 1; i++)
	{
		suma = 0; // Reset suma for each row
		for (int j = 0; j < col - 1; j++)
			suma += M[i][j];
		M[i][col - 1] = suma; // Store the sum in the last column
	}
}
// 2. Genere la funciC3n TotalPorSala(M), que deja la C:ltima Fila la suma de
espectadores por Sala, contenido en las matriz M
void TotalPorSala(matriz M)
{
	int suma = 0;
	for (int j = 0; j < col - 1; j++)
	{
		suma = 0;
		for (int i = 0; i < fil - 1; i++)
			suma += M[i][j];
		M[fil - 1][j] = suma;
	}
}
// 3. Genere la funciC3n TotalGeneral(M), que deja en la posiciC3n [8][5] el total
general de espectadores que asisten a la cadena de cines
void TotalGeneral(matriz M)
{
	int suma = 0;
	for (int i = 0; i < fil - 1; i++)
		suma += M[i][col - 1];
	M[fil - 1][col - 1] = suma;
}
//4. Ordene la matriz segC:n ranking de espectadores por pelC-culas en orden
descendente, para ello usted dispone de una funciC3n SwapFila(M, i, j),
// que intercambia toda la Fila i por la Fila j, de la matriz M
             void SwapFila(matriz m, int i, int j)
{
	vector v;
	for (int c=0; c<col; c++) //aux
		v[c]=m[i][c];
	for (int c=0; c<col; c++) //i = j
		m[i][c]=m[j][c];
	for (int c=0; c<col; c++) //j = aux
		m[j][c]=v[c];
}
void OrdenaMatriz(matriz m)
{
	int menor = 0;
	for (int i = 0; i < fil - 2; i++)
	{
		menor = i;
		for (int j = i + 1; j < fil - 1; j++)
			if (m[menor][col - 1] < m[j][col - 1])
				menor = j;
		if (i != menor)
			SwapFila(m, i, menor);
	}
}
// 5. Genere la funciC3n Top3(M), que retorna el total de espectadores de las tres
pelC-culas mC!s vistas
int Top3(const matriz M)
{
	return M[0][col-1] + M[1][col-1] + M[2][col-1];
}
// 6. Genere la funciC3n MayorAsistencia(M, C, P), que retorna la combinaciC3n C
(Cine) y P (pelC-cula), con mayor asistencia
void MayorAsistencia(const matriz m, int &C, int &P)
{
	C = 0;
	P = 0;
	int mayor = m[0][0];
	for (int i = 0; i < fil - 1; i++)
		for (int j = 0; j < col - 1; j++)
			if (m[i][j] > mayor)
			{
				mayor = m[i][j];
				C = j;
				P = i;
			}
}
// 7. Genere la funciC3n MayorCine(M), que retorna el cine con mayor asistencia
int MayorCine(const matriz m)
{
	int mayor = m[fil - 1][0];
	int i = 0;
	for (int j = 0; j < col - 1; j++)
		if (m[fil - 1][j] > mayor)
		{
			mayor = m[fil - 1][j];
			i = j;
		}
	return i;
}
// 8. Genere la funciC3n Cambio(M), que retorna la PelC-cula menos vista, del cine
con mayor asistencia (use funciC3n anterior)
int Cambio(const matriz m)
{
	int j = MayorCine(m);
	int menor = m[0][j];
	int k = 0;
	for (int i = 0; i < fil - 1; i++)
		if (m[i][j] < menor)
		{
			menor = m[i][j];
			k = i;
		}
	return k;
}
int main()
{
	Cargamatriz(M,fil,col);
	Imprimematriz(M,fil,col,'M');
	cout<<"\n";
	TotalPorPelicula(M);
	TotalPorSala(M);
	TotalGeneral(M);
	Imprimematriz(M,fil,col,'M');
	OrdenaMatriz(M);
	Imprimematriz(M,fil,col,'M');
	cout << endl;
	cout << "El total de espectadores de las top 3 es: " << Top3(M) << endl;
	cout << endl;
	int pelicula = 0;
	int cine = 0;
	MayorAsistencia(M, cine, pelicula);
	cout << "La mayor asistencia fue para la pelicula " << pelicula << " en el Cine
	     " << cine << endl;
	     cout << endl;
	cout << "El cine con mas espectadores es el Cine " << MayorCine(M) << endl;
	cout << endl;
	cout << "La pelicula menos vista de ese cine, es la pelicula " << Cambio(M) <<
	     endl;
	cout << endl;
	return 0;
}
