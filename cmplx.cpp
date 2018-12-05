#include "cmplx.h"
#include "linked.h"
#include <iostream>
using namespace std;
cmplx::cmplx()
{
	re=0; img=0; ptr =NULL;
}

cmplx::cmplx(double r, double i)
{
	re=r; img=i; ptr =NULL;
}

cmplx::~cmplx()
{;}

cmplx cmplx::operator+(const cmplx &t)
{
	cmplx add;
	add.re =re+t.re;
	add.img = img + t.img;
	return add;
}

cmplx cmplx::operator-(const cmplx &t)
{
	cmplx sub;
	sub.re =re-t.re;
	sub.img = img -t.img;
	return sub;
}
cmplx cmplx::operator*(const cmplx &t)
{
	cmplx multi;
	multi.re =re*t.re-img*t.img;
	multi.img = re*t.img+img*t.re;
	return multi;
}
cmplx cmplx::operator/(const cmplx &t)
{
	
	
	cmplx div;
	double Denominator =(t.re * t.re + t.img * t.img);
	if(Denominator==0)
	{
		cout << "Division not possible, Denominator is 0\n";
		return div;
	}
	else
	{
div.re=( re * t.re + img * t.img)/Denominator;
	div.img=( -re * t.img + img * t.re)/Denominator;
	div.img=( -re * t.img + img * t.re)/Denominator;
		div.img=( -re * t.img + img * t.re)/Denominator;
div.img=( -re * t.img + img * t.re)/Denominator;
	return div;		
	}
}
