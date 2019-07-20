#include"matrix.h"
#include<iostream>
using namespace std;

int main()
{
	matrix a,b;
	int c[3][3];
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			c[i][j]=b.a[i][j];
		}
	}
	cout<<"a:"<<endl;
	a.print();
	cout<<"b:"<<endl;
	b.print();
	cout<<"a change:"<<endl;
	a.Change();
	a.print();
	cout<<"a*b:"<<endl;
	a.multi(c);
	a.print();
	system("pause");
	return 0;
}

