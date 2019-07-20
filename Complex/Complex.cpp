#include"Complex.h"
#include<stdio.h>
void Complex::show()
{
	printf("%.2f + %.2fi\n",real,image);
}
void Complex::add(Complex c2)
{
	this->real+=c2.real;
	this->image+=c2.image;
}
	
