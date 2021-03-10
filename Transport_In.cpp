//#pragma once
#include <fstream>
#include "Transport.h"

using namespace std;

Truck* InTruck(ifstream& ifst);
Bus* InBus(ifstream& ifst);

Transport* In(int key, ifstream& ifst)
{
	int inh;
	switch (key)
	{
	case 1:
		return (Transport*)InBus(ifst);
	case 2:
		return (Transport*)InTruck(ifst);
	default:
		char b;
		ifst >> b;
		//
		while (!ifst.eof() && ifst.peek() != '\n')
		{
			ifst >> b;
		}
		return NULL;
	}
};

Transport* In(ifstream& ifst) 
{
	Transport* lg;
	int k;
	ifst >> k;
	lg = In(k, ifst);
	return lg;
};
