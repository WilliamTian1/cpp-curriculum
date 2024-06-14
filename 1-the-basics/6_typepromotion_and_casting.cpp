#include <iostream>

using namespace std;

int main() {
	double x = 3;   // 3 is an integer, so 3 is printed instead of 3.0

	cout << x << endl;

	x = x + 0.1;

	cout << x << endl;

    double y;

	cout << "Please enter a real number: ";
	cin >> y;

	if (y) {
		cout << "You entered " << y << " which is not zero." << endl;
	} else {
		cout << "You entered zero." << endl;
	} 
	return 0;


}