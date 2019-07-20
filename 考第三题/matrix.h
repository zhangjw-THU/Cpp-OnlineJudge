#ifndef MATRIX_H
#define MATRIX_H
#include<iostream>
#include<stdlib.h>
using namespace std;

class matrix{
public:
	int a[3][3];
public:
	matrix();
	void Change();
	void multi(int b[3][3]);
	void print();
};
#endif