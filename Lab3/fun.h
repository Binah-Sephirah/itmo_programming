#pragma once
#include <iostream>
#include <vector>

using namespace std;
namespace fun {

	class Complx {
	public:
		int img;
		int rel;

		Complx();
		Complx(int r, int im);
		void Sum();
		void Multiplication();
		void MultiTwo();
	};

	class queue_real {
	public:
		vector<int>q;
	public:
		int maxsize = 100;
		friend queue_real& operator >>(queue_real& q, int x);
		friend queue_real& operator <<(queue_real& q, int x);
	};
}
