#include "Container.h"
#include <fstream>

using namespace std;

void Out(Transport* tr, ofstream& ofst);
int WPRatio(Transport* tr);

bool Compare(Transport* first, Transport* second);
void Sort(Container*& cnt)
{
	//if container contains 1 element, do nothing
	if (cnt == cnt->Next)
	{
		return;
	}
	Container* current = cnt;
	bool flag = false;
	Transport* temp;
	//buble sort
	do
	{
		current = cnt;
		//if we didnt swap elements container is sorted
		flag = false;
		do
		{
			if (Compare(current->L, current->Next->L))
			{
				temp = current->L;
				current->L = current->Next->L;
				current->Next->L = temp;
				flag = true;
			}
			current = current->Next;

		} while (current->Next != cnt);
	} while (flag);
};


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