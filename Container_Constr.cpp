#include "Container.h"
#include "iostream"

void Clear(Container*& c)
{
	// Создаем временный контейнер
	Container* temp;
	temp = c->Next;
	// Чистим контейнер забирая содержимое
	while (temp != c)
	{
		c->Next = temp->Next;
		delete temp;
		temp = c->Next;
	}
	delete c;
	c = nullptr;
};

void Init(Container& c)
{
	// Инициализируем
	c.Next = &c;
	c.L = NULL;
};
