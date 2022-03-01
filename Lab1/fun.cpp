#include "fun.h"
#include<math.h>
#include <Complex>
namespace fun {
	void task2(int& a, int& b) {
		a = a + b;
	}
	void task2_2(int* a, int* b) {
		*a = *a + *b;
	}



	void task7(float& c, int& b) {
		c = -c;
		b = -b;
	}
	void task7_2(float* c, int* b) {
		*c = -*c;
		*b = -*b;
	}



	void task10(int& newreal, int& newimg) {
		newimg = -newimg;
	}

	void task10_2(int* newreal, int* newimg) {
		*newimg = -*newimg;
	}


}
