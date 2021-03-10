//#pragma once
#include <fstream>
#include "Bus.h"

using namespace std;

void Out(Bus* b, ofstream& ofst) 
{
	ofst << "It is Bus, passenger capacity = " << b->mData << ", Engine power = " << b->tPower << endl;
};

int WPRatio(Bus* b)
{
	return 75/b->tPower;
};