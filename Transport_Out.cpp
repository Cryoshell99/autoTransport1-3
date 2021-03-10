#include <fstream>
#include "Transport.h"

using namespace std;

void Out(Bus* b, ofstream& ofst);
void Out(Truck* t, ofstream& ofst);
void Out(Car* c, ofstream& ofst);

void Out(Transport* lg, ofstream& ofst)
{
	if (lg == NULL)
	{
		ofst << "Incorrect type of Transport!" << endl;
	}
	else
	{
		switch (lg->mKey) {
		case type::BUS:
			Out((Bus*)(lg), ofst);
			break;
		case type::TRUCK:
			Out((Truck*)lg, ofst);
			break;
		case type::CAR:
			Out((Car*)lg, ofst);
			break;
		}
	}
};