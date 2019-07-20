#include<iostream>
using namespace std;

class Animal{
public:
	int age;
};

class dog:public Animal{
public:
	void SetAge(int n)
	{
		age=n;
	}
private:
	int n;
};

int main()
{
	dog p;
	return 0;
}
