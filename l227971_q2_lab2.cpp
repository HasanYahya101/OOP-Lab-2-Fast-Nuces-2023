#include <iostream>
using namespace std;

void Input(int*& iarr, int& size);
void reverse(int* iarr, int size);
void Output(int* iarr, int size);

int main()
{
	int* iarr = new int[5];
	int size = 0;
	Input(iarr, size);
	reverse(iarr, size);
	Output(iarr, size);
	delete[] iarr;
	return 0;
}

void Input(int*& iarr, int& size)
{
	int num = 0;
	int max_size = 5;
	while (num != -1)
	{
		cout << "Enter a number: ";
		cin >> num;
		if (num != -1)
		{
			if (size == max_size)
			{
				int* temp = new int[max_size * 2];
				for (int i = 0; i < max_size; i++)
				{
					temp[i] = iarr[i];
				}
				delete[] iarr;
				iarr = temp;
				max_size *= 2;
			}
			iarr[size] = num;
			size++;
		}
	}
}

void reverse(int* iarr, int size)
{
	for (int i = 0; i < size / 2; i++)
	{
		int temp = iarr[i];
		iarr[i] = iarr[size - i - 1];
		iarr[size - i - 1] = temp;
	}
}

void Output(int* iarr, int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << iarr[i] << " ";
	}
}
