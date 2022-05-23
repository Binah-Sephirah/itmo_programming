#include <iostream>
#include <vector>
#include "fun.h"
using namespace std;
using namespace fun;

int main() {
	fun::queue_real q = fun::queue_real();
	char command;
	int a, b, size;
	cout << "Please enter the number you want to create!" << endl;
	cout << "Please enter it's real part: " << endl;
	cin >> a;
	cout << "And now please enter it's imaginary part: " << endl;
	cin >> b;

	Complx tes(a, b);

	cout << "Good. Now enter the command you want to do. Here's the list!" << endl;
	cout << "1 - Calculate the sum of two complex numbers." << endl;
	cout << "2 - Multiply by a real number." << endl;
	cout << "3 - Multiply two complex numbers." << endl;
	cout << "4 - Add." << endl;
	cout << "5 - Remove." << endl;
	cout << "F - Exit the programm." << endl;
	
	while (cin >> command) {
		switch (command) {
		case'1':
			tes.Sum();
			break;
		case'2':
			tes.Multiplication();
			break;
		case'3':
			tes.MultiTwo();
			break;
		case'4':
			int x;
			cout << "Please, enter the number! ";
			cin >> x;
			(q << x);
			break;
		case'5':
			cout << "Aaaand.... Done! ";
			(q >> x);
			break;
		case'F':
			cout << "Thanks for using it, good luck!" << endl;
			exit(0);
			break;
		}
	}



}