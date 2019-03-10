#include "pch.h"
#include <iostream>

using namespace std;

const int MAX_SIZE = 100;

void enterElements(int *arr)
{
	cout << "Please Enter The Elements Of The Array (limit is " << MAX_SIZE << ") (to stop input enter 0):" << endl;
	for (int i = 0; arr[i] < MAX_SIZE; ++i)
	{
		cin >> arr[i];
		if (arr[i] == 0) break;
	}
}

void outputArr(int *arr)
{
	cout << "\nCurrent array:" << endl;
	for (int i = 0; arr[i] != 0; ++i)
	{
		cout << arr[i] << " ";
	}
}

bool isPrime(int &number)
{
	if (number < 2)
		return false;
	
	for (int i = 2; i * i <= number; ++i)
		if (number % i == 0)
			return false;
	return true;
}

void outputPrimes(int *arr)
{
	for (int i = 0; arr[i] != 0; ++i)
		if (isPrime(arr[i]))
			cout << arr[i] << " ";
}

void outputEvens(int *arr)
{
	for (int i = 0; arr[i] != 0; ++i)
		if (arr[i] % 2 == 0)
			cout << arr[i] << " ";
}

int main()
{	//Task: Въведете масив. Изкарайте простите и четните числа.
	int arr[MAX_SIZE] = { -1 };

	enterElements(arr);
	outputArr(arr);	

	cout << "\n\nThe Prime Numbers Are:" << endl;
	outputPrimes(arr);

	cout << "\n\nThe Even Numbers Are:" << endl;
	outputEvens(arr);

	return 0;
}