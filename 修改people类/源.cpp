#include<iostream>
#include<stdint.h>
#include<string.h>
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
	cout<<"出生日期： "<<year<<"-";//<<month<<"-"<<day<<endl;
	if(month<=9)
		cout<<0<<month;
	else
		cout<<month;
	cout<<"-";
	if(day<=9)
		cout<<0<<day;
	else
		cout<<day;
	cout<<endl;
	//"-"用的是中文的
}

class people{
private:
	char name[11];
	char number[7];
	char idnumber[20];
	char sex[7];
	date birthday;
public:
	people(date bd,char* nb,char*idnb,char*sx);
	people(people&p);
	void setpeople();
	void showpeople();
};
people::people(date bd,char*nb,char*idnb,char*sx):birthday(bd){
	birthday=bd;
	strcpy(number,nb);
	strcpy(idnumber,idnb);
	strcpy(sex,sx);
}
people::people(people&p):birthday(p.birthday){
	strcpy(number,p.number);
	birthday=p.birthday;
	strcpy(sex,p.sex);
	strcpy(idnumber,p.idnumber);
}
void people::setpeople(){
	date a;
	char n[11];
	char b[7];
	char c[20];
	char d[7];
	cin>>n;
	strcpy(name,n);
	cin>>b;
	cin>>d;
	a.setdate();
	cin>>c;
	birthday=a;
	strcpy(number,b);
	strcpy(sex,d);
	strcpy(idnumber,c);
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
	cout<<"成员姓名： "<<name<<endl;
	{
	//cout.fill('0');
	//cout.width(3);
	cout<<"成员编号： "<<number<<endl;
	}
	cout<<"性别： ";
	if(strcmp(sex,"male")==0)
		cout<<"男"<<endl;
	else
		cout<<"女"<<endl;
	birthday.showdate();
	cout<<"身份证号： "<<idnumber<<endl;
}

int main()
{
	date b;
	people man(b,"0","0","m");
	man.setpeople();
	man.showpeople();
	system("pause");
	return 0;
}


