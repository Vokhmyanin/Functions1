#include"Template_FillRand.h"

template <class A> void FillRand(A arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
	}
} 