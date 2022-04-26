#include<iostream>
#include"Header.h"
using namespace muchi;

int main() {

	int size;
	char command;

	cout << "Please enter the size of the set: ";
	cin >> size;

	LesGo unsett(size);

	cout << "Enter the command you want to do. Here's the list!" << endl;
	cout << "1 - Add an element." << endl;
	cout << "2 - Find crossover." << endl;
	cout << "3 - any element." << endl;
	cout << "4 - Merge two sets." << endl;
	cout << "5 - Removes an element from the set." << endl;
	cout << "F - Exit the programm." << endl;

	while (cin >> command)
	{
		switch (command)
		{
		case'1':
			unsett.add();
			break;
		case'2':
			unsett.crossover();
			break;
		case'3':
			unsett.find();
			break;
		case'4':
			unsett.merge();
			break;
		case'5':
			unsett.remove();
			break;
		case'F':
			cout << "Thanks for using it, good luck!" << endl;
			exit(0);
			break;
		}
	}

};