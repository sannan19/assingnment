/*#include <iostream>
#include "cmplx.cpp"
#include "linked.h"
using namespace std;

linklist:: linklist()
{
	head=NULL;
}

linklist:: ~linklist()
{;}
void linklist::insertend(cmplx t)
{
	cmplx* N =new cmplx;
	N->re = t.re;
	N->img=t.img;
	N->ptr=NULL;
	cmplx* temp=head;

	if (temp==NULL)
	{
		head=N;
	}
	
	else 
	{	
		while (temp->ptr!=NULL)
		{
			temp = temp->ptr; 
		}
	temp->ptr=N;
	}
}
void linklist::deletepos(int pos)
{
			cmplx *curent= head->ptr;
			cmplx *previous=head;
			int a=1;
			while(a<pos-1)
			{
				previous=previous->ptr;
				a++;
				curent = previous->ptr;
			}
			
			previous->ptr=curent ->ptr;
			delete curent;
}
void linklist::valuepos(cmplx t,int pos)
{
			cmplx *N=head;
			cmplx *N1=new cmplx;
			N1->re=t.re;
			N1->img=t.img;
			int a=1;
			while(a<pos-1)
			{
				N = N->ptr;
				a++;
			}
			N1->ptr=N->ptr;
			N->ptr=N1;
			
}
void linklist::valueafterpos(cmplx t,int pos)
{
	cmplx* N =head;
	cmplx* N1=new cmplx;	
	N1->re=t.re;
	N1->img=t.img;
	N1->ptr=NULL; 

	int a=1;
	while (a<pos)	
	{
		N=N->ptr;	
		a++;
	}
	N1->ptr=N->ptr;
	N->ptr=N1;
}
void linklist::traverse()
{
			cmplx *t=head;
			while (t!=NULL)
			{
				cout << t -> re << "+" << t->img <<"i\t";
				t = t ->ptr;
			}
			cout << endl;
}
*/