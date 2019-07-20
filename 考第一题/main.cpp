#include<iostream>
using namespace std;

template<class T>
T Fibonacci(T F1,T F2,int n)
{
	if(n==2)
		return F2;
	if(n==3)
		return F1+F2;
	else 
	{
		T t,p;
		t=Fibonacci(F1,F2,n-1);
		p=Fibonacci(F1,F2,n-2);
		return (t+p);
	}
}

int main()
{
    int i,j,n;
	cin>>i>>j>>n;
	cout<<Fibonacci(i,j,n);
	system("pause");
	return 0;
}
