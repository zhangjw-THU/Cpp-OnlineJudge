#include<iostream>
#include"shape.h"
using namespace std;

int main()
{
	double a,b;
	cin>>a>>b;
	Rectangle c(a,b);
	Circle y(a);
	Triangle s(a,b);
	cout<<c.getArea()<<endl<<y.getPerim()<<endl<<s.getArea()<<endl;
	system("pause");
	return 0;
}
	