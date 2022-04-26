#pragma once
#include<iostream>
#include<vector>
using namespace std;

namespace muchi {
	
	
	
	class LesGo {
	private:
		int sizee = 0;
		vector<int> sett;
	public:
		LesGo(int sz);
		LesGo();
		void add();
		void crossover();
		void find();
		void merge();
		void remove();
	};



}