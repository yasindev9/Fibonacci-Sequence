#include <iostream>
#include <locale.h>
using namespace std;

int n;
int fibonacci[3000];
void fibonacciSequence();
void printF();
int main()
{
	setlocale(LC_ALL, "Turkish");
	cout << "Fibonacci dizisi, her sayının kendinden önceki ile toplanması sonucu oluşan bir sayı dizisidir. Ardışık her iki sayının bölümü altın orana yakın bir değer vermektedir değer ne kadar büyük olursa altın orana o kadar yakın olur." << endl;
	cout << "Fibonacci serisi = F(n)" << endl;
	cout << "Giriniz n = ";
	cin >> n;
	fibonacciSequence();
	printF();
}

void fibonacciSequence()
{
	fibonacci[0] = 1;
	fibonacci[1] = 1;
	for (int i = 2; i <= n; i++)
	{
		fibonacci[i] = fibonacci[i - 1] + fibonacci[i - 2];
	}
}

void printF()
{
	for (int i = 0; i < n; i++)
	{
		cout << fibonacci[i] << " ";
	}
}


