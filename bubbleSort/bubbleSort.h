#include<iostream>
using namespace std;

#ifndef BUBBLESORT_H
#define BUBBLESORT_H

template<class T>
void mySwap(T &x,T &y)
{
	T temp;
	temp=x;
	x=y;
	y=temp;
}

template<class T>
bool LessThan(T&x,T&y){
	return x<y;
}

template<class T>
bool LessThan(T*&x,T*&y){
	return *x<*y;
}

template<class T>
void bubbleSort(T a[],int n){
	int i=n-1;
	while(i>0)
	{
		int lastExchangIndex=0;
		for(int j=0;j<i;j++)
			if(LessThan(a[j+1],a[j])){
				mySwap(a[j],a[j+1]);
				lastExchangIndex=j;
			}
			i=lastExchangIndex;
	}
}
#endif