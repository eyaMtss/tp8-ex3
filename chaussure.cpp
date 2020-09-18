#include "chaussure.h"
istream& operator>>(istream& in, chaussure& c)
{
	vetement* q = &c;
	in >> *q;
	in >> c.pointure;
	return in;
}
ostream& operator<<(ostream& out, chaussure& c)
{
	vetement* q = &c;
	out << *q;
	out <<"\t,pointure="<< c.pointure << endl;
	return out;
}

chaussure::~chaussure(void)
{

}