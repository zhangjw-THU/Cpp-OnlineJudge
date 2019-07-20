#include<iostream>
#include"bubbleSort.h"
using namespace std;

int main()
{
	int date[]={1,4,7,8,5,2,2,0,3,6,9};
	int*p[11];
	for(int i=0;i<11;i++)
	{
		p[i]=&date[i];
	}
	bubbleSort(p,11);
	for(int i=0;i<11;i++)
		cout<<*p[i];
	bubbleSort(date,11);
	for(int i=0;i<11;i++)
		cout<<date[i];

	system("pause");
	return 0;
}