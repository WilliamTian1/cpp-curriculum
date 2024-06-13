#include <iostream>

using namespace std;

int main(){
    //Write a C++ program which prints the integer 1, the 
    //double 1.0, the character '1', the string 
    //"1", and the Boolean value true, all on separate lines.
    cout << 1 << endl << 1.0 << endl << '1' << endl << "1" << endl << true << endl;

    //Write a program which has two variables: int i = 523; 
    //and int j = -253. Print out their addresses
    //What do you notice about the two addresses 
    //(recalling that integers are stored using four bytes).
    int i = 523;
    int j = -253;
    //Print
    cout << &i << " " << &j;
}