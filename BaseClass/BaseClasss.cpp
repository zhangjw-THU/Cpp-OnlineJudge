#include<iostream>
using namespace std;
class BaseClass{
public:
	BaseClass(){cout<<"BaseClass Construct"<<endl;}
	~BaseClass(){cout<<"BaseClass Destroy"<<endl;}
};
class DerivedClass:public BaseClass{
public:
	DerivedClass(){cout<<"DerivedClass Construct"<<endl;}
	~DerivedClass(){cout<<"DerivedClass Destroy"<<endl;}
};
int main()
{
	{
	DerivedClass a;
	}
	system("pause");
	return 0;
}