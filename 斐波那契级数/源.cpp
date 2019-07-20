#include<iostream>
using namespace std;
int fib(int n);
int main()
{
	int n,a;
	cin>>n;
	a=fib(n);
	cout<<a;
	return 0;
}
int fib(int n)
{
	if(n<3)
	{
		return 1;
	}
	else
	{
		return (fib(n-2)+fib(n-1));
	}
}