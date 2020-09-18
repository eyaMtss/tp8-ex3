#pragma once
#include<iostream>
using namespace std;
template< class T,class U>
class tenue
{
	T pair1;
	U pair2;
	double prix;
public:
	tenue(T,U);
	friend istream& operator>> <>(istream&, tenue<T, U>&);
	friend ostream& operator<< <>(ostream&, tenue<T, U>&);
	void operator-(int);
	double getPrix()
	{
		return prix;
	}
};
template< class T, class U>
tenue<T, U>::tenue(T t,U u)
{
	pair1 = t;
	pair2 = u;
}
template< class T, class U>
istream& operator>> (istream& in, tenue<T,U>& t)
{
	in >> t.pair1;
	in >> t.pair2;
	return in;
}
template< class T, class U>
ostream& operator<< (ostream& out, tenue<T, U>& t)
{
	out << "pair1:  " << t.pair1 << "\npair2:  " << t.pair2 << endl;
	return out;
}
template< class T, class U>
void tenue<T, U>::operator-(int i)
{
	prix - i;
}