#ifndef cmplx_H
#define cmplx_H

class cmplx
{
public:
	double re, img;
	cmplx* ptr;

	cmplx();
	cmplx(double r, double i);
	~cmplx();
	cmplx operator+(const cmplx &rhs);
	cmplx operator-(const cmplx &rhs);
	cmplx operator*(const cmplx &rhs);
	cmplx operator/(const cmplx &rhs);
};


#endif