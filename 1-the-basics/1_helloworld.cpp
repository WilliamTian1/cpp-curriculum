#include <iostream>

using namespace std;
// A function that has a declaration similar to Java.
int main()
{
    cout << "Hello World!" << endl; //<< Acts as an output stream (similar to + in Java), endl ends the current line.
    
    cout << "Hello World!" << endl << endl << "This is..." //We can string together as many objects as we want with <<.
         << "my first..." << endl << "...program." << endl;
    return 0;
}