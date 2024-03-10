#include<iostream>
using namespace std;

// These are instructions to the compiler so that before compiling the program, it should follow those instructions.
// Examples given below.

#define PI 3.14     // These are used to declare constants
// #define cout c      // Object name can be changed
#define SQR(x) (x*x) // Function-like macro to calculate the square of a number
#define MSG(x) #x    // #x means whatever is in x, change it into a string and return
#ifndef TAW        // If TAW is not defined, then define VOL as 22
#define VOL 22
#endif

int main()
{
    cout << PI << endl;        // Output the value of PI
    cout << SQR(5) << endl;    // Output the square of 5 using the SQR macro
    cout << MSG(hello) << endl; // Output the string "hello" using the MSG macro
    int TAW = 55;              // Define a new variable VOL with the value 55 (local scope)
    cout << TAW;               // Output the value of the local VOL variable
}