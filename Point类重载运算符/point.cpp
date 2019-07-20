#include<iostream>
using namespace std;

class Point{
public:
	Point(int nx,int ny){x=nx;y=ny;}
	Point& operator++(){
		x++;
		y++;
		return*this;
	}
	Point& operator--(){
		x--;
		y--;
		return*this;
	}
	void show(){cout<<x<<" "<<y<<endl;}
private:
	int x,y;
};
int main()
{
	int a,b,j;
	cin>>j>>a>>b;
	Point p(a,b);
	if(j==1)
	{
		++p;
		p.show();
	}
	else
	{
		--p;
		p.show();
	}
	system("pause");
	return 0;
}