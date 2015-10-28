#include <iostream>
using namespace std;
long long SymmetricalNumber(long long number);

int main()
{
	while (true)
	{
		long long n;
		cout << "Enter your number: " << endl;
		cin >> n;

		long long t = SymmetricalNumber(n);
		if (n < 0)
			t = -t;
		if (t == n)
			cout << "symmetrical ";
		else
			cout << "not symmetrical ";

		system("pause");
		system("cls");
	}
	return 0;
}

long long SymmetricalNumber(long long number)
{
	long long p = abs (number % 10);
	long long t = abs (number / 10);
	while (t)
	{
		int a = t % 10;
		p = p * 10 + a;
		t = t / 10;
	}
	return p ;
}