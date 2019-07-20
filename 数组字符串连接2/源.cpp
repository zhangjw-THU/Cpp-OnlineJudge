#include<iostream>
using namespace std;
int main()
{
	char s1[100],s2[100],s[100];
	int i,j,k;
	cin>>i>>j;
	cin>>s1;
	cin>>s2;
	for(k=0;k<i;k++)
		s[k]=s1[k];
	for(k=i;k<=i+j;k++)
		s[k]=s2[k-i];
	cout<<s<<endl;
	system("pause");
	return 0;
}