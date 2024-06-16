#include <iostream>
// IGNORE THIS NEXT LINE
#define pointer(x) x *

using namespace std;

int main() {
	int n = 256;
	double x = 5.323;
	//The * indicates that the value is a pointer to the area where the variable is stored.
	int* ptr_n = &n;   // store the address of the int n
	double* ptr_x = &x;   // store the address of the double x

	cout << "The int stored at    " << ptr_n << " is " << *ptr_n << endl;
	cout << "The double stored at " << ptr_x << " is " << *ptr_x << endl;

	return 0;
}