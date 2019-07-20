#ifndef POINT_H
#define POINT_H

class Point{
public:
	Point();
	Point(int x,int y);
	Point(Point&p);
	~Point();
	void move(int nx,int ny);
	int getx()const {return x;}
	int gety()const {return y;}
	static void show();
private:
	int x,y;
};

#endif