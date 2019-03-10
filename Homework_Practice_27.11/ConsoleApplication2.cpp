#include "pch.h"
#include <iostream>

using namespace std;

const int MAX_SIZE = 100;

void reverse (int numbersInArray, double arr[])
{
	for (int i = 0; i < numbersInArray; ++i)
		cout << arr[i] << " ";
	cout << "=> ";
	double arrCopy[MAX_SIZE] = { 0 };
	double tempHolder = -1;
	for (int i = 0; i < numbersInArray; ++i)
	{
		tempHolder = arr[numbersInArray - i - 1];
		arrCopy[i] = tempHolder;
	}
	for (int i = 0; i < numbersInArray; ++i)
	{
		cout << arrCopy[i] << " ";
	}
}
void check (int numbersInArray, double arr[])
{
	char action02 = 'B';

	cout << "Which Template Do You Want To Use:\n(1) (x3, -5)\n(2) (x3, -5, ^2)";
	cout << "\n\nYour Choice (Enter The Number Of The Action): ";
	cin >> action02;

	int cntr = 0, cntr2 = -1;

	if (action02 == '1')
	{
		cntr2 = 1;
		for (int i = 0; i < (numbersInArray - 2); i += 2)
		{
			(float(arr[i + 1]) == float((arr[i] * 3)) && float(arr[i + 2]) == float((arr[i + 1] - 5))) ? cntr++ : cntr;
			cntr2++;
		}
	}		
	else if ((action02 == '2'))
	{
		cntr2 = 1;
		for (int i = 0; i < (numbersInArray - 3); i += 3)
		{
			(float(arr[i + 1]) == float((arr[i] * 3)) && float(arr[i + 2]) == float((arr[i + 1] - 5)) && float(arr[i + 3]) == float((arr[i + 2] * arr[i + 2]))) ? cntr++ : cntr;
			cntr2 += 2;
		}		
	}
	cout << ((cntr == (numbersInArray % cntr2)) ? "true" : "false");
}
void normalize(int numbersInArray, double arr[])
{
	double arrCopy[MAX_SIZE] = { 0 };
	double tempHolder = -1;
	for (int i = 0; i < numbersInArray; i++)
	{
		tempHolder = arr[i];
		arrCopy[i] = tempHolder;
	}

	int count = numbersInArray;
	char action02 = 'B';
	int cntr = 0, cntr2 = -1;
	int i = 0;
	int remove = -1;

	cout << "Which Template Do You Want To Use:\n(1) (x3, -5)\n(2) (x3, -5, ^2)";
	cout << "\n\nYour Choice (Enter The Number Of The Action): ";
	cin >> action02;
	cout << endl;
	for (int i = 0; i < numbersInArray; ++i)
		cout << arr[i] << " ";
	cout << "=> ";

	if (action02 == '1')
	{
		cntr2 = 1;
		while (i + 2 < count)
		{
			if (!((float(arrCopy[i + 1]) == float((arrCopy[i] * 3)))))
			{
				remove = i + 1;
				for (int index = remove; index < count - 1; ++index)
					arrCopy[index] = arrCopy[index + 1];
				count--;
			}
			if (!(float(arrCopy[i + 2]) == float((arrCopy[i + 1] - 5))))
			{
				
				remove = i + 2;
				for (int index = remove; index < count - 1; ++index)
					arrCopy[index] = arrCopy[index + 1];
				count--;
			}
			i += 2;
		}
	}

	if (action02 == '2')
	{
		cntr2 = 1;
		while (i + 2 < count)
		{
			if (!((float(arrCopy[i + 1]) == float((arrCopy[i] * 3)))))
			{
				remove = i + 1;
				for (int index = remove; index < count - 1; ++index)
					arrCopy[index] = arrCopy[index + 1];
				count--;
			}
			if (!(float(arrCopy[i + 2]) == float((arrCopy[i + 1] - 5))))
			{				
				remove = i + 2;
				for (int index = remove; index < count - 1; ++index)
					arrCopy[index] = arrCopy[index + 1];
				count--;
			}
			if (!(float(arrCopy[i + 3]) == float((arrCopy[i + 2] * arrCopy[i + 2]))))
			{				
				remove = i + 2;
				for (int index = remove; index < count - 1; ++index)
					arrCopy[index] = arrCopy[index + 1];
				count--;
			}
			i += 3;
		}
	}
	
	for (int j = 0; j < count; ++j)
		cout << arrCopy[j] << " ";		
}
void map(double arr[], int elements)
{
	double x = -1;
	cout << "Current Array:" << endl;
	for (int i = 0; i < elements; ++i)
		cout << arr[i] << " ";
	cout << "\n\nMultiply by ";
	cin >> x;
	cout << "\nNew Array:" << endl;
	for (int i = 0; i < elements; ++i)
		cout << arr[i] * x << " ";
}
void filter(int numbersInArray, double arr[])
{
	int check = (numbersInArray % 2 == 0) ? (numbersInArray / 2) : (numbersInArray / 2 + 1);
	for (int i = 0; i < numbersInArray; ++i)
		cout << arr[i] << " ";
	cout << "=> ";
	double removeArr[MAX_SIZE] = { 0 };
	int cntr = 0;
	for (int k = 0; k <= check && cntr != check; ++k)
	{
		int index = 2 * k;
		removeArr[k] = arr[2 * k];
		cntr++;
	}
	for (int i = 0; i < cntr; i++)
		cout << removeArr[i] << " ";
}

int main()
{	/*
	По подадено n и масив с n елемента трябва да бъде въведена и операция, която вие да извършите върху масива.

	(1) - reverse (обръща масива)
	(2) - check (проверява дали елементите на масива следват шаблона (х3, -5) и връща true или false)
	(3) - normalize (ако следващото число не удовлетворява поредицата, го изтрийте)
	(4) - map (умножава всеки елемент на масива по подаденото число)
	(5) - filter (трие елементите на нечетните индекси)
	*/

	int numbersInArray = -1;
	double arr[MAX_SIZE] = { 0 };

	cout << "How Many Numbers Do You Want The Array To Hold? ";
	cin >> numbersInArray;

	while (!(numbersInArray > 0))
	{
		cout << "\nERROR: Invalid Input!\nTry Again:" << endl;
		cout << "\nHow Many Numbers Do You Want The Array To Hold? ";
		cin >> numbersInArray;
	}

	cout << "\nPlease Enter The Array Of Numbers: " << endl;

	for (int i = 0; i < numbersInArray; ++i)
	{
		cout << "arr[" << i << "] = ";
		cin >> arr[i];
	}

	char action = 'A';

	cout << "\nChoose An Action To Be Performed On The Array:" << endl;
	cout << "(1) Reverse\n(2) Check\n(3) Normalize\n(4) Map\n(5) Filter";
	cout << "\nYour Choice (Enter The Number Of The Action): ";
	cin >> action;

	while (action != '1' && action != '2' && action != '3' && action != '4' && action != '5')
	{
		cout << "\nERROR: Invalid Input!\nTry Again:" << endl;
		cout << "\nYour Choice (Enter The Number Of The Action): ";
		cin >> action;
	}

	cout << endl;

	switch (action)
	{
	case '1':
	{
		reverse(numbersInArray, arr);
		cout << endl;
		break;
	}
	case '2':
	{
		check(numbersInArray, arr);
		cout << endl;
		break;
	}
	case '3':
	{
		normalize(numbersInArray, arr);
		cout << endl;
		break;
	}
	case '4':
	{
		map(arr, numbersInArray);
		cout << endl;
		break;
	}
	case '5':
	{
		filter(numbersInArray, arr);
		cout << endl;
		break;
	}
	}


	return 0;
}