#pragma once
#include <iostream>
using namespace std;
#include<string>
class vetement
{
	int ref;
	string libelle;
	double prix;
public:
	vetement(int r=0, string l="", double p=0)
	{
		ref = r;
		libelle = l;
		prix = p;
	}
	double getPrix()
	{
		return prix;
	}
	int getRef()
	{
		return ref;
	}
	friend istream& operator>>(istream&, vetement&);
	friend ostream& operator<<(ostream&, vetement&);
 ~vetement(void);
};


