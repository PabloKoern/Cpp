#include <iostream>
#include <cstdlib>
using namespace std;
bool ParNegativo(int num)
{
	bool result=false;
	if(num%2==0 && num<0 )
		result=true;
	return result;
}
bool DivisionExacta(int num1, int num2)
{
	bool result=false;
	if (num1%num2 ==0)
		result=true;
	return result;
}
void EsMultiploA(int num1, int num2)
{
	if (num1>num2)
		if (DivisionExacta(num1, num2))
			cout<<num1<<" Es multiplo de "<<num2<<endl;
		else
			cout<<num1<<" NO es multiplo de "<<num2<<endl;
	else if (DivisionExacta(num2, num1))
		std::cout<<num2<<" es multiplo de "<<num1<<endl;
	else
		std::cout<<num2<<" NO es multiplon de "<<num1<<endl;
}
bool EsMultiploB(int num1, int num2)
{
	bool result=false;
	if (DivisionExacta(num1, num2))
		result=true;
	return result;
}
void Years(int y1, int y2)
{
	if (y1<y2)
		cout<<"Entre "<<y1<<" y "<<y2<<", han paso "<<y2-y1<<" aC1os"<<endl;
	else
		cout<<"Faltan" <<y1-y2<<" para "<<y2<<endl;
}
void tipoTriangulo(int L1, int L2,int L3)
{
	if ((L1==L2)&&(L2==L3))
		cout<<"El Triuangulo es Equilatero"<<endl;
	else if ((L1==L2)||(L2==L3)||(L1==L3))
		cout<<"El Triangulo es isosceles"<<endl;
	else
		cout<<"El Triangulo es escaleno"<<endl;
}
int main()
{
	int a=0,b=0;
	cout<<"Ingrese un nC:mero: ";
	cin>>a;
	if (ParNegativo(a))
		cout<<a<<" Es par negativo"<<endl;
	else
		cout<<a<<" NO es par negativo"<<endl;
	cout<<"Ingrese un segundo numero: ";
	cin>>b;
	cout<<endl<<"Numero 1="<<a<<" - Numero 2="<<b<<endl;
	cout<<endl<<"DivisiC3n Exacta"<<endl;
	if (b!=0)
	{
		if (DivisionExacta(a,b))
			cout<<a<<"/"<<b<<" Es DivisiC3n exacta"<<endl;
		else
			cout<<a<<"/"<<b<<" No es DivisiC3n exacta"<<endl;
	}
	else
		cout<<"El segundo numero no puede ser cero"<<endl;
	cout<<"Es Multiplo Opcion 1"<<endl;
	EsMultiploA(a,b);
	cout<<"Es Multiplo Opcion 2"<<endl;
	if (EsMultiploB(a,b))
		cout<<a<<" Es multiplo de"<<b<<endl;
	else
		cout<<a<<" NO es multiplo de "<<b<<endl;
	cout<<"Ingrese Periodo 1: ";
	cin>>a;
	cout<<"Ingrese Periodo 2: ";
	cin>>b;
	Years(a,b);
	cout<<"Si: L1: 3 L2: 3 L3:3, Entoces "<<endl;
	tipoTriangulo(3,3,3);
	cout<<"Si: L1: 3 L2: 3 L3:4, Entoces "<<endl;
	tipoTriangulo(3,3,4);
	cout<<"Si: L1: 3 L2: 4 L3:4, Entoces "<<endl;
	tipoTriangulo(3,4,4);
	cout<<"Si: L1: 4 L2: 3 L3:4, Entoces "<<endl;
	tipoTriangulo(4,3,4);
	cout<<"Si: L1: 3 L2: 4 L3:5, Entoces "<<endl;
	tipoTriangulo(3,4,5);
	return 0;
}
