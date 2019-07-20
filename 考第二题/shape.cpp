#include<iostream>
#include<math.h>
#include"shape.h"
using namespace std;

Rectangle::Rectangle(double h,double w){
	height=h;
	width=w;
}
double Rectangle::getArea()
{
	return height*width;
}
double Rectangle::getPerim()
{
	return 2*(width+height);
}

Circle::Circle(double r){
	radius=r;
}
double Circle::getArea()
{
	return 3.1415926*radius*radius;
}
double Circle::getPerim()
{
	return 2*3.1415926*radius;
}

Triangle::Triangle(double h,double b){
	height=h;
	bom=b;
}
double Triangle::getArea()
{
	return 0.5*bom*height;
}
double Triangle::getPerim()
{
	double t=sqrt(height*height+bom*bom);
	return t+height+bom;
}