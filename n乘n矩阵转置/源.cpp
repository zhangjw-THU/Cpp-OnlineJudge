#include<iostream>
#include<malloc.h>
using namespace std;
void change(int**p,int n);
int main()
{
	int n,i,j;
	int**p;
	p=(int**)malloc(sizeof(int));
	cin>>n;
	for(i=0;i<n;i++)
		*(p+i)=(int*)malloc(sizeof(int)*n);
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			cin>>p[i][j];
	change(p,n);
	system("pause");
	return 0;
}
void change(int**p,int n)
{
	int i,j,t;
	for(i=0;i<n;i++)
		for(j=0;j<i;j++)
		{
			t=p[i][j];
			p[i][j]=p[j][i];
			p[j][i]=t;
		}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			cout<<p[i][j]<<" ";
		}
		cout<<endl;
	}
}