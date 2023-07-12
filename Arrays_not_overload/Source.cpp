#include<iostream>
using namespace std;

 void FillRand(int arr[], const int n);
template <class A> void Print(A arr[], const int n);
template <class A> void Sort(A arr[], const int n);
template <class A> A Sum(A arr[], const int n);
template <class A> A Average(A arr[], const int n);
template <class A> A Min(A arr[], const int n);
template <class A> A Max(A  arr[], const int n);

void main()
{
	setlocale(LC_ALL, "");
	const int n = 5;
	int arr[n];
	FillRand(arr, n);
	Print(arr, n); cout << endl;
	Sort(arr, n);
	Print(arr, n); cout << endl;
	cout << "Сумма элементов массива: " << Sum(arr, n) << endl;
	cout << "Среднее арифметическое : " << Average(arr, n) << endl;
	cout << "Минимальное значение в массиве : " << Min(arr, n) << endl;
	cout << "Максимальное значение в массиве : " << Max(arr, n) << endl;

}
 void FillRand(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
	}
}
template <class A> void Print(A arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
}
template <class A> void Sort(A arr[], const int n)
{
	for (int j = 0; j < n; j++)
	{
		for (int i = 0; i < n - 1; i++)
		{
			if (arr[i] > arr[i + 1])
			{
				A buf = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = buf;
			}
		}
	}
}
template <class A> A Sum(A arr[], const int n)
{
	A summ = 0;
	for (int i = 0; i < n; i++)
	{
		summ += arr[i];
	}
	return(A)summ;
}
template <class A> A Average(A arr[], const int n)
{
	A avg = Sum(arr, n) / n;
	return (A)avg;
}
template <class A> A Min(A arr[], const int n)
{
	A min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min) min = arr[i];
	}
	return min;
}
template <class A> A Max(A arr[], const int n)
{
	A max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max) max = arr[i];
	}
	return max;
}