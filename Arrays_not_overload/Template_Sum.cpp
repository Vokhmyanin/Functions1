#include"Template_Sum.h"
template <class A> A Sum(A arr[], const int n)
{
	A summ = 0;
	for (int i = 0; i < n; i++)
	{
		summ += arr[i];
	}
	return(A)summ;
}