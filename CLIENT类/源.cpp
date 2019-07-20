#include<iostream>
#include<string>
using namespace std;

class CLIENT
{
public:
	static string ServerName;
	static int ClientNum;
	static void ChangeServerName(string Nname){
		ServerName=Nname;
	}
	void show(){
		cout<<"服务器名称： "<<ServerName<<endl;
		cout<<"客户数量： "<<ClientNum<<endl;
	}
};
int CLIENT::ClientNum=0;
string CLIENT::ServerName="Server1";

int main()
{
	int n,i,j;
	string s,t;
	CLIENT p;
	p.show();
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>t;
		if(t=="rename")
		{
			cin>>s;
			p.ChangeServerName(s);
			p.show();
		}
		else{
			if(t=="add")
			{
				cin>>j;
				p.ClientNum=p.ClientNum+j;
				if(p.ClientNum>100000)
					p.ClientNum=100000;
				p.show();
			}
			else
			{
				if(t=="sub")
				{
					cin>>j;
					p.ClientNum=p.ClientNum-j;
					if(p.ClientNum<0)
						exit(0);
					p.show();
				}
			}
		}
	}
		system("pause");
		return 0;
}



