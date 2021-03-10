#include <iostream>
#include <fstream>
#include <string>
#include "Container.h"

using namespace std;

void Init(Container& c);
void Clear(Container*& c);
void In(Container& c, ifstream& ifst);
void Out(Container& c, ofstream& ofst);

int main(int argc, char* argv[])
{
	if (argc != 3) {
		cout << "incorrect command line! "
			"Waited: command in_file out_file"
			<< endl;
		exit(1);
	}
	// Ввод из input.txt
	ifstream ifst(argv[1]);
	// Вывод в output.txt
	ofstream ofst(argv[2]);
	cout << "Start" << endl;
	// Создаем экземпляр контейнера
	Container* c = new Container;
	// Инициализируем его
	Init(*c);
	// Заполняем контейнер
	In(*c, ifst);
	ofst << "Filled container. " << endl;
	// Выводим содержимое
	Out(*c, ofst);
	// Чистим его
	Clear(c);
	// Демностируем содержимое контейнера
	Out(*c, ofst);
	cout << "Stop" << endl;
	system("pause");

	return 0;
}