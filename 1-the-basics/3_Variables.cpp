#include <iostream>

using namespace std;

int main() {
	int augend;   // declare 'augend' to be an integer

	// store the value 284 in the memory location associated with 'augend'
	augend = 284;

	int sum;      // declare 'sum' to be an integer

	sum = augend + 513;

	cout << "The sum of " << augend << " and 513 is " << sum << endl;

    double augend1;   // declare 'augend1' to be a double

	// store the value 2.84 in the memory location associated with 'augend'
	augend1 = 2.84;

	double sum1;      // declare 'sum' to be a double

	sum1 = augend1 + 51.39;

	cout << "The sum of " << augend1 << " and 51.39 is " << sum << endl;
	return 0;
    
    double augend2;   // declare 'augend2' to be a double

	cout << "Before assigning, augend2 equals " << augend2 << endl;

	augend2 = 2.84;

	cout << "After assigning, augend equals " << augend2 << endl;
}