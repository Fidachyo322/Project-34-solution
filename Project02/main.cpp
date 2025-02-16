#include <iostream>

using namespace std;

void swap(int&, int&);

int main() {
	int x = 10, y = 7;

	cout << "Before: x =" << x << ",y = " << y << endl;

	swap(x, y);

	cout << "After: x =" << x << ",y = " << y << endl;

	return 0;
}
