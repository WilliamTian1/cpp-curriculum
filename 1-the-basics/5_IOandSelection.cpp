#include <iostream>

using namespace std;

int main() {
	char input;
    
	cout << "Please enter a character (only the first will be read): ";
    //cin takes the input stream
	cin >> input;
//recall that a char can hold a value between 0 and 255
//these values correspond to certain single characters
//if statements are virtually identical to Java if-statements
	if ( ( input >= 'a' ) && ( input <= 'z' ) ) {
		cout << "You entered a lower-case letter." << endl;
	} else if ( ( input >= 'A' ) && ( input <= 'Z' ) ) {
		cout << "You entered an upper-case letter." << endl;
	} else if ( ( input >= '0' ) && ( input <= '9' ) ) {
		cout << "You entered a number." << endl;
	} else {
		cout << "You entered the non-alpha-numeric character "
		     << input << "." << endl;
	}

	return 0;
}