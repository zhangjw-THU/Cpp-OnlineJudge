#include"matrix.h"
#include<iostream>
using namespace std;

int main()
{
	matrix a,b;
	a.print();
	b.print();
	a.multi(b);
	a.print();
	a.change();
	a.print();
	system("pause");
	return 0;
}