#include<iostream>
#include<conio.h>
using namespace std;

int Add(int a, int b);
int Sub(int a, int b);
int Mul(int a, int b);
double Div(int a, int b);
int Sum(int arr[], const int n);

void main()
{
	setlocale(LC_ALL, "");
	int a, b;
	cout << "Введите два числа:"; cin >> a >> b;
	int c = Add(a, b);
	cout << a << "+" << b << "=" << c << endl;
	cout << a << "-" << b << "=" << Sub(a, b) << endl;
	cout << a << "*" << b << "=" << Mul(a, b) << endl;
	cout << a << "/" << b << "=" << Div(a, b) << endl;
	cout << "Сумма элементов массива: " << Sum(arr, n) << endl;
}
int Add(int a, int b)
{
	//Addition
	int c = a + b;
	return c;
}
int Sub(int a, int b)
{
	//Subtraction
	return a - b;
}
int Mul(int a, int b)
{
	//Multiplication
	return a * b;
}
double Div(int a, int b)
{
	//Division
	return (double)a / b;
}
int Sum(int arr[], const int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}