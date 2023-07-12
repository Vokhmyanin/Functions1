#include"Template_Min.h"
template <class A> A Min(A arr[], const int n)
{
	A min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min) min = arr[i];
	}
	return min;
}