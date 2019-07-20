#include<iostream>
#include<string.h>
using namespace std;

class Employee
{
private:
	char name[30];
	char street[30];
	char city[18];
	char zip[10];
public:
	Employee(char*n,char*str,char*ct,char*z);
	void change_name(char*n);
	void display();
};
Employee::Employee(char*n,char*str,char*ct,char*z)
{
	strcpy(name,n);
	strcpy(street,str);
	strcpy(city,ct);
	strcpy(zip,z);
}
void Employee::change_name(char*n)
{
	strcpy(name,n);
}
void Employee::display()
{
	cout<<"������ "<<name<<endl;
	cout<<"���У� "<<city<<endl;
	cout<<"�ֵ���ַ�� "<<street<<endl;
	cout<<"�ʱࣺ "<<zip<<endl;
}

int main()
{
	char name[30];
	char street[30];
	char city[18];
	char zip[10];
	cin>>name;
	cin>>city;
	cin>>street;
	cin>>zip;
	Employee man(name,street,city,zip);
	man.display();
	cin>>name;
	man.change_name(name);
	man.display();
	system("pause");
	return 0;
}