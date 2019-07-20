#include<iostream>
#include<stdint.h>
using namespace std;
int main()
{
	double f,c;
	cin>>f;
	c=(f-32.0)*5.0/9.0;
	printf("%.2f",c);
	return 0;
}