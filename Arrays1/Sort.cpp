void Sort(int arr[], const int n)
{
	for (int j = 0; j < n; j++)
	{
		for (int i = 0; i < n - 1; i++)
		{
			if (arr[i] > arr[i + 1])
			{
				int buf = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = buf;
			}
		}
	}
}
void Sort(double arr[], const int n)
{
	for (int j = 0; j < n; j++)
	{
		for (int i = 0; i < n - 1; i++)
		{
			if (arr[i] > arr[i + 1])
			{
				double buf = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = buf;
			}
		}
	}
}
void Sort(char arr[], const int n)
{
	for (int j = 0; j < n; j++)
	{
		for (int i = 0; i < n - 1; i++)
		{
			if (arr[i] > arr[i + 1])
			{
				char buf = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = buf;
			}
		}
	}
}