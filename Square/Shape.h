#ifndef SHAPE_H
#define SHAPE_H

class Shape{
public:
	virtual float getArea()=0;
	virtual float getPerim()=0;
	virtual int getVertexCount()=0;
};

class Rectangle:public Shape{
private:
	float width,height;
public:
	Rectangle();
	Rectangle(const float& width,const float& height){
		this->width=width;
		this->height=height;
	}
	int getVertexCount(){
		return 4;
	}
	float getArea(){
		return width*height;
	}
	float getPerim()
	{
		return 2*width+2*height;
	}
};

class Circle:public Shape{
private:
	float radius;
public:
	int getVertexCount(){return 0;}
	Circle(const float&radius)
	{
		this->radius=radius;
	}
	float getArea(){
		return 3.1415926*radius*radius;
	}
	float getPerim(){
		return 3.1415926*2*radius;
	}
};

class Square:public Rectangle{
private:
	float width;
public:
	Square(float widt)
	{
		this->width=widt;
	}
	int getVertexCount(){return 4;}
};

#endif