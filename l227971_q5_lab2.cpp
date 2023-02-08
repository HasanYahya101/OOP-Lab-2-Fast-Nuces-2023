#include <iostream>
using namespace std;

int* input(int n)
{
	int* arr = new int[n];
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	return arr;
}

int** intersection(int* a, int* b, int* c, int n)
{
	int** arr = new int* [3];
	for (int i = 0; i < 3; i++)
	{
		arr[i] = new int[n];
	}
	int k1 = 0, k2 = 0, k3 = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (a[i] == b[j])
			{
				arr[0][k1] = a[i];
				k1++;
			}
			if (b[i] == c[j])
			{
				arr[1][k2] = b[i];
				k2++;
			}
			if (c[i] == a[j])
			{
				arr[2][k3] = c[i];
				k3++;
			}
		}
	}
	return arr;
}

void output(int** arr, int n)
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (arr[i][j] > 0 && arr[i][j] < 100000)
			{
				cout << arr[i][j] << " ";
			}
			else
			{
				continue;
			}
			
		}
		cout << endl;
	}
}

int main()
{
	int n;
	cout << "Enter size of Arrays: ";
	cin >> n;
	cout << "Enter Values of Array1: ";
	int* a = input(n);
	cout << "Enter Values of Array2: ";
	int* b = input(n);
	cout << "Enter Values of Array3: ";
	int* c = input(n);
	int** arr = intersection(a, b, c, n);
	output(arr, n);
	delete[] a;
	delete[] b;
	delete[] c;
	for (int i = 0; i < 3; i++)
	{
		delete[] arr[i];
	}
	delete[] arr;
	return 0;
}