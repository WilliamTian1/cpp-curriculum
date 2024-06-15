#include <iostream>

using namespace std;
// a function that has a declaration similar to Java
int main()
{
    //<< acts as an output stream (similar to + in Java), endl ends the current line
    cout << "Hello World!" << endl; 
    //we can string together as many objects as we want with << 
    cout << "Hello World!" << endl << endl << "This is..." 
         << "my first..." << endl << "...program." << endl;
    return 0;
}