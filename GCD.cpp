#include <iostream>

using namespace std;
int GCD(int, int);
int main(void)
{
	int a, b;
	cin >> a >> b;
	cout << GCD(a, b);

	return 0;
}
int GCD(int a, int b)
{
	if (b == 0)
	{
		return a;
	}
	else
	{
		return GCD(b, a % b);
	}
}