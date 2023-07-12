#include"Template_Average.h"
template <class A> A Average(A arr[], const int n)
{
	A avg = Sum(arr, n) / n;
	return (A)avg;
}