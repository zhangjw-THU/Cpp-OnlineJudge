#include<iostream>
using namespace std;
int main()
{
	int n,i,j;
	cin>>n;
	for(i=2,j=1;i<=n;i++)
	{
		if(n%i==0)
			j=j+1;
	}
	if(j==2)
	{
		cout<<n<<"������"<<endl;
	}
	else
	{
		cout<<n<<"���������������Ա�����������"<<endl;
		for(i=2;i<n;i++)
			if(n%i==0)
				cout<<i<<endl;
	}
	system("pause");
	return 0;
}


