#include <iostream>
#include <cstring>
using namespace std;
#include <ctime>
#define largo 30
#define alumnos 3
typedef char cadena[largo];
typedef struct {
	cadena nombre;
	cadena apellido;
	int nota1;
	int nota2;
	int nota3;
	float promedio;
} registro;
typedef registro vector[alumnos];
vector curso;
//crea notas aleatorias
int creanota()
{
	int nota=0;
	do
	{
		nota= rand()%100;
	}
	while (nota<10 || nota>70);
	return nota;
}
//1. Implemente funciC3n LlenaCurso(v), que carga el vector v con los datos de los
alumnos.
void LlenaCurso (vector v)
{
	registro r;
	int suma=0;
	for (int i=0; i<alumnos; i++)
	{
		cout <<"Nombre: ";
		cin.getline(r.nombre, largo);
		cout <<"Apellido: ";
		cin.getline(r.apellido, largo);
		r.nota1=creanota();
		r.nota2=creanota();
		r.nota3=creanota();
//cin.ignore();
		suma=(r.nota1+r.nota2+r.nota3);
		r.promedio = (float)suma/3;
		v[i]=r;
	}
}
//2. Implemente funciC3n imprimeCurso(v), que muestra en pantalla los n registros
del vector v.
void Imprime(vector v)
{
	for (int i=0; i<alumnos; i++)
	{
		cout << i+1 << ") " ;
		cout <<"Nombre: " << v[i].nombre<<" ";
		cout << v[i].apellido<<" ";
		cout <<"Nota 1: " << v[i].nota1<<" ";
		cout <<"Nota 2: " << v[i].nota2<<" ";
		cout <<"Nota 3: " << v[i].nota3<<" ";
		cout <<"Promedio: " << v[i].promedio<<" "<<endl;
	}
}
void copiaRegistro(int i, vector v1, int j, vector v2)
{
//v1[i]=v2[j];
	strcpy(v1[i].nombre,v2[j].nombre);
	strcpy(v1[i].apellido,v2[j].apellido);
	v1[i].nota1=v2[j].nota1;
	v1[i].nota2=v2[j].nota2;
	v1[i].nota3=v2[j].nota3;
	v1[i].promedio=v2[j].promedio;
}
void ordenar_x_Nota(vector v)
{
	int i, j, menor;
	registro aux;
	for (i = 0; i < alumnos- 1; i++)
	{
		menor = i;
		for (j = i + 1; j < alumnos; j++)
			if (v[menor].promedio > v[j].promedio)
				menor = j;
		if (i != menor)
		{
			aux = v[menor];
			v[menor] = v[i];
			v[i] = aux;
		}
	}
}
void ordenar_x_ape(vector v)
{
	int i, j, menor;
	registro aux;
	for (i = 0; i < alumnos- 1; i++)
	{
		menor = i;
		for (j = i + 1; j < alumnos; j++)
			if (strcmp(v[menor].apellido,v[j].apellido)>1)
				menor = j;
		if (i != menor)
		{
			aux = v[menor];
			v[menor] = v[i];
			v[i] = aux;
		}
	}
}
int mayor_nota1(vector v)
{
	int mayor=v[0].nota1;
	for (int i=0; i<alumnos; i++)
		if (v[i].nota1>mayor)
			mayor= v[i].nota1;
	return mayor;
}
float promedioGeneral(vector v)
{
	float suma=0;
	for (int i=0; i<alumnos; i++)
		suma=suma + v[i].promedio;
	return suma/alumnos;
}
int main()
{
	LlenaCurso(curso);
	Imprime(curso);
	cout<<endl;
	ordenar_x_Nota(curso);
	Imprime(curso);
	cout<<endl;
	ordenar_x_ape(curso);
	Imprime(curso);
	cout<<endl;
	cout<<"La mejor nota 1 es: "<<mayor_nota1(curso)<<endl;
	cout<<"El promedio general es: "<<promedioGeneral(curso)<<endl;
	return 0;
}
