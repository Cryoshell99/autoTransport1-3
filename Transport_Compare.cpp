#include "Transport.h"
float WPRatio(Transport* lg);
bool Compare(Transport* first, Transport* second)
{
	return WPRatio(first) < WPRatio(second);
};