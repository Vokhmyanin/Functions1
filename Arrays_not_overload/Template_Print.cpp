#include"Template_Print.h"

template <class A> void Print(A arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
}