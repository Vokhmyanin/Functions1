#include"Template_Sort.h"
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