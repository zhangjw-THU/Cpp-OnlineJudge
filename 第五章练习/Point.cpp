#include<iostream>
#include"Point.h"
using namespace std;

Point::Point()
{
	x=y=0;
	cout<<"build:("<<x<<","<<y<<")"<<endl;
}
Point::Point(int x,int y)
{
	this->x=x;
	this->y=y;
	cout<<"build:("<<x<<","<<y<<")"<<endl;
}
void Point::move(int nx,int ny)
{
	this->x=nx;
	this->y=ny;
	cout<<"build:("<<x<<","<<y<<")"<<endl;
}

Point::~Point()
{
	cout<<"destroy"<<endl;
}
Point::Point(Point&p)
{
	x=p.x;
	y=p.y;
}

