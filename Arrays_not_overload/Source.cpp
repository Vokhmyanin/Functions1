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
	cout << "����� ��������� �������: " << Sum(arr, n) << endl;
	cout << "������� �������������� : " << Average(arr, n) << endl;
	cout << "����������� �������� � ������� : " << Min(arr, n) << endl;
	cout << "������������ �������� � ������� : " << Max(arr, n) << endl;

}

 




