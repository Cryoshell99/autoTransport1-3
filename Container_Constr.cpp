#include "Container.h"
#include "iostream"

void Clear(Container*& cnt)
{
	// ������� ��������� ���������
	Container* temp;
	temp = cnt->Next;
	// ������ ��������� ������� ����������
	while (temp != cnt)
	{
		cnt->Next = temp->Next;
		delete temp;
		temp = cnt->Next;
	}
	delete cnt;
	cnt = nullptr;
};

void Init(Container& cnt)
{
	// ��������������
	cnt.Next = &cnt;
	cnt.L = NULL;
};
