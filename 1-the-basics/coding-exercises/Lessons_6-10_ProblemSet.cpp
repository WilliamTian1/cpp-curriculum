#include <iostream>

using namespace std;

int main()
{
    // Create the game of hi-lo. Store an integer and continue prompting the user to enter a guess.
    // If the guess equals the integer stored, print "You're right." and stop looping,
    // if the guess is greater than the stored number, print "High...", otherwise, print "Low...".
    int x = 67832;
    int input = 0;
    while (x != input)
    {
        cout << "Guess the integer: ";
        cin >> input;
        if (input > x)
        {
            cout << "The integer is lower. " << endl;
        }
        else if (input < x)
        {
            cout << "The integer is higher. " << endl;
        }
    }
    cout << "Good job! You guessed correctly. " << endl
         << endl;

    // Write a program which converts a decimal integer
    // into a hexadecimal integer by following the loop.

    int input1;
    cout << "Enter an integer to be converted: ";
    cin >> input1;
    int pow = 1;
    while (input1 >= pow)
    {
        pow *= 16;
    }
    pow /= 16;

    while (input1 > 15)
    {
        if (input1 / pow < 10)
        {
            cout << input1 / pow;
        }
        else
        {
            char hex = 'A';

            cout << static_cast<char>(hex + input1 / pow - 10);
        }
        input1 %= pow;
        pow /= 16;
    }
    if (input1 < 10)
    {
        cout << input1 << endl
             << endl;
    }
    else
    {
        char hex = 'A';
        cout << static_cast<char>(hex + input1 - 10) << endl << endl;
    }

    // Write a program which prompts the user for a positive integer n and then calculates the integer value 2^n using a for loop. Print the result.
    cout << "Enter a number: ";
    int n;
    cin >> n;
    int result = 1;
    for (int i = 0; i < n; i++)
    {
        result *= 2;
    }
    cout << "2 to the power of " << n << " is: " << result << endl
         << endl;

    // Write a program which prompts the user for an integer m and then calculates the double 2.0^n using a for loop.
    // Your code should work for both positive and negative numbers. Print the result.

    cout << "Enter a number: ";
    int m;
    cin >> m;
    double result1 = 1;
    if (m > 0)
    {
        for (int i = 0; i < m; i++)
        {
            result1 *= 2;
        }
        cout << "2 to the power of " << m << " is: " << result1 << endl
             << endl;
    }
    else if (m == 0)
    {
        cout << "2 to the power of " << m << " is: " << 1 << endl
             << endl;
    }
    else
    {
        for (int i = 0; i > m; i--)
        {
            result1 /= 2;
        }
        cout << "2 to the power of " << m << " is: " << result1 << endl
             << endl;
    }


    
    return 0;

}