#pragma once
#include "vetement.h"
class habille :
	public vetement
{
	int taille;
public:
	habille()
	{
		vetement v;
		taille = 0;
	}
	habille(int r,string l,double p, int t) :vetement(r,l,p)
	{
		taille = t;
	}
	~habille(void);
	friend istream& operator>>(istream&, habille&);
	friend ostream& operator<<(ostream&, habille&);
	
};

