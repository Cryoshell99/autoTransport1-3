#include "Container.h"
#include <fstream>

using namespace std;

Transport* In(ifstream& ifst);

void In(Container& cnt, ifstream& ifst)
{
	// ���� �� ��������� ����� �������� ������
	while (!ifst.eof())
	{
		// ������� ��������� ���������
		Container* temp = new Container;
		// ��������� ���
		if ((&cnt == cnt.Next) && (!ifst.tellg()))
		{
			cnt.L = In(ifst);
		}
		else
		{
			// ���� �� ��������� �������
			Container* counter = cnt.Next;
			while (counter->Next != &cnt)
			{
				counter = counter->Next;
			}

			counter->Next = temp;
			temp->L = In(ifst);
			temp->Next = &cnt;
		}
	}
};