#include<iostream>
using namespace std;
int fun(int n)
{
	int i;
	i=n;
	if(i==1)
		return 1;
	else 
		return (n+fun(n-1));
}
int main()
{
	int n;
	cin>>n;
	cout<<fun(n);
	system("pause");
	return 0;
}