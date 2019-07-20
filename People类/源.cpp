#include<iostream>
#include<stdint.h>
#include<string>
using  namespace std;

class date{
private:
	int year,month,day;
public:
	friend class people;
	date(int x=0,int y=0,int z=0)
	{
		year=x;
		month=y;
		day=z;
	}
	date(date&d);
	void setdate();
	void showdate();
};
date::date(date&d){
	year=d.year;
	month=d.month;
	day=d.day;
}
void date::setdate(){
	int a,b,c;
	scanf("%d-%d-%d",&a,&b,&c);
	year=a;
	month=b;
	day=c;
}
void date::showdate()
{
	cout<<"出生日期： "<<year<<"-"<<month<<"-"<<day<<endl;
	//"-"用的是中文的
}

class people{
private:
	string number;
	string idnumber;
	char sex;
	date birthday;
public:
	people(date bd,string nb,string idnb,char sx);
	people(people&p);
	void setpeople();
	void showpeople();
};
people::people(date bd,string nb="0",string idnb="0",char sx='M'):birthday(bd){
	birthday=bd;
	number=nb;
	idnumber=idnb;
	sex=sx;
}
people::people(people&p):birthday(p.birthday){
	number=p.number;
	birthday=p.birthday;
	sex=p.sex;
	idnumber=p.idnumber;
}
void people::setpeople(){
	date a;
	string b;
	string c;
	char d;
	cin>>b;
	cin>>d;
	a.setdate();
	cin>>c;
	birthday=a;
	number=b;
	sex=d;
	idnumber=c;
}
void people::showpeople()
{
	long int j1,j2,j3;
	j1=(int)(idnumber[6]-48)*1000+(idnumber[7]-48)*100+(idnumber[8]-48)*10+idnumber[9]-48;
	j2=(int)(idnumber[10]-48)*10+(idnumber[11]-48);
	j3=(int)(idnumber[12]-48)*10+(idnumber[13]-48);
	if(birthday.day!=j3||birthday.month!=j2||birthday.year!=j1)
	{
		cout<<"出生日期与身份证信息不符！"<<endl;
	}
	{
	cout.fill('0');
	cout.width(3);
	cout<<"成员编号： "<<number<<endl;
	}
	cout<<"性别： ";
	if(sex=='M')
		cout<<"男"<<endl;
	else
		cout<<"女"<<endl;
	birthday.showdate();
	cout<<"身份证号： "<<idnumber<<endl;
}

int main()
{
	date b;
	people man(b,"0","0",'M');
	man.setpeople();
	man.showpeople();
	system("pause");
	return 0;
}


