#include "Expression.h"

// FILE TEST BINARYEXPRESSION.H

#include <iostream>

using namespace std;

int main() {
	Expression<int> x(5);
	Expression<float> y(10.9);
	x.setX(4);
	y.setX(6.7);
	cout << x.getX() << endl;
	cout << y.getX() << endl;
	return 0;
}