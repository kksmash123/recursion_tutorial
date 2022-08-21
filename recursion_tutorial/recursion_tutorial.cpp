#include <iostream>

using namespace std;


int fib(int n)
{
	static int a[10] = { -1,-1,-1,-1,-1,-1,-1,-1,-1,-1 };

	if (n == 0 || n == 1)
	{
		a[n] = n;
		return n;
	}
	else
	{
		if (a[n - 2] == -1)
			a[n - 2] = fib(n - 2);
		if (a[n - 1] == -1)
			a[n - 1] = fib(n - 1);
		a[n] = a[n - 2]+ a[n - 1];
		return a[n];
	}
	
}

int NCR(int n, int r)
{
	if (n == r || r == 0)
		return 1;
	else
		return NCR(n - 1, r - 1) + NCR(n - 1, r);

}

int TOH(int n,int A,int B,int C)
{
	static int count = 0;
	if (n > 0)
	{
		TOH(n-1,A,C,B);
		cout << "move disk from " << A << " -> " << C << endl;
		count++;
		TOH(n-1,B,A,C);
	}
	return  count;
}

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

	//cout << power2(2, 10);
	
	//cout<<TOH(3, 1, 2, 3);

	//cout<<NCR(5,3);

	cout<<fib(5);

}
