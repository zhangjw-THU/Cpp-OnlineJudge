#ifndef RECT_H
#define RECT_H
#include"Point.h"
class Rect:public Point{
public:
	Rect(float x,float y,float w,float h)
	{
		initPoint(x,y);
		this->w=w;
		this->h=h;
	}
	void move(float nx,float ny){Point::move(nx,ny);}
	//float getx(){return Point::getx();}
	//float gety(){return Point::gety();}
	float getw(){return w;}
	float geth(){return h;}
private:
	float w,h;
};
#endif