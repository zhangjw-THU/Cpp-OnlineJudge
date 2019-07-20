#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
	int i,j,k;
	char*s1,*s2,*s;
	s1=(char*)malloc(sizeof(char));
	s2=(char*)malloc(sizeof(char));
	s=(char*)malloc(sizeof(char));
	cin>>i>>j;
	*s1=(char)malloc(sizeof(char)*(i+1));
	*s2=(char)malloc(sizeof(char)*(j+1));
	*s=(char)malloc(sizeof(char)*(i+j+1));
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

	