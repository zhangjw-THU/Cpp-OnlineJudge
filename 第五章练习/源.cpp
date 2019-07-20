#include<iostream>
#include"Point.h"
using namespace std;
class Apoints{
public:
	Apoints(int size):size(size){
		points=new Point[size];
	}
	~Apoints(){
		cout<<"delet...."<<endl;
		delete[] points;
	}
private:
	Point*points;
	int size;
};
int main()
{
	{
	Point a[3];
	for(int i=0;i<3;i++)
		a[i].move(i+10,i*10+8);
	}
	cout<<"step one:"<<endl;
	Point*c=new Point[2];
	c[0].move(2,8);
	c[2].move(7,5);
	delete [] c;
	Apoints points(2);
	//points.element(0).

	system("pause");
	return 0;
}
