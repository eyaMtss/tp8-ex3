#include "vetement.h"
istream& operator>>(istream& in, vetement& v)
{
	cout << "ref,leb,prix:" << endl;
	in >> v.ref;
	in >> v.libelle;
	in >> v.prix;
	return in;
}
ostream& operator<<(ostream& out, vetement& v)
{
	cout << "ref =" << v.ref << "\t,libelle =" << v.libelle << "\t,prix =" << v.prix ;
	return out;
}
vetement::~vetement(void)
{

}
