#include<iostream>
using namespace std;
#include"myMatrix.h"
int main()
{
	myMatrix a,b,c(3,4);
	a.print();
	b.print();
	a.change();
	a.print();
	a=a*b;
	a.print();
	b=a;
	b.print();
	cout<<a.element(1,1);
	try{
		a.element(3,5);
	}
	catch(char*err)
	{
		cout<<err<<endl;
	}
	a=a*c;
	a.print();
	system("pause");
	return 0;
}