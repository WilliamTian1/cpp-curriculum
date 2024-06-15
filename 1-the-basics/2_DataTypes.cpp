#include <iostream>

using namespace std;

int main() {
	cout << 235 << endl << endl;

	// we can use addition (+), subtraction (-), 
	// multiplication (*), division (/), and modulus (%)
    //characters in quotes will be printed as is because they are Strings
	cout << "   235 + 1 = " <<      235 + 1   << endl;
	cout << "   235 - 1 = " <<      235 - 1   << endl;
	cout << "      -235 = " <<         -235   << endl;
	cout << "235 * 5932 = " <<   235 * 5932   << endl;
    cout << "235 % 2 ="<< 235 % 2 << endl << endl;

	// division returns the integer part
	// and discards any remainder (integer division)
	cout << "       3/3 = " <<          3/3   << endl;
	cout << "       4/3 = " <<          4/3   << endl;
	cout << "       5/3 = " <<          5/3   << endl;
	cout << "       6/3 = " <<          6/3   << endl << endl;

	// the largest integer that can be stored in the 32-bit int type is 2^31 -1
	cout << "The largest integer:          " << 2147483647 << endl;

	// adding 1 to the largest integer wraps to
	// the largest negative integer
	cout << "The largest negative integer: " << 2147483647 + 1 << endl;
    cout << 3.141592653589793 << endl << endl;

	// for doubles, we can use addition (+), subtraction (-), 
	// multiplication (*) and division (/)
	cout << "   32.25 + 1.2 = " <<     32.25 + 1.2   << endl;
	cout << "   32.25 - 1.2 = " <<     32.25 - 1.2   << endl;
	cout << "        -32.25 = " <<          -32.25   << endl;
	cout << "32.25 * 5.2352 = " <<  32.25 * 5.2352   << endl;
	cout << "32.25 / 5.2352 = " <<  32.25 / 5.2352   << endl << endl;

	// the largest doubles
	cout << "A large double:        " << 1.235e201 << endl;
	cout << "The largest double:    " << 1.79769313486231570e+308 << endl;
	cout << "An even larger double (inf): " << 1e1000 << endl;
    cout << "true =  " <<  true << endl;
	cout << "false = " << false << endl << endl;

	// logical 'not' of a Boolean value
	cout << "not true =  " <<  !true << endl;
	cout << "not false = " << !false << endl << endl;

	// logical 'and' of two Boolean values
	cout << " true and true  =  " << (  true && true  ) << endl;
	cout << " true and false =  " << (  true && false ) << endl;
	cout << "false and false =  " << ( false && false ) << endl;
	cout << "false and true  =  " << ( false && true  ) << endl << endl;

	// logical 'or' of two Boolean values
	cout << " true or true  =   " << (  true || true  ) << endl;
	cout << " true or false =   " << (  true || false ) << endl;
	cout << "false or false =   " << ( false || false ) << endl;
	cout << "false or true  =   " << ( false || true  ) << endl;

    // characters are enclosed in single quotes
	cout << 'a' << 'b' << 'c' << endl;
	cout << 'A' << 'B' << 'C' << endl;
	cout << '1' << '2' << '3' << endl;
	// the pound sign, a tab, a backslash, a new line, and a *
	cout << '#' << '\t' << '\\' << '\n' << '*' << endl;

	return 0;
}