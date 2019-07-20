#include<iostream>
#include<stdlib.h>
using namespace std;

class myMatrix{
private:
	int*list;
	int M,N;
public:
	static int count;
	myMatrix();
	myMatrix(int M);
	myMatrix(int M,int N);
	~myMatrix();
	myMatrix(myMatrix &a);
	int&element(int x,int y);
	int&element(int x,int y) const;
	myMatrix& operator =(const myMatrix&rhs);
	bool operator==(const myMatrix&rhs);
	void cahnge();
	myMatrix& operator *(const myMatrix&rhs);
	myMatrix&operator++();
	myMatrix operator++(int);
};
class Node{
private:
	myMatrix*valye;
	Node*next;
public:
	int ave;
}

