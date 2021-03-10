#include "Container.h"
#include <fstream>

using namespace std;

Transport* In(ifstream& ifst);

void In(Container& c, ifstream& ifst)
{
	// Пока не достигнут конец входного потока
	while (!ifst.eof())
	{
		// Создаем временный контейнер
		Container* temp = new Container;
		// Заполняем его
		if ((&c == c.Next) && (!ifst.tellg()))
		{
			c.L = In(ifst);
		}
		else
		{
			// Идем на последний элемент
			Container* counter = c.Next;
			while (counter->Next != &c)
			{
				counter = counter->Next;
			}

			counter->Next = temp;
			temp->L = In(ifst);
			temp->Next = &c;
		}
	}
};