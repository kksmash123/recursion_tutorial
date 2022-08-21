#include <iostream>

using namespace std;




int power2(int m, int n)
{

	if (n == 0)
		return 1;
	else if (n % 2 == 0)
		return power2(m * m, n / 2);
	else
		return power2(m * m, n / 2) * m;

}


int power(int m, int n)
{
	if (n == 0)
		return 1;
	return power(m, n - 1)* m;
}

int fact(int n)
{
	if (n == 1)
		return 1;
	else
		return fact(n - 1) * n;
}

int fun1(int n)
{
	if (n == 0)
		return 0;
	else
		return fun1(n - 1) + n;


}

int fun(int a)
{
	static int sum = 0;

	if (a > 0)
	{
		sum += a;
		fun(a - 1);

	}
	return sum;

}

int main()
{
	//cout<<fact(5);

	cout << power2(2, 10);

}
