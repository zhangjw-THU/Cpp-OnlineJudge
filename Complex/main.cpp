#include"Complex.h"
#include<iostream>
int main()
{
	Complex c1(3,5);
	Complex c2=4.5;
	c1.show();
	c1.add(c2);
	c1.show();
	system("pause");
	return 0;
}