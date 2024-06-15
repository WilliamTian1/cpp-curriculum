#include <iostream>

using namespace std;

int main() {
	double x;

	cout << "Enter a real number: ";

	cin >> x;

	// Approximate exp(x) using a 21-term Taylor series:
	//
	//         1   2   1   3          1   20
	// 1 + x + -- x  + -- x  + ... + --- x
	//         2!      3!            20!

	double result = 1.0;
	double term = 1.0;

	for ( int n = 1; n <= 20; ++n ) {
		term *= x / static_cast<double>( n );
		result += term;
	}

	cout << "The approximation of exp(" << x << ") is " << result << endl;

	return 0;
}