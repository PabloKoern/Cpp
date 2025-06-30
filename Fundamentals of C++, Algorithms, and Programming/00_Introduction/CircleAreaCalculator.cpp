#include <iostream>
#include <iomanip>
#define pi 3.1415
using namespace std;
float area = 0;
float CalculaArea(int r)
{
	float result = 0;
	result = r * r * pi;
	return result;
}
int main()
{
	float radio = 0;
	std::cout<< "Ingrese un radio: ";
	cin>> radio;
	area = CalculaArea(radio);
	cout << "En area de la circunferencia es : " << area <<endl;
	cout << fixed;
	cout << setprecision(2);
	cout << "En area de la circunferencia es : " << area <<endl;
	int x,y;
	x=3;
	y =5;
	cout << "y/x : " << y/x <<endl;
	cout << "y%x : " << y%x <<endl;
	cout << "y/x : " << (float)y/(float)x <<endl;
	return 0;
}
