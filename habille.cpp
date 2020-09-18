#include "habille.h"
istream& operator>>(istream& in, habille& h)
{
	vetement* q = &h;
	in >> *q;
	in >> h.taille;
	return in;
}
ostream& operator<<(ostream& out, habille& h)
{
	vetement* q = &h;
	out << *q;
	out << "\t,la taille:" << h.taille << endl;
	return out;

}

habille::~habille(void)
{

}
