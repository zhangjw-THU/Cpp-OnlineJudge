#include<iostream>
#include"CC.h"
using namespace std;
int main()
{
	float radius;
	cin>>radius;
	Circle p(radius);
	cout<<p.getArea()<<endl;
	system("pause");
	return 0;
}

