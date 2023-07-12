#include"using.h"
#include"constants.h"
#include"FillRand.h"
#include"Print.h"
#include"Sort.h"
#include"Statistics.h"
#include"Shifts.h"












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

	int i_arr_2[ROWS][COLS];
	FillRand(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);
	cout << "Сумма элементов массива:\t" << Sum(i_arr_2, ROWS, COLS) << endl;
	cout << "Среднее-арифметическое элементов массива:\t" << Avg(i_arr_2, ROWS, COLS) << endl;

	Left(arr, n);
	Print(arr, n); cout << endl;
	Right(arr, n);
	Print(arr, n); cout << endl;



}




