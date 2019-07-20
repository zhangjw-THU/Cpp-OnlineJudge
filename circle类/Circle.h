#ifndef CIRCLE_H
#define CIRCLE_H
class Circle{
public:
	Circle(const float& radius)
	{
		this->radius=radius;
	}
	~Circle(){
	}
	float getArea(){
		return 3.14*radius*radius;
	}
private:
	float radius;
};
#endif