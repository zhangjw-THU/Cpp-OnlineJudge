#include<iostream>
using namespace std;
int MaxPro(int a,int b)
{
	return a>b?a:b;
}
double MaxPro(double a,double b)
{
	return a>b?a:b;
}
int main()
{
	int a,b,j;
	double c,d;
	cin>>j;
	if(j==1)
	{
		cin>>a>>b;
		cout<<MaxPro(a,b)<<endl;
	}
	else if(j==2)
	{
		cin>>c>>d;
		cout<<MaxPro(c,d)<<endl;
	}
	return 0;
}