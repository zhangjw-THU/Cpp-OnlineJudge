#include<iostream>
using namespace std;
int main()
{
	char j;
	int a,b,c,i=2,k=1;
	cin>>j;
	if(j=='w')
	{
		while(i<=100)
		{
			for(k=2;k<=i;k++)
			{
				if(i%k==0)
					break;
			}
			if(k==i)
				cout<<i<<endl;
			i++;
		}
	}
	else
	{
		if(j=='d')
		{
			do
			{
				for(k=2;k<=i;k++)
					if(i%k==0)
						break;
				if(k==i)
					cout<<i<<endl;
				i++;
			}
			while(i<=100);
		}
		else
		{
			if(j=='f')
				for(i=2;i<=100;i++)
				{
					for(k=2;k<=i;k++)
						if(i%k==0)
							break;
					if(i==k)
						cout<<i<<endl;
				}
		}
	}
	cin>>a;
	return 0;
}
