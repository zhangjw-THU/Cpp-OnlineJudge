#include"matrix.h"
#include<iostream>
#include<stdlib.h>
using namespace std;

matrix::matrix(){
	int i,j;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			a[i][j]=rand()%101;
		}
	}
}

void matrix::change(){
	int i,j;
	int t;
	for(i=0;i<3;i++)
	{
		for(j=0;j<i;j++)
		{
			t=a[i][j];
			a[i][j]=a[j][i];
			a[j][i]=t;
		}
	}
}

void matrix::multi(matrix b)
{
	int i,j;
	int t[3][3]={0};
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			for(int k=0;k<3;k++)
			{
				t[i][j]+=a[i][k]*b.a[k][j];
			}
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			a[i][j]=t[i][j];
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