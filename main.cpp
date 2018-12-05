#include <iostream>
#include "cmplx.h"
#include "linked.h"
using namespace std;
int main()
{
	cmplx c1(4,5);
	cmplx c2(3,-3);
	cmplx c3(4,3);
	cmplx c4;
	//linklist l;
	cout << "first complex number:\n" << c1.re << "+"<<c1.img<<"i" << endl;
	cout << "second complex number:\n" << c2.re << "+"<<c2.img << "i"<< endl;
	cout << "third complex number:\n" << c3.re << "+"<< c3.img << "i"<< endl;
	c4=c1+c2;
	cout << "Addition of 1 and 2 complex numbers is:\n" << c4.re << "+" << c4.img << "i" << endl;
	//l.insertend(c1+c2);
	//l.traverse();
	c4=c1-c3;
	cout << "Subtraction of 1 and 3 complex numbers is:\n" << c4.re << "+" << c4.img << "i" << endl;
	//l.insertend(c1-c3);
	//l.traverse();
	c4=c2*c3;
	cout << "Multiplication of 2 and 3 complex numbers is:\n" << c4.re << "+" << c4.img << "i" << endl;
	//l.insertend(c2*c3);
	//l.traverse();
	c4=c1/c3;
	cout << "Division of 1 and 3 complex numbers is:\n" << c4.re << "+" << c4.img << "i" << endl;
	//l.insertend(c1/c3);
	//l.traverse();
	//l.deletepos(4);
	//l.traverse();
	//l.valuepos(c1/c3,4);
	//l.traverse();
	cout << endl;
	return 0;
}
