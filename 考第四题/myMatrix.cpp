#include<iostream>
#include<stdlib.h>
#include<stdexcept>
#include"myMatrix.h"
using namespace std;
int random(int x)
{
	return (rand()%(x+1));
}

int myMatrix::count=0;
myMatrix::myMatrix(){
	M=5;N=5;
	int i;
	list=new int [5*5];
	if(list==0)
		throw  ("failure!");
	for( i=0;i<25;i++)
		list[i]=random(100);
	count++;
}

myMatrix::myMatrix(int m){
	N=m;
	M=m;
	list=new int [m*m];
	if(list==0)
		throw  ("failure!");
	int i;
	for(i=0;i<m*m;i++)
	{
		list[i]=random(100);
	}
	count++;
}

myMatrix::myMatrix(int m,int n){
	M=m;
	N=n;
	list=new int [M*N];
	if(list==0)
		throw  ("failure!");
	int i;
	for(i=0;i<m*n;i++)
		list[i]=random(100);
	count++;
}

myMatrix::~myMatrix(){
	count--;
	delete [] list;
}

myMatrix::myMatrix(myMatrix&a)
{
	count++;
	M=a.M;
	N=a.N;
	int i;
	list=new int [M*N];
	for( i=0;i<M*N;i++)
	{
		list[i]=a.list[i];
	}
}

int&myMatrix::element(int x,int y){
	if((M*x+y)<M*N)
	{
	return list[M*x+y];
	}
	else
		throw out_of_range("invaild position");
}

int&myMatrix::element(int x,int y)const{
	if(M*x+y<M*N)
	{
	return list[M*x+y];
	}
	else
		throw out_of_range("invaild position");
}

myMatrix& myMatrix::operator=(const myMatrix&rhs)
{
	if(M*N!=rhs.M*rhs.N){
		delete [] list;
		M=rhs.M;
		N=rhs.N;
		list=new int [M*N];
	}
		for(int i=0;i<N*M;i++)
			list[i]=rhs.list[i];
	return *this;
}

bool myMatrix::operator==(const myMatrix&rhs)
{
	int t=0;
	if(M!=rhs.M||N!=rhs.N)
		return 0;
	else{
		for(int i=0;i<M*N;i++)
		{
			if(list[i]!=rhs.list[i])
			{
				t=1;
				break;
			}
		}
		if(t==1)
			return 0;
	}
	return 1;
}

void myMatrix::cahnge(){
	int t;
	for(int i=0;i<M;i++)
	{
		for(int j=0;j<N;j++)
			{
				t=list[i*M+j];
				list[i*M+j]=list[j*N+i];
				list[j*N+i]=t;
		}
	}
	t=M;
	M=N;
	N=t;
}

myMatrix & myMatrix::operator*(const myMatrix&rhs){
	int*a;
	if(N!=rhs.M)
		exit(1);
	a=new int[M*rhs.N];;
	for(int i=0;i<M;i++)
		for(int j=0;j<rhs.N;j++)
		{
			a[i*M+j]=0;
		}
	for(int i=0;i<M;i++)
		for(int j=0;j<rhs.N;j++)
		{
			for(int k=0;k<N;k++)
			{

				a[i*M+j]=a[i*M+j]+list[i*N+k]*rhs.list[k*rhs.M+j];
			}
		}
	delete [] list;
	N=rhs.N;
	list=new int [M*rhs.N];
	for(int i=0;i<M*rhs.N;i++)
	list[i]=a[i];
	return *this;
}

myMatrix & myMatrix::operator++(){
	int i;
	for(i=0;i<M*N;i++)
	{
		list[i]++;
	}
	return *this;
}

myMatrix myMatrix::operator++(int)
{
	myMatrix old=*this;
	++(*this);
	return old;
}






