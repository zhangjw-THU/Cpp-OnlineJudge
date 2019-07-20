#include<iostream>
#include"RECT.h"
#include<cmath>
using namespace std;

int main()
{
	Rect r(2,3,20,30);
	r.move(5,8);
	cout<<r.geth()<<endl<<r.getw()<<endl<<r.getx()<<endl<<r.gety()<<endl;
	system("pause");
	return 0;
}