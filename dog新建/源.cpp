#include<iostream>
#include<string>
#include"Dog.h"
#include<fstream>
#include"test.h"
using namespace std;
int main()
{
	string s1,s2;
	Dog dog1(5,10);
	cin>>s1>>s2;
	ofstream fout;
	ifstream fint;
	fout.open(s1);
	fout<<dog1.itsweight<<"\n"<<dog1.itsage<<endl;
	fout.close();
	Dog dog2(0,0);
	fint.open(s1);
	fint>>dog2.itsweight>>dog2.itsage;
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