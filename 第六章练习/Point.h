#ifndef POINT_H
#define POINT_H
class Point 
{
public:
	void initPoint(float x=0,float y=0)
	{
		this->x=x;
		this->y=y;
	}
	void move(float nx,float ny)
	{
		x+=nx;
		y+=ny;
	}
	float getx(){return x;}
	float gety(){return y;}
private:
	float x,y;
};
#endif