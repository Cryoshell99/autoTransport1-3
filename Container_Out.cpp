#include "Container.h"
#include <fstream>

using namespace std;

void Out(Transport* tr, ofstream& ofst);
int WPRatio(Transport* tr);

void Out(Container& cnt, ofstream& ofst)
{
	// Если контейнер не пуст
	if (&cnt != nullptr)
	{
		ofst << "Container contains that elements:" << endl;
		Container *temp;
		temp = &cnt;
		int i = 0;
		do
		{
			ofst << i << ": ";
			Out(temp->L, ofst);
			ofst  << WPRatio(temp->L) << " Weight to power ratio" << endl << endl;
			temp = temp->Next;
			i++;
		} while (temp != &cnt);
	}
	else
	{
		ofst << "Container is empty!" << endl;
	}
};