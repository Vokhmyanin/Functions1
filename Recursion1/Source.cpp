#include <iostream>
using namespace std;
void elevator(int floor);
int factorial(int n);
double power(int a, int n);
void fibo(long long int n, long long int a = 0, long long int b = 1);

//#define ELEVATOR
//#define FACT
//#define POWER
#define FIBO
#define FIBO_2
void main()
{
	setlocale(LC_ALL, "");
#ifdef ELEVATOR
	int floor;
	cout << "������� ����� �����: "; cin >> floor;
	elevator(floor);
#endif

#ifdef FACT
	int n;
	cout << "������� �����: "; cin >> n;
	cout << factorial(n) << endl;

#endif
#ifdef POWER
	int a; //���������
	int n; //����������
	cout << "������� ��������� � ���������� ������� "; cin >> a >> n;
	cout << power(a, n) << endl;
#endif
#ifdef FIBO
	long long int n;
	cout << "������� ���������� �����: "; cin >> n;
	fibo(n);
#endif

}
int factorial(int n)
{
	if (n == 0) return 1;
	else return n * factorial(n - 1);

}
void elevator(int floor)
{
	if (floor == 0)
	{
		cout << "�� � �������" << endl;
		return;
	}
	cout << "�� ��  " << floor << "�����\n";
	elevator(floor - 1);
	cout << "�� ��  " << floor << "�����\n";
}
double power(int a, int n)
{
	if (n == 0)return 1;
	else if (n > 0) return power(a, n - 1) * a;
	else return 1 / power(a, -n);
	return n == 0 ? 1 : n > 0 ? a * power(a, n - 1) : 1 / power(a, -n);
}

void fibo(long long int n, long long int a, long long int b)
{
	if (a > n)return;
	cout << a << "\t";
	fibo(n, b, a + b);
}
