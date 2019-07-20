#include<iostream>
#include"Rect.h"
using namespace std;
int main()
{
	Rect rect(100,20,50,80);
	cout<<"Area:"<<rect.getArea()<<endl;
	rect.setTop(200);
	rect.setLeft(50);
	rect.setBottom(20);
	rect.setRight(200);
	cout<<rect.getArea()<<endl;
	system("pause");
	return 0;
}
