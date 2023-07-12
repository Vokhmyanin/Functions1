#include"Shifts.h"
void Left(int arr[], const int n)
{
	int number_of_shifts;
	cout << "¬ведите значение дл€ сдвига влево: "; cin >> number_of_shifts;
	for (int i = 0; i < number_of_shifts; i++)
	{
		int buffer = arr[0];
		for (int i = 0; i < n; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[n - 1] = buffer;
	}

}
void Left(double arr[], const int n)
{
	int number_of_shifts;
	cout << "¬ведите значение дл€ сдвига влево: "; cin >> number_of_shifts;
	for (int i = 0; i < number_of_shifts; i++)
	{
		double buffer = arr[0];
		for (int i = 0; i < n; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[n - 1] = buffer;
	}
}
void Left(char arr[], const int n)
{
	int number_of_shifts;
	cout << "¬ведите значение дл€ сдвига влево: "; cin >> number_of_shifts;
	for (int i = 0; i < number_of_shifts; i++)
	{
		char buffer = arr[0];
		for (int i = 0; i < n; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[n - 1] = buffer;
	}
}
void Right(int arr[], const int n)
{
	int number_of_shifts;
	cout << "¬ведите значение дл€ сдвига вправо: "; cin >> number_of_shifts;
	for (int i = 0; i < number_of_shifts; i++)
	{
		int buffer = arr[n - 1];
		for (int i = n - 1; i > 0; i--)
		{
			arr[i] = arr[i - 1];
		}
		arr[0] = buffer;
	}
}
void Right(double arr[], const int n)
{
	int number_of_shifts;
	cout << "¬ведите значение дл€ сдвига вправо: "; cin >> number_of_shifts;
	for (int i = 0; i < number_of_shifts; i++)
	{
		double buffer = arr[n - 1];
		for (int i = n - 1; i > 0; i--)
		{
			arr[i] = arr[i - 1];
		}
		arr[0] = buffer;
	}
}
void Right(char arr[], const int n)
{
	int number_of_shifts;
	cout << "¬ведите значение дл€ сдвига вправо: "; cin >> number_of_shifts;
	for (int i = 0; i < number_of_shifts; i++)
	{
		char buffer = arr[n - 1];
		for (int i = n - 1; i > 0; i--)
		{
			arr[i] = arr[i - 1];
		}
		arr[0] = buffer;
	}
}