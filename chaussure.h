#pragma once
#include "vetement.h"
class chaussure :
	public vetement
{
	int pointure;
public:
	chaussure(int r, string l, double p, int po):vetement(r,l,p)
	{
		pointure = po;
	}
	chaussure()
	{
		vetement v;
		pointure = 0;
	}
	friend istream& operator>>(istream&, chaussure&);
	friend ostream& operator<<(ostream&, chaussure&);
	~chaussure(void);
};

