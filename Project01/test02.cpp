#include <iostream>

using namespace std;

void test(int c) {

	c++;
	cout << c << endl;
	return c;
}

int main() {
	int c = 0;
	c = test(c);
	c = test(c);
	c = test(c);
	c = test(c);
	return 0;
}
