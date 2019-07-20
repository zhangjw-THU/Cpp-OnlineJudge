#ifndef COMPLEX
#define COMPLEX

class Complex
{
public:
	Complex(double r,double i):
		real(r),image(i){
	}
	Complex(double r):
		real(r),image(0){
	}
	void show();
	void add(Complex c2);
private:
	double real;
	double image;
};
#endif
