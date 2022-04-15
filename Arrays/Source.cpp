#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	const int SIZE = 5;
	int arr[SIZE] = {3,3, 6,4 ,8};
	//arr [2] = 3 //обращаемся ко 2му элементу массива, чтобы задать ему 3
		//SIZE -1 or n-1
		for (int i = 0; i < SIZE; i++)
		{
			cout << arr[i] << "\t";
		}
		cout << endl;

		for (int i = SIZE - 1; 0 <= i; i--)
		{
			cout << arr[i] << "\t";
		}
	cout << endl;
	int Sum = 0;
	for (int i = 0; i<SIZE; i++)
	{
		Sum += arr[i];
	}
	cout << Sum << endl;

	double SA =(double) Sum / SIZE;
	cout << SA << endl;

	int min = arr[0];
	int max = arr[0];
	for (int i = 0; i< SIZE; i++)
	{
		if (min > arr[i])
		{
		  min = arr[i];
		}
		if (max < arr[i])
		{
			max = arr[i];
		}
	}
	cout << min << "\t";
	cout << max;
}