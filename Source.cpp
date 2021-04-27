#include "Animals.h"
#include "Birds.h"
#include "Cats.h"
#include "Crows.h"
#include "Dogs.h"
#include "Mammals.h"
#include "People.h"
#include "Vertebrates.h"
#include <iostream>
using namespace std;

int main()
{
	Crows a;
	People b;
	Dogs c;
	Cats d;
	a.description();
	b.description();
	c.description();
	d.description();

	Vertebrates* N[4];

	N[0] = &a;
	N[1] = &b;
	N[2] = &c;
	N[3] = &d;

	cout << "description of N[0] = "; N[0]->description(); cout << endl;
	cout << "description of N[1] = "; N[1]->description(); cout << endl;
	cout << "description of N[2] = "; N[2]->description(); cout << endl;
	cout << "description of N[3] = "; N[3]->description(); cout << endl;
}