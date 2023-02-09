#include<iostream>
using namespace std;
void input(int* a, int* b, int* c, int n)
{
	cout << "Enter the elements of set A: ";
	for (int i = 0; i < n; i++)
		cin >> a[i];
	cout << "Enter the elements of set B: ";
	for (int i = 0; i < n; i++)
		cin >> b[i];
	cout << "Enter the elements of set C: ";
	for (int i = 0; i < n; i++)
		cin >> c[i];
}
int** intersection(int* a, int* b, int* c, int n)
{
	int** result = new int* [3];
	for (int i = 0; i < 3; i++)
		result[i] = new int[n];
	int count = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (a[i] == b[j])
			{
				result[0][count] = a[i];
				count++;
			}
		}
	}
	result[0][count] = -1;
	count = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (b[i] == c[j])
			{
				result[1][count] = b[i];
				count++;
			}
		}
	}
	result[1][count] = -1;
	count = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (c[i] == a[j])
			{
				result[2][count] = c[i];
				count++;
			}
		}
	}
	result[2][count] = -1;
	return result;
}
void output(int** result)
{
	cout << "Resultant array: " << endl;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; result[i][j] != -1; j++)
			cout << result[i][j] << " ";
		cout << endl;
	}
}

int main()
{
	int n;
	cout << "Enter the number of elements in each set: ";
	cin >> n;
	int* a = new int[n];
	int* b = new int[n];
	int* c = new int[n];
	input(a, b, c, n);
	int** result = intersection(a, b, c, n);
	output(result);
	for (int i = 0; i < 3; i++)
		delete[] result[i];
	delete[] result;
	delete[] a;
	delete[] b;
	delete[] c;
	return 0;
}
