#include <iostream>
using namespace std;

int main()
{
	int row, col, i, j, sum = 0;
	cout << "Enter number of rows: ";
	cin >> row;
	cout << "Enter number of columns: ";
	cin >> col;
	int** matrix = new int* [row];
	for (i = 0; i < row; i++)
	{
		matrix[i] = new int[col];
	}
	cout << "Enter elements of matrix: " << endl;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			cin >> matrix[i][j];
		}
	}
	cout << "Row sum and column sum: " << endl;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			sum += matrix[i][j];
		}
		cout << "Row " << i << ": " << sum << endl;
		sum = 0;
	}
	cout << endl;
	for (j = 0; j < col; j++)
	{
		for (i = 0; i < row; i++)
		{
			sum += matrix[i][j];
		}
		cout << "Column " << j << ": " << sum << endl;
		sum = 0;
	}
	cout << endl;
	if (row == col)
	{
		for (i = 0; i < row; i++)
		{
			sum += matrix[i][i];
		}
		cout << "Sum of diagonal elements: " << sum << endl;
	}
	else
	{
		cout << "Matrix is not square." << endl;
	}
	for (i = 0; i < row; i++)
	{
		delete[] matrix[i];
	}
	delete[] matrix;

	return 0;
}