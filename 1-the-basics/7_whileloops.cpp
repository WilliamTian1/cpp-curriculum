#include <iostream>

using namespace std;

int main() {
	double sqrt2 = 2.0;

	// continue looping while the next approximation
	// is different from the current approximation

	while ( sqrt2 != ( sqrt2/2 + 1/sqrt2 ) ) {
		sqrt2 = sqrt2/2 + 1/sqrt2;
	}

	cout << "The square root of two is approximately " << sqrt2 << endl;

	return 0;
}