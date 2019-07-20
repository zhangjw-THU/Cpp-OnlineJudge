#include<iostream>
#include<stdint.h>
#include<iomanip>
using namespace std;
double getPower(double x,int y)
{
	if(y==1)
		return x;
	else if(y==0)
		return 1;
	else if(y<0)
		return 1.0/getPower(x,-y);
	else 
		return (x*getPower(x,y-1));
}
int main()
{
	int y;
	double x;
	cin>>x>>y;
	printf("%.2f",getPower(x,y));
}