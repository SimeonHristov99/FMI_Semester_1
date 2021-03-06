#include "pch.h"
#include <iostream>

using namespace std;

const int MAX_SIZE = 100;

int main()
{	
	int row = -1, column = -1, years = -1;

	cout << "Number Of Rows: ";
	cin >> row;
	cout << "Number Of Columns: ";
	cin >> column;
	cout << "Number Of Years: ";
	cin >> years;

	while (row <= 0 || column <= 0) //What's the logic behind years < 0 ??? Shouldn't it be if years < 10 ...
	{
		cout << "\n\tERROR: Invalid Input! Try Again:\n\n";
		cout << "Number Of Rows: ";
		cin >> row;
		cout << "Number Of Columns: ";
		cin >> column;
		cout << "Number Of Years: ";
		cin >> years;
	}

//-------------------------------------------------ENTER_CURRENT FOREST--------------------------------------------------------------

	char darr[MAX_SIZE][MAX_SIZE] = { 0 };
	bool incorrect = false;
	char check = 'C';

	cout << "\nPlease Enter The Elements Of The Forest: " << endl;

	do
	{
		cout << "\nNOTE: Be Careful Not To Input Invalid Data!\n\n";

		incorrect = false;

		for (int i = 0; i < row && !(incorrect); ++i)
		{
			for (int j = 0; j < column; ++j)
			{
				cin >> darr[i][j];
				check = darr[i][j];
				if (check != 'R' && check != 'S' && check != '4' && check != '3' && check != '2' && check != '1')
				{
					incorrect = true;
					break;
				}
			}
		}

	} while (incorrect == 1);


//-------------------------------------------------DISPLAY_CURRENT FOREST----------------------------------------------------------

	cout << "\nCurrent Forest:" << endl;

	for (int i = 0; i < row; ++i)
	{
		cout << " ";
		for (int j = 0; j < column; ++j)
		{
			cout << darr[i][j] << " ";
		}
		cout << endl;
	}

//-------------------------------------------------DO_STUFF-------------------------------------------------------------------------
	
	int tempyears = years;

	while (tempyears >= 10)
	{
		char newdarr[MAX_SIZE][MAX_SIZE] = { 0 };

		//makes a copy of the given forest
		for (int i = 0; i < row; ++i)
		{
			for (int j = 0; j < column; ++j)
			{
				newdarr[i][j] = darr[i][j];
			}
		}

		// 4 -> 3 ?
		for (int i = 0; i < row; ++i)
		{
			for (int j = 0; j < column; ++j)
			{
				check = int(darr[i][j]);
				if (check == 52)
				{
					int cntr = 0;
					if (int(darr[i - 1][j - 1]) == 52)
					{
						cntr++;
					}
					if (int(darr[i - 1][j]) == 52)
					{
						cntr++;
					}
					if (int(darr[i - 1][j + 1]) == 52)
					{
						cntr++;
					}
					if (int(darr[i][j - 1]) == 52)
					{
						cntr++;
					}
					if (int(darr[i][j + 1]) == 52)
					{
						cntr++;
					}
					if (int(darr[i + 1][j - 1]) == 52)
					{
						cntr++;
					}
					if (int(darr[i + 1][j]) == 52)
					{
						cntr++;
					}
					if (int(darr[i + 1][j + 1]) == 52)
					{
						cntr++;
					}

					(cntr >= 3) ? (newdarr[i][j] = '3') : newdarr[i][j];
				}
			}
		}

		//changes everyhting else
		for (int i = 0; i < row; ++i)
		{
			for (int j = 0; j < column; ++j)
			{
				check = int(darr[i][j]);
				
				switch (check)
				{
				case 49:
				{
					newdarr[i][j] = '2';
					break;
				}
				case 50:
				{
					newdarr[i][j] = '3';
					break;
				}
				case 51:
				{
					newdarr[i][j] = '4';
					break;
				}				
				}
			}
		}

		//makes a copy of the new forest
		for (int i = 0; i < row; ++i)
		{
			for (int j = 0; j < column; ++j)
			{
				darr[i][j] = newdarr[i][j];
			}
		}

		tempyears -= 10;

	}

	cout << "\nForest After " << years << " Years: " << endl;

	for (int i = 0; i < row; ++i)
	{
		cout << " ";
		for (int j = 0; j < column; ++j)
		{
			cout << darr[i][j] << " ";
		}
		cout << endl;
	} 

	return 0;
}