#include<iostream>
#include<string>
#include<fstream>
#include"test.h"
using namespace std;
class Dog{
public:
	Dog(int weight,int age):
		itsweight(weight),itsage(age){
	}
	~Dog(){
	}

	int getweight(){
		return itsweight;
	}
	void setweight(int weight){
		itsweight=weight;
	}

	int getage(){
		return itsage;
	}

	void setage(int age){
		itsage=age;
	}
private:
	int itsweight;
	int itsage;
};
int main()
{
	string s1,s2;
	Dog dog1(5,10);
	cin>>s1>>s2;
	ofstream fout;
	ifstream fint;
	fout.open(s1);
	fout.write((char*)&dog1,sizeof dog1);
	fout.close();
	Dog dog2(0,0);
	fint.open(s1);
	fint.read((char*)&dog2,sizeof dog2);
	fint.close();

	ofstream fou(s2,ios::binary);
	fou.write((char*)(&dog1),sizeof(dog1));
	fou.close();
	ifstream fin(s2,ios::binary);
	fin.read((char*)(&dog2),sizeof(dog2));
	fin.close();
	system("pause");
	test();
	return 0;
}