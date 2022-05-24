#include <iostream>
#include <vector>
#include "Header.h"
using namespace std;
int main() {
vector<int> q = { -1, -2, -3, 0, 1, 5, 6 };
if (PRED::all_of(q.begin(), q.end(), [](int x) { return x > 0; })) {
cout << "True all! Yay!" << endl;
}
else {
cout << "False all! Woops!" << endl;
}
if (PRED::is_partitioned(q.begin(), q.end(), [](int x) { return x > 0; })) {
cout << "It's partitioned!" << endl;
}
else {
cout << "It's not partitioned!" << endl;
}
if (PRED::is_sorted(q.begin(), q.end())) {
cout << "It's sorted!" << endl;
}
else {
cout << "It's not sorted!" << endl;
}
cout << endl;
cout << "Thanks for using! Bye!" << endl;
return 0;
}
