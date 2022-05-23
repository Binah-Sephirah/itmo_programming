#include <iostream>
#include <vector>
#include "fun.h"

using namespace std;

namespace fun {

	Complx::Complx(int r, int im) {
		img = im;
		rel = r;
}

	Complx::Complx() {
		img = 0;
		rel = 0;
}

	void Complx::Sum() {
		int new_rel;
		int new_img;
		cout << "Now you will have to enter the number you want to sum." << endl;
		cout << "Please enter it's real part: " << endl;
		cin >> new_rel;
		cout << "And now please enter it's imaginary part: " << endl;
		cin >> new_img;
		cout << "Good. Here we go!" << endl;
		cout << (rel + new_rel) << " - " << (img + new_img) << "*i." << endl;
	}

	void Complx::Multiplication() {
		int new_rel;
		cout << "Please enter the number: " << endl;
		cin >> new_rel;
		cout << (new_rel * rel) << " - " << (new_rel * img) << "*i." << endl;
	}

	void Complx::MultiTwo() {
		int new_rel;
		int new_img;
		cout << "Now you will have to enter the number you want to multiply with." << endl;
		cout << "Please enter it's real part: " << endl;
		cin >> new_rel;
		cout << "And now please enter it's imaginary part: " << endl;
		cin >> new_img;
		cout << "Good. Here we go!" << endl;
		cout << (new_rel * rel) - (new_img * img) + rel * (new_img + img * new_rel) << "*i." << endl;
	}
	
	fun::queue_real& operator>>(queue_real& q, int x) {
		if (q.q.empty()) {
			x = q.q.front();
			cout << q.q.front() << " Popped from queue!Yaay!\n";
			q.q.erase(q.q.begin());
		}
		return q;
	}
	fun::queue_real& operator<<(queue_real& q, int x) {
		if (q.q.size() < q.maxsize) {
			q.q.push_back(x);
			cout << x << " Pushed to queue! Yaay!\n";
			return q;
		}
		else return q;
	}
}