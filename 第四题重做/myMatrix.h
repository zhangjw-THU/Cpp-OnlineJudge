#ifndef MYMATRIX_H
#define MYMATRIX_H
#include<iostream>
using namespace std;

class myMatrix
{
private:
	int M;
	int N;
	int* list;
	static int count;
public:
	myMatrix();
	myMatrix(int m);
	myMatrix(int m,int n);
	~myMatrix();
	myMatrix(myMatrix &a);
	int &element(int x,int y);
	int element(int x,int y) const;
	myMatrix&operator=(const myMatrix&a);
	bool operator==(const myMatrix&a);
	void change();
	myMatrix operator*(const myMatrix&a);
	myMatrix&operator++();
	myMatrix operator++(int);
	void print();
};
class Node
{
private:
	myMatrix*value;
	Node*next;
public:
	double ave;

};
#endif