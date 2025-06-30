#include <iostream>
#include <vector>
using namespace std;
//1. Escriba un programa que pida un nC:mero n entero positivo e imprima los nC:meros
pares
//entre 1 y n
void ImprimirPares1(int n) {
	for (int i = 2; i <= n; i += 2)
		cout << i << endl;
}
void ImprimirPares2(int n) {
	for (int i = 1; i <= n; i++)
		if (i % 2 == 0)
			cout << i << endl;
}
//2. Escriba un programa que pida dos nC:meros enteros e imprima los nC:meros impares
//entre desde el primero hasta el segundo
void Impares(int a, int b) {
	for (int i = a; i <= b; i++)
		if (i % 2 == 1)
			cout << i << endl;
}
//3. Escriba un programa que pida un nC:mero entero mayor que cero e imprima sus
divisores.
void Imprimirdivisores(int n) {
	for (int i = 1; i <= n; i++)
		if (n % i == 0)
			cout << i << endl;
}
//4. Escriba un programa que pregunte cuC!ntos nC:meros desea ingresar, luego pida
esos nC:meros
// e indique al final cuC!ntos han sido pares y cuC!ntos impares.
void numerospares(int n) {
	int impar = 0;
	int par = 0;
	int num;
	for (int contador = 1; contador <= n; contador++) {
		num = 0;
		cout << "Ingrese un numero: ";
		cin >> num;
		if (num % 2 == 0)
			par++;
		else if (num % 2 == 1)
			impar++;
	}
	cout << "\n La cantidad de pares fue: " << par;
	cout << "\n La cantidad de impares fue: " << impar;
}
//5. Escriba un programa que pida un nC:mero entero mayor que cero y calcule su
factorial.
int factorial(int n) {
	int result = 1;
	for (int i = 1; i <= n; i++)
		result = result * i;
	return result;
}
//6. Sumar todos los enteros pares entre 10 y 100
int sumaPares(int Desde, int Hasta) {
	int result = 0;
	for (int i = Desde; i <= Hasta; i += 2)
		result = result + i;
	return result;
}
//7. Imprima la tabla de multiplicar (de 1 a 12) para un nC:mero n
void tabla(int n) {
	cout << "Table del " << n << endl;
	for (int i = 1; i <= 12; i++)
		cout << n << " * " << i << " = " << n * i << endl;
}
//8. Imprima una cuenta regresiva comenzando en 10
void regresiva(int desde, int incremento) {
	for (int i = desde; i >= 0; i -= incremento)
		cout << i << endl;
}
//9. Imprima el valor de la UF para los prC3ximos 30 dC-as, considerando valor
inicial
// $28.000,00 y un incremento diario de $2,5
void ImprimirUF(float inicial, float incremento) {
	float UF = inicial;
	for (int i = 1; i <= 30; i++) {
		cout << "Valor UF dia " << i << "= " << UF << endl;
		UF = UF + incremento;
	}
}
//10. Escribir un programa que calcule la suma de los cuadrados de los 100
// primeros nC:meros enteros.
int sumaCuadrado(int Desde, int Hasta) {
	int resultado = 0;
	for (int i = Desde; i <= Hasta; i++) {
		int cuadrado = i * i;
		resultado = resultado + cuadrado;
	}
	return resultado;
}
int main() {
	int numero1 = 0;
	int numero2 = 0;
	cout << "Ingrese un numero: ";
	cin >> numero1;
	ImprimirPares1(numero1);
	cout << "\n";
	ImprimirPares2(numero1);
	cout << "\n";
	cout << "Ingrese un numero (1): ";
	cin >> numero1;
	cout << "Ingrese un numero (2): ";
	cin >> numero2;
	Impares(numero1, numero2);
	cout << "\n";
	cout << "Los divisores de " << numero2 << " son:\n";
	Imprimirdivisores(numero2);
	cout << "\nCantidad de pares e impares\n";
	numerospares(numero1);
	cout << "\n\n";
	int numero3 = factorial(numero1);
	cout << "El factorial de " << numero1 << " es: " << numero3;
	cout << "\n\n";
	cout << "La suma de pares entre 10 y 100 es: " << sumaPares(10, 100);
	cout << "\n\n";
	tabla(numero1);
	cout << "\n\n";
	regresiva(10, 1);
	cout << "\n\n";
	ImprimirUF(28000, 2.5);
	cout << "\n\n";
	cout << "La suma de los cuadrados de lo primeros 100 numeros es: " <<
	     sumaCuadrado(1, 100);
	cout << "\n\n";
	return 0;
}
