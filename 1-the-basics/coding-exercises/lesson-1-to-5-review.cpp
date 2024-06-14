#include <iostream>
using namespace std;

int main(){
    //Write a C++ program which prints the integer 1, the 
    //double 1.0, the character '1', the string 
    //"1", and the Boolean value true, all on separate lines.
    cout << 1 << endl << 1.0 << endl << '1' << endl << "1" << endl << true << endl << endl;

    //Write a program which has two variables: int i = 523; 
    //and int j = -253. Print out their addresses
    //What do you notice about the two addresses 
    //(recalling that integers are stored using four bytes).
    int i = 523;
    int j = -253;
    //Print
    cout << &i << " " << &j << endl << endl;

    /*
    Take the program above and change the name of the variable. Does this affect the location at which it is stored? Ans: The locations are not affected.

    How could you use the result from Question 2 to test for plagiarism, that is, where one student copies another student's code but changes all the variable names?
    Ans: Use the ampersand to locate where the variables are stored and see if both students have matching hexadecimals.
    */

    //Prompt the user for a real number and store it as a double. Next, indicate whehter the number is less than, equal to, or greater than π ≈ 3.1415926535897932385.
    //Note that C++ does not use unicode, and therefore, you must use the letters pi to represent π.

    double input;
    cin >> input;
    if(input==3.1415926535897932385){
        cout << "The input given is equal to pi." << endl << endl;
    }
    else if(input>3.1415926535897932385){
        cout << "The input given is greater than pi." << endl << endl;
    }
    else{
        cout << "The input given is less than pi." << endl << endl;
    }
    //Write a program that prints out whether the magnitude of an integer n is large (|n| > 100).

    int n;
    cin >> n;
    if(n>100 || n<-100){
        cout << "The magnitude of the integer input is large." << endl << endl;
    }
    else{
        cout << "The magnitude of the integer input is small." << endl << endl;
    }

    return 0;
}