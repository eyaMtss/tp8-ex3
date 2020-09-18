#include <iostream>
using namespace std;
#include"vetement.h"
#include "habille.h"
#include"tenue.h"
#include "chaussure.h"
#include"collection2019.h"
void main()
{
	//habille h;
	//cin >> h;
	//cout << h << endl;
	habille h1(01,  "pull" , 20.0, 12);
	cout << h1;
	cout << "******************************" << endl;
	chaussure c1(02, "mocassin"  , 30.0, 38);
	cout << c1;
	cout << "******************************" << endl;
	habille h2(03, "pantalon", 50.0, 12);
	cout <<h2 ;
	cout << "******************************" << endl;
	tenue< habille, chaussure> t(h1, c1);
	t - 20;
	cout << t;
	cout << "******************************" << endl;
	collection2019 c(1, t);



	system("PAUSE");
}