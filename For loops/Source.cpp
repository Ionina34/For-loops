#include<iostream>
using namespace std;

#define tab '\t'
//#define MULTIPLICATION_TABLE
//#define ASCII
//#define PIFAGOR
//#define ROMBUS

void main()
{
	setlocale(LC_ALL, "Rus");
#ifdef MULTIPLICATION_TABLE
	int n = 10;
	for (int i = 1; i <= n; i++)
	{
		cout << "Таблица умножения на " << i << endl;
		for (int j = 1; j <= n; j++)
		{
			if (i < 10) cout << " ";
			cout << i << " * ";
			if (j < 10)cout << " ";
			cout << j << " = ";
			if (i * j < 10)cout << " ";
			if (i * j < 100)cout << " ";
			cout << i * j << endl;
		}
		cout << endl;
	}
#endif // MULTIPLICATION_TABLE

#ifdef ASCII

	int n;
	for (int i = 1; i <= 256; i++)
	{
		if (i % 16 == 0) cout << endl;
		cout << (char)i;
	}
#endif // ASCII

#ifdef PIFAGOR
	int n = 10;
	for (int i = 1; i <= 10; i++)
	{
		for (int j = 1; j <= 10; j++)
		{
			if (j < 10)cout << " ";
			if (i * j < 10)cout << " ";
			if (j * i < 100)cout << " ";
			cout << j * i << tab;
		}
		cout << endl;
	}
#endif // PIFAGOR

#ifdef ROMBUS
	int n;
	cout << "Введите размер фигуры: "; cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++)cout << " "; cout << "/";
		for (int j = 0; j < i * 2; j++)cout << " "; cout << "\\";
		cout << endl;
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++)cout << " "; cout << "\\";
		for (int j = 0; j < (n - 1 - i) * 2; j++)cout << " "; cout << "/";
		cout << endl;
	}
#endif // ROMBUS

	int n;
	cout << "Введите размер фигуры: "; cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++) cout << "*"; cout << "-";
		cout << endl;
	}
}