// LAB-4.1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
// Lab_04_1.cpp
// Сушинський Ігор
// Лабораторна робота № 4.1
// Цикли.
// Варіант 18


#include <iostream>;
#include <cmath>;

using namespace std;

int main()
{
	int k, N = 15, i;
	double S;

	cout << "k = "; cin >> k;
	cout << "N = "; cin >> N;

	S = 0;
	i = k;
	while (i <= N)
	{
		S += (cos(i)) / (1 + sin(i) * sin(i));
		i++;
	}
	cout << S << endl;

	S = 0;
	i = k;
	do {
		S += (cos(i)) / (1 + sin(i) * sin(i));
		i++;
	} while (i <= N);
	cout << S << endl;

	S = 0;
	for (i = k; i <= N; i++)
	{
		S += (cos(i)) / (1 + sin(i) * sin(i));
	}
	cout << S << endl;

	S = 0;
	for (i = N; i >= k; i--)
	{
		S += (cos(i)) / (1 + sin(i) * sin(i));
	}
	cout << S << endl;

	return 0;
}