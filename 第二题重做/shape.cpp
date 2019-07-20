#include"shape.h"
#include<iostream>
#include<math.h>
using namespace std;

Rectangle::Rectangle(double a,double b)
{
	length=a;
	width=b;
}
double Rectangle::getArea(){
	return length*width;
}
double Rectangle::getPerim(){
	return (length+width)*2;
}


Circle::Circle(double r){
	radius=r;
}
double Circle::getArea(){
	return 3.1415926*radius*radius;
}
double Circle::getPerim(){
	return 2*3.1415926*radius;
}


Triangle::Triangle(double a,double b){
	btm=a;
	height=b;
}
double Triangle::getArea()
{
	return btm*height*0.5;
}
double Triangle::getPerim()
{
	return btm+height+sqrt(btm*btm+height*height);
}

