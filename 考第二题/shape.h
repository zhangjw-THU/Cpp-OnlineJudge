#ifndef SHAPE_H
#define SHAPE_H
#include<iostream>
using namespace std;

class Shape{
public:
	virtual double getArea()=0;
	virtual double getPerim()=0;
};

class Rectangle:public Shape{
public:
	Rectangle(double h,double w);
	double getArea();
	double getPerim();
private:
	double height;
	double width;
};

class Circle:public Shape{
public:
	Circle(double r);
	double getArea();
	double getPerim();
private:
	double radius;
};

class Triangle:public Shape{
public:
	Triangle(double h,double b);
	double getArea();
	double getPerim();
private:
	double height;
	double bom;
};
#endif