#include <iostream>

using namespace std;

int main(){
    int value = 293;

	cout << "The variable 'value' is storing " << value << endl;
	cout << "The address at which 'value' is being stored is " << &value << endl;
    value = -932;

	cout << "The variable 'value' is now storing " << value << endl;
	cout << "The address at which 'value' is being stored is still " << &value << endl;

    return 0;
}