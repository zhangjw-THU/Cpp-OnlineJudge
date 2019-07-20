#include"myMatrix.h"
#include<iostream>
#include<stdlib.h>
using namespace std;
int myMatrix::count=0;
myMatrix::myMatrix(){
	M=3;N=3;
	list=new int [N*M];
	if(list==NULL)
		throw ("申请内存失败");
	for(int i=0;i<M;i++)
		for(int j=0;j<N;j++)
		{
			list[i*N+j]=rand()%101;
		}
		count++;
}

myMatrix::myMatrix(int m){
	M=m;
	N=m;
	list=new int [N*M];
	if(list==NULL)
		throw ("申请内存失败");
	for(int i=0;i<M;i++)
		for(int j=0;j<N;j++)
		{
			list[i*N+j]=rand()%101;
		}
		count++;
}

myMatrix::myMatrix(int m,int n){
	M=m;
	N=n;
	list=new int [N*M];
	if(list==NULL)
		throw ("申请内存失败");
	for(int i=0;i<M;i++)
		for(int j=0;j<N;j++)
		{
			list[i*N+j]=rand()%101;
		}
		count++;
}

myMatrix::~myMatrix(){
	delete [] list;
	count--;
}

myMatrix::myMatrix(myMatrix&a){
	M=a.M;
	N=a.N;
	list=new int [N*M];
	for(int i=0;i<M;i++)
		for(int j=0;j<N;j++)
		{
			list[i*N+j]=a.list[i*N+j];
		}
}

int& myMatrix::element(int x,int y){
	if(x>=M||y>>N)
		throw "下标越界";
	return list[x*N+y];
}
int myMatrix::element(int x,int y)const{
	if(x>=M||y>=N)
		throw("下标越界");
	return list[x*N+y];
}

myMatrix& myMatrix::operator=(const myMatrix&a){
	if(list!=NULL)
		delete [] list;
	M=a.M;
	N=a.N;
	list=new int [M*N];
	for(int i=0;i<M;i++)
		for(int j=0;j<N;j++)
		{
			list[i*N+j]=a.list[i*N+j];
		}
		return *this;
}

bool myMatrix::operator==(const myMatrix&a){
	if(M!=a.M||N!=a.N)
		return false;
	else
	{
		for(int i=0;i<M;i++)
		for(int j=0;j<N;j++)
		{
			if(list[i*N+j]=!a.list[i*N+j])
				return false;
		}
	}
	return true;
}

void myMatrix::change(){
	int t;
	int *p=new int [N*M];
	for(int i=0;i<M;i++)
		for(int j=0;j<N;j++)
		{
			p[j*M+i]=list[i*N+j];
		}
	t=M;
	M=N;
	N=t;
	for(int i=0;i<M;i++)
		for(int j=0;j<N;j++)
		{
			list[i*N+j]=p[i*N+j];
		}
	delete [] p;
}

myMatrix myMatrix::operator*(const myMatrix&a){
	int*p=new int [M*a.N];
	for(int i=0;i<M;i++)
		for(int j=0;j<a.N;j++)
		{
			p[i*a.N+j]=0;
		}
	for(int i=0;i<M;i++)
		for(int j=0;j<a.N;j++)
		{
			for(int k=0;k<N;k++)
				p[i*a.N+j]+=list[i*N+k]*a.list[k*a.M+j];
		}
	N=a.N;
	delete [] list;
	list=new int [M*N];
	for(int i=0;i<M;i++)
		for(int j=0;j<N;j++)
		{
			list[i*N+j]=p[i*N+j];
		}
	delete [] p;
	return *this;
}

myMatrix& myMatrix::operator++(){
	for(int i=0;i<M;i++)
		for(int j=0;j<N;j++)
		{
			list[i*N+j]++;
		}
	return *this;
}

myMatrix myMatrix::operator++(int){
	myMatrix b=*this;
	++(*this);
	return b;
}


void myMatrix::print(){
	for(int i=0;i<M;i++)
	{
		for(int j=0;j<N;j++)
		cout<<list[i*N+j]<<" ";
	
	cout<<endl;
	}
	cout<<endl;
}
	
