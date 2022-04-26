#include"Header.h"


using namespace std;

namespace muchi {

	LesGo::LesGo(int sz) {
		int sizee = sz;
		sett.resize(sizee);
	}


	LesGo::LesGo() {
		int sizee = 0;
		sett.resize(sizee);
	}


	void LesGo::add() {
		int element;
		cout << "Please enter the element to add: ";
		cin >> element;
		sett.push_back(element);
	}



	void LesGo::crossover() {
		int inp = 0;
		int size;
		int prove = 0;
		size_t sz1, sz2;
		vector<int> newM;
		cout << "Enter a revelant set's size: ";
		cin >> size;
		newM.resize(size);
		cout << endl;
		cout << "Now type all elements.";

		while (inp != 2201) {
			cin >> inp;
			newM.push_back(inp);
		}

		sz1 = sett.size();
		sz2 = newM.size();

		for (int i = 0; i < sz2; i++) {
			for (int j = 0; j < sz1; j++) {
				if (newM[i] == sett[j]) {
					prove = 1;
				}
			}
		}

		if (prove == 1) {
			cout << "Sets intersect!" << endl;
		}
		else {
			cout << "Sets do not intersect!" << endl;
		}
	}


	void LesGo::find() {
		int search;
		int prove = 0;
		size_t szz = sett.size();
		cout << "Please enter the element you are looking for: " << endl;
		cin >> search;

		for (int i = 0; i < szz; i++) {
			if (sett[i] == search) {
				prove = 1;
			}
		}

		if (prove == 1) {
			cout << "YES!" << endl;
		}
		else {
			cout << "NO!" << endl;
		}

	}




	void LesGo::merge() {
		int inp = 0;
		int size;
		vector<int> newM;
		vector<int> MergeS;
		cout << "Enter a revelant set's size: ";
		cin >> size;
		newM.resize(size);
		cout << endl;
		cout << "Now type all elements.";

		while (inp != 2201) {
			cin >> inp;
			newM.push_back(inp);
		}


		for (int i = 0; i < sett.size(); i++) {
			MergeS.push_back(sett[i]);
		}
		for (int i = 0; i < newM.size(); i++) {
			MergeS.push_back(newM[i]);
		}
		for (int i = 0; i < MergeS.size(); i++)
			cout << MergeS[i] << ' ';

	}



	void LesGo::remove() {
		int elm;
		int prove = 0;
		cout << "Please enter the element you wish to remove: " << endl;
		cin >> elm;

		for (int i = 0; i < sett.size(); i++) {
			if (sett[i] == elm) {
				prove = 1;
				sett.erase(sett.begin());
			}
		}

		if (prove == 1) {
			cout << "The element has been removed." << endl;
		}
		else {
			cout << "The element is not in the set." << endl;
		}
	}

}