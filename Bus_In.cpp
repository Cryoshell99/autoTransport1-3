#include <fstream>
#include "Bus.h"

using namespace std;

Bus* InBus(ifstream& ifst)
{
	Bus* b;
	b = new Bus;
	b->mKey = type::BUS;
	ifst >> b->tPower;
	ifst >> b->mData;
	b->tRatio = 75/ b->tPower;
	return b;
}
