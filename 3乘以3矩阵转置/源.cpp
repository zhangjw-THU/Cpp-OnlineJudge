#include<iostream>
using namespace std;
int main()
{
	int n[3][3],i,j,t;
	for(i=1;i<=3;i++)
		for(j=1;j<=3;j++)
			cin>>n[i-1][j-1];
	for(i=0;i<3;i++)
		for(j=0;j<=i;j++)
		{
			t=n[i][j];
			n[i][j]=n[j][i];
			n[j][i]=t;
		}
		for(i=1;i<=3;i++)
		{
		for(j=1;j<=3;j++)
			cout<<n[i-1][j-1]<<" ";
		cout<<endl;
		}
	return 0;
}