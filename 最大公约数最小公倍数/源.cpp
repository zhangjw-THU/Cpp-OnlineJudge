#include<iostream>
#include<cmath>
using namespace std;
int fun(int a,int b);
int main()
{
	int a,b,x,y;
	cin>>a>>b;
	x=fun(a,b);
	y=a*b/x;
	cout<<y<<" "<<x<<endl;
	return 0;
}
int fun(int a,int b)
{
	int i;
	if(a>b) i=b;
	else i=a;
	for(i;i>=1;i--)
		if(a%i==0&&b%i==0)
			break;
	return i;
}

