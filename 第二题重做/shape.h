#ifndef SHAPE_H
#define SHAPE_H
#include<iostream>
using namespace std;

class shape{
public:
	virtual double getArea()=0;
	virtual double getPerim()=0;
};

class Rectangle:public shape{
public:
	Rectangle(double a,double b);
	double getArea();
	double getPerim();
private:
	double length;
	double width;
};

class Circle:public shape{
public:
	Circle(double r);
	double getArea();
	double getPerim();
private:
	double radius;
};

class Triangle:public shape{
public:
	Triangle(double a,double b);
	double getArea();
	double getPerim();
private:
	double btm;
	double height;
};

#endif
