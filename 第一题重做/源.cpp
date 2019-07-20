#include<iostream>
using namespace std;

struct node{
	int*date;
	int len;
};
int main()
{
	void delall(node&l);
	int n,i;
	cin>>n;
	node l;
	l.date=(int*)malloc(n*sizeof(int));
	l.len=n;
	for(i=0;i<n;i++)
	{
		cin>>l.date[i];
	}
	delall(l);
	for(i=0;i<l.len;i++)
		cout<<l.date[i];
	system("pause");
	return 0;
}

void delall(node &l)
{
	int i=0,j;
	int x;
	cin>>x;
	while(i<l.len&&l.date[i]!=x)
		i++;
	for(j=i+1;j<l.len;j++)
		if(l.date[j]!=x)
		{
			l.date[i]=l.date[j];
			i++;
		}
		l.len=i;
}