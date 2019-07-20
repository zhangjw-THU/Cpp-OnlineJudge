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
	cout<<year<<"-"<<month<<"-"<<day;
	//"-"用的是中文的
}

class people{
public:
	string number;
	string idnumber;
	char sex;
	date birthday;
	//people();
	people(){};
	people(date bd,string nb,string idnb,char sx);
	people(people&p);
	void setpeople();
	void showpeople();
	friend int operator==(people&a,people&b);
	people &operator=(people&c);
		//people d;
		//d.birthday=c.birthday;
		//d.idnumber=c.idnumber;
		//d.number=c.number;
		//d.sex=c.sex;
		//return people(c.birthday,c.number,c.idnumber,c.sex);
	

};
people &people::operator=(people&c)
{
	birthday=c.birthday;
	idnumber=c.idnumber;
	number=c.number;
	sex=c.sex;
	return*this;
	//return people(c.birthday,c.number,c.idnumber,c.sex);
}
int operator==(people&a,people&b)
{
	if(a.idnumber==b.idnumber)
		return 1;
	else return 0;
}
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
		//cout<<"出生日期与身份证信息不符！"<<endl;
	}
	{
	//.fill('0');
	//cout.width(3);
	cout<<number;
	}
	cout<<" ";
	if(sex=='M')
		cout<<"M ";
	else
		cout<<"F ";
	birthday.showdate();
	cout<<" "<<idnumber<<endl;
}

//template<class T>
void mySwap(people&x,people&y){
	people temp=x;
	x=y;
	y=temp;
}

//template<class T>
void selecationSort(people a[],int n){

	for(int i=0;i<n-1;i++){
		int leastIndex=i;
		for(int j=i+1;j<n;j++)
			if(a[j].number<a[leastIndex].number)
				leastIndex=j;
		mySwap(a[i],a[leastIndex]);
	}
}

//template<class T>
int search(people list[],int n,string &key){
	for(int i=0;i<n;i++)
	{
		if(list[i].number==key)
			return i;
	}
	return -1;
}

int main()
{
	people a[5];
	for(int i=0;i<5;i++)
	{
		a[i].setpeople();
	}
	string sh;
	cin>>sh;
	selecationSort(a,5);
	for(int i=0;i<5;i++)
		a[i].showpeople();
	int j=search(a,5,sh);
	if(j==-1)
	{
		cout<<"null"<<endl;
	}
	else{
		a[j].showpeople();
	}
	system("pause");
	return 0;
}

	
