#include <iostream>
#include <string>
#include <cstring>
using namespace std;

void StringConcat(char* string1, char* string2)
{
	int i, j;
	i = j = 0;
	while (string1[i] != '\0')
	{
		i++;
	}
	while (string2[j] != '\0')
	{
		string1[i] = string2[j];
		i++;
		j++;
	}
	string1[i] = '\0';
	//create new char array using pointers
	char* newString = new char[i + j];
	for (int k = 0; k < i; k++)
	{
		newString[k] = string1[k];
	}
	for (int k = 0; k < j; k++)
	{
		newString[i + k] = string2[k];
	}
	//free the first 2 arrays
	delete[] string1;
	delete[] string2;
	cout << "New String is: ";
	for (int k = 0; k < i; k++)
	{
		cout << newString[k];
	}
	cout << endl;
	delete[] newString;
}

int main()
{
	char* string1 = new char[100];
	char* string2 = new char[100];
	cout << "Enter string 1: ";
	cin.getline(string1, 100);
	cout << "Enter string 2: ";
	cin.getline(string2, 100);
	//replace "." with space in string1 and string 2
	for (int i = 0; i < strlen(string1); i++)
	{
		if (string1[i] == '.')
		{
			string1[i] = ' ';
		}
	}
	for (int i = 0; i < strlen(string2); i++)
	{
		if (string2[i] == '.')
		{
			string2[i] = ' ';
		}
	}
	StringConcat(string1, string2);
	return 0;
}
