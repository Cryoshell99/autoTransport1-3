#include "Transport.h"
int WPRatio(Transport* lg);
bool Compare(Transport* first, Transport* second)
{
	return WPRatio(first) < WPRatio(second);
};