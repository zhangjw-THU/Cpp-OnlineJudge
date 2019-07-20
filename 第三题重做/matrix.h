#ifndef MATRIX_H
#define MATRIX_H

class matrix{
private:
	int a[3][3];
public:
	matrix();
	void change();
	void multi(matrix b);
	void print();
};
#endif