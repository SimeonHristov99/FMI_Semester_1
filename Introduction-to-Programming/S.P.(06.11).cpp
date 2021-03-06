// S.P.(06.11).cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

int main()
{/*
	-Програма, която въвежда от клавиатурата цяло число n и масив от n реални числа.Да
		се намерят минималния и максималния елемент на масива.

		double maxFound, minFound;
	int n = 0;
	double arr[MAX_SIZE] = { 0 };

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	maxFound = arr[0];
	minFound = arr[0];

	for (int i = 1; i < n; i++)
	{
		maxFound = (arr[i] > maxFound) ? arr[i] : maxFound;
		minFound = (minFound < arr[i]) ? minFound : arr[i];
	}

	cout << "MAX: " << maxFound << "; MIN: " << minFound << endl;

	-Програма, която въвежда от клавиатурата цяло число n и масив от n реални числа.Да
		се намерят минималния и максималния елемент на масива.Да се разменят местата им в масива и да се
		изведе новия масив.

		double max, min;
	int numbersInArray = 0;
	double arr[MAX_SIZE] = { 0 };
	int holdMin = 0, holdMax = 0;

	cin >> numbersInArray;

	for (int i = 0; i < numbersInArray; ++i)
	{
		cin >> arr[i];
	}

	min = arr[0];
	max = arr[0];

	for (int i = 0; i < numbersInArray; ++i)
	{
		if (min > arr[i])
		{
			holdMin = i;
			min = arr[i];
		}
		if (max < arr[i])
		{
			holdMax = i;
			max = arr[i];
		}
	}

	arr[holdMax] = arr[holdMin];
	arr[holdMin] = max;

	for (int i = 0; i < numbersInArray; ++i)
	{
		cout << arr[i] << " ";
	}

	-Програма, която въвежда от клавиатурата цяло число n и масив от n цели числа.Да се
		намери и изведе броя на тези числа в масива, чийто сбор от цифрите е едноцифрено число.Ако няма
		такива да се изведе подходящо съобщение.

		int numbersInArray = -1, sum = 0, cntr = 0;
	int arr[MAX_SIZE] = { 0 };
	int tempArr = -1;

	std::cin >> numbersInArray;
	for (int i = 0; i < numbersInArray; ++i)
	{
		std::cin >> arr[i];
	}

	for (int i = 0; i < numbersInArray; ++i)
	{
		tempArr = arr[i];
		sum = 0;
		while (tempArr)
		{
			sum += tempArr % 10;
			tempArr /= 10;
		}

		sum < 10 ? cntr++ : cntr = 0;

	}

	if (cntr > 0)
	{
		std::cout << "The number of numbers that have digits that sum up to a single digit number is " << cntr << "." << std::endl;
	}
	if (cntr == 0)
	{
		std::cout << "There are no numbers which have digits that amount to a single digit number!" << std::endl;
	}

	-Програма, която въвежда от клавиатурата цяло число n и масив от n цели числа.Да се
		намерят и изведат : първият неотрицателен елемент на масива и сумата на елементите след него.Ако
		няма такива да се изведе подходящо съобщение.

		double arr[15] = { 0, 8, -10000, 9, -5,5,2 };
	int count = 10;
	float sum = 0;

	bool flag = false;

	for (int i = 0; i < count; ++i)
	{
		if (arr[i] < 0 && !(flag))
		{
			cout << "\nFirst negative element is " << arr[i] << ".";
			flag = true;
		}
		if (flag == true) sum += arr[i + 1];
	}

	if (flag == false)
	{
		cout << "The array is composed only of positive (whole) numbers." << endl;
	}
	else
	{
		cout << "\tSum is " << sum << "." << endl;
	}

	-Да се прочете въведено естествено число n и да се създаде масив от n реални числа.
		Запълнете масива с въведени от клавиатурата стойности.
		След това да се въведе още едно число, за което :
	1)да се определи дали се среща числото в масива и ако да, колко пъти.
	2)ако числото се среща в масива, да се определят и отпечатат всички позиции, на които то се среща.

	int numbersInArray = 5;
	double arr[MAX_SIZE] = { 3.14, 0, 6, 6, 100 };

	double number = -1;

	int cntr = 0;

	cin >> number;

	bool flag = false;

	for (int i = 0; i <= numbersInArray; ++i)
	{
		if (arr[i] == number)
		{
			flag = true;
			cntr++;
			cout << cntr << " time the number is met in position number " << i + 1 << ".\n";
		}
	}

	if (flag == false)
	{
		cout << "The array does not contain the entered number." << endl;
	}
	else
	{
		cout << number << " is met " << cntr << " time(s)." << endl;
	}

	Task 05
		Да се напише програма, която въвежда от клавиатурата цяло число n и масив от n цели числа.Да се
		провери дали масивът е симетричен(огледален, палиндром).

		int numbersInArray = -1;
	int arr[MAX_SIZE] = { 0 };

	cin >> numbersInArray;

	for (int i = 0; i < numbersInArray; ++i)
	{
		cin >> arr[i];
	}

	bool flag = true;

	cout << endl;

	for (int j = 0; j < numbersInArray / 2 && flag; ++j)
	{
		if (arr[j] != arr[(numbersInArray - 1 - j)])
		{
			flag = false;
			break;
		}
	}

	cout << (flag ? "Is a palindrome." : "Not a palindrome.") << endl;

	Task 06
		Да се напише програма, която въвежда от клавиатурата низ и символ.Да се изведе колко пъти се
		среща символът в низа и, ако се среща да го замести със символа *.

		char symbol;
	char str[MAX_SIZE];

	cin >> str;
	cin >> symbol;

	int cntr = 0;

	for (int i = 0; !(str[i] == 0); ++i)
	{
		if (int(symbol) == str[i])
		{
			cntr++;
			str[i] = (int)'*';
		}
	}

	cout << "\n\tThe array you entered contains \"" << symbol << "\" " << cntr << " times." << endl;

	for (int i = 0; !(str[i] == 0); ++i)
	{
		cout << str[i];
	}

	Task 07
		След въвеждането на броя елементи на масива и въвеждане на самия масив(приемаме, че е
			от цели числа), намерете сумата на всички числа, които в стотиците си имат цифрата 6. Намерете
		средноаритметичното на всички нечетни числа в масива.

		const int MAX_SIZE = 100;

	float oddSum(int numbersInArray, int arr[MAX_SIZE])
	{
		int sum = 0;
		int cntr = 0;

		for (int i = 0; i < numbersInArray; ++i)
		{
			if (arr[i] % 2 != 0)
			{
				sum += arr[i];
				cntr++;
			}
		}

		float result = sum / (float)cntr;

		return (result);
	}

	float sumSpecial(int numbersInArray, int arr[MAX_SIZE])
	{
		float sum = 0;

		for (int i = 0; i < numbersInArray; ++i)
		{
			int hundreds = arr[i] / 100 % 10;

			if (hundreds == 6)
			{
				sum += arr[i];
			}
		}


		return sum;
	}

	int main()
	{
		int numbersInArray = -1;
		int arr[MAX_SIZE] = { 0 };


		cin >> numbersInArray;

		for (int i = 0; i < numbersInArray; ++i)
		{
			cin >> arr[i];
		}

		cout << "\nThe average of the elements in the array is " << (oddSum(numbersInArray, arr)) << "." << endl;
		cout << "The sum of the numbers is " << (sumSpecial(numbersInArray, arr)) << "." << endl;

		return 0;
	}
*/
	return 0;

}
