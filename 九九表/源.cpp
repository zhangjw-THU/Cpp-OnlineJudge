#include<iostream>
using namespace std;
int main()
{
	int i,j;
	for(i=1;i<=9;i++)
	{
		for(j=1;j<=i;j++)
		{
			cout<<i<<"*"<<j<<"=";
			if((i*j)<10)cout<<" ";
			cout<<i*j<<"  ";
		}
		cout<<endl;
	}
	system("pause");
	return 0;
}