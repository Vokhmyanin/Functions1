#include"stdafx.h"
#include"Template_FillRand.cpp"
#include"Template_Print.cpp"
#include"Template_Sort.cpp"
#include"Template_Sum.cpp"
#include"Template_Average.cpp"
#include"Template_Min.cpp"
#include"Template_Max.cpp"








void main()
{
	setlocale(LC_ALL, "");
	const int  n = 5;
	int  arr[n];
	FillRand(arr, n);
	Print(arr, n); cout << endl;
	Sort(arr, n);
	Print(arr, n); cout << endl;
	cout << "Сумма элементов массива: " << Sum(arr, n) << endl;
	cout << "Среднее арифметическое : " << Average(arr, n) << endl;
	cout << "Минимальное значение в массиве : " << Min(arr, n) << endl;
	cout << "Максимальное значение в массиве : " << Max(arr, n) << endl;

}

 




