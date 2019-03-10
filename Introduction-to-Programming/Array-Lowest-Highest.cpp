#include "pch.h"
#include <iostream>

/*sort a partially filled array of numbers
so that they are ordered from smallest to largest.*/

using namespace std;

const int MAX_SIZE = 50;

float* fillArray(float *arr, int &numbersInArray)
{
	for (int i = 0; i < numbersInArray; ++i)
		cin >> arr[i];
	return arr;
}

void swap(float &num1, float &num2)
{
	float temp = num1;
	num1 = num2;
	num2 = temp;
}

float* sort(float *arr, int &numbersInArray)
{

	for (int i = 0; i < numbersInArray - 2; ++i)
	{
		int index = i;
		float currentMin = FLT_MAX;
		for (int j = i; j < numbersInArray; ++j)
			if (currentMin > arr[j])
			{
				currentMin = arr[j];
				index = j;
			}
		swap(arr[i], arr[index]);
	}
	return arr;
}

void outputArray(float *arr, int &numbersInArray)
{
	cout << "    Answer: ";
	for (int i = 0; i < numbersInArray; ++i)
		cout << arr[i] << " ";
}

int main()
{
	float arr[MAX_SIZE] = { 0 };
	int numbersInArray = -1;
	cout << "How Many Numbers Is The Array Going To Hold? ";
	cin >> numbersInArray;
	fillArray(arr, numbersInArray);
	sort(arr, numbersInArray);
	outputArray(arr, numbersInArray);

	return 0;
}

/*Algorithm:
	(before main) Create a constant variable called MAX_SIZE of type int and set it equal to 50.
	(in main) Create an array called arr of type float that can take MAX_SIZE numbers and set it equal to 0.
	Create a variable called numbersInArray of type int and set it equal to -1.
	Ask the user: "How many numbers are you going to store? " and save the input in numbersInArray.
	(in a function) Create a function called fillArray of type void that takes a pointer to the first element of the array and the array's size as a parameters.
	Write the algorithm to fill in the array.
	(in a function) Create a function called swap of type void that takes the references of two numbers as pointers.
	Write the algorithm to swap two numbers.
	(in a function) Create a function called sort of type void that takes a pointer to the first element of the array and the array's size as a parameters.
	Create a for loop that starts from 0 and finishes when a counter reaches numbersInArray - 2, incrementing by 1.
	Create a nested for loop that has a counter that starts from the value of the counter used in the first loop and ends when it reaches numbersInArray - 1 incrementing by 1.
	Find the minimum element and swap it with the first element.
*/