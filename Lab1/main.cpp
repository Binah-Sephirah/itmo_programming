#include<iostream>
#include "fun.h"

using namespace std;

class Complex {
private:
	int real;
	int img;

public:
	
	Complex() {
		real = 2;
		img = -4;
	}

	void Display() {
		if (img < 0) {
			cout << "Complex number is: " << real << " - " << img*-1 << "*i.";
		}
		else {
			cout << "Complex number is: " << real << " + " << img << "*i.";
		}
	}

	void Edit(int real_n, int img_n) {
		real = real_n;
		img = img_n;
	}
};


int main() {
	int a = 3;
	int b = 10;
	int a_two = 3;
	int b_two = 10;
	int a_third = 3;
	int b_third = 10;
	float c = 1.5;
	float arr[3][3] = {{1.0, 1.0, 1.0}, {1.0, 1.0, 1.0}, {1.0, 1.0, 1.0}};
	Complex Zet;
	




	//Task 2.
	fun::task2(a, b);
	cout << "Task 2: " << a << endl;

	fun::task2_2(&a, &b);
	cout << "Task 2_2: " << a << endl;



	//Task 7.
	cout << endl;

	fun::task7(c, b);
	cout << "Task 7: " << c << " ,  " << b << endl;

	fun::task7_2(&c, &b);
	cout << "Task 7_2: " << c << " ,  " << b << endl;



	//Task 10.
	cout << endl;
	cout << "Task 10: ";
	cout << endl;
	Zet.Edit(a_two, b_two);
	Zet.Display();
	fun::task10(a_two, b_two);
	Zet.Edit(a_two, b_two);
	cout << endl;
	cout << "Associated complex number: " << endl;
	Zet.Display();


	cout << endl;
	cout << "Task 10_2: ";
	cout << endl;
	Zet.Edit(a_third, b_third);
	Zet.Display();
	fun::task10_2(&a_third, &b_third);
	Zet.Edit(a_third, b_third);
	cout << endl;
	cout << "Associated complex number: " << endl;
	Zet.Display();
	


	//Task 15.
	cout << endl;
	cout << endl;
	cout << "Task 15: ";
	cout << endl;
	cout << endl;
	
	for (int count_row = 0; count_row < 3; count_row++) {
		for (int count_collum = 0; count_collum < 3; count_collum++) {
			arr[count_row][count_collum] *= c;
		}
	}

	for (int count_row = 0; count_row < 3; count_row++) {
		for (int count_collum = 0; count_collum < 3; count_collum++) {
			cout << arr[count_row][count_collum] << "  ";
		}
		cout << endl;
		cout << endl;
	}




};