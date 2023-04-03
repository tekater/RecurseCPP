#include <iostream>
#include <stdlib.h>  // rand(), srand()
#include <windows.h> // time()
#include <math.h>    // библиотека матеши
#include <time.h>
using namespace std;

const int size = 10;
const int length = 25;
const int mmr = 100;
int factorial(int n, int i) {
	if (i == n) {
		return n;
	}
	else {
		return i * factorial(n, i + 1);
	}
}

int disfactorial(int n) {
	if (n == 1) {
		return n;
	}
	else {
		return n * disfactorial(n - 1);
	}
}

int Sum(int i, int arr[]) {
	if (i == ::size - 1) {
		return arr[i];
	}
	else {
		return arr[i] + Sum(i + 1, arr);
	}
}

int PowR(int i,int n) {
	if (n == 1) {
		return i;
	}
	else {
		return i * PowR(i, n - 1);
	}

	if (i == 0) {
		return 0;
	}
	if (n == 0) {
		return 1;
	}
}

char Stars(int i) {
	if (i == 0) {
		return 42;
	}
	else {
		return 42 * Stars(i - 1);
	}
}

int diapozon(int a,int b) {
	if (a == b) {
		return a;
	}
	else {
		return a + diapozon(a + 1, b);
	}
}

int counter(int arr[],int i) {
	int count = 0; int temp = 0;
	int sum = 0;
	for (int j = 0; j < i; j++) {
		sum += arr[j];
	}
	if (sum > temp) {
		count++;
	}
	temp = sum;
	sum = 0;
	if (i == 0) {
		return count;
	}
	else {
		return counter(arr, i - 10);
	}
}

int main()
{
	setlocale(0, "");
	srand(time(NULL));
	//system("color B5");
	// Рекурсия
	cout << "Факториал: " << factorial(5, 1) << endl;
	cout << "Факториал2: " << disfactorial(5) << endl;

	int arr[::size] = { 1,2,3,4,5,6,7,8,9,10 };

	cout << "Сумма: " << Sum(0, arr) << endl;

	cout << "Степень: " << PowR(2, 3) << endl;
	cout << "Звёзды: " << Stars(5) << endl;
	cout << "Диапозон: " << diapozon(2, 10) << endl;

	int arr2[mmr] = {};
	for (int i = 0; i < mmr; i++) {
		arr2[i] = 1 + rand() % 10;
	}

	/*cout << "Массив: ";
	for (int i = 0; i < mmr; i++) {
		cout << arr2[i] << " ";
	}
	cout << endl;*/

	cout << "Счётчик: " << counter(arr2,100) << endl;

}
