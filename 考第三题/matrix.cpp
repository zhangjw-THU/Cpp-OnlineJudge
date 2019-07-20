#include<iostream>
#include<stdint.h>
#include"matrix.h"
using namespace std;

int random(int x)
{
	return (rand()%(x+1));
}

matrix::matrix(){
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			a[i][j]=random(10);
		}
	}
}

void matrix::Change(){
	int t;
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<i;j++)
		{
			t=a[i][j];
			a[i][j]=a[j][i];
			a[j][i]=t;
		}
	}
}

void matrix::multi(int b[3][3])
{
	int i,j,k,t;
	int c[3][3];
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			c[i][j]=a[i][0]*b[0][j]+a[i][1]*b[1][j]+a[i][2]*b[2][j];
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			a[i][j]=c[i][j];
		}
	}
}

void matrix::print(){
	int i,j;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
}
