#include"Template_Max.h"
template <class A> A Max(A arr[], const int n)
{
	A max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max) max = arr[i];
	}
	return max;
}