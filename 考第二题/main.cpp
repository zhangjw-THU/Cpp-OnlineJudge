#include<iostream>
#include"shape.h"
using namespace std;

int main()
{
	double h,w,r;
	cin>>h>>w>>r;
	Rectangle a(h,w);
	Triangle b(h,w);
	Circle c(r);
	cout<<a.getArea()<<" "<<a.getPerim()<<endl;
	cout<<b.getArea()<<" "<<b.getPerim()<<endl;
	cout<<c.getArea()<<" "<<c.getPerim()<<endl;
	system("pause");
	return 0;
}