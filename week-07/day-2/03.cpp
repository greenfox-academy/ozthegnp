#include <iostream>
using namespace std;

// Now, create 2 functions. They should bear the same name.
// These functions should multiply their parameters.
// The first should return float and take two arguments of the type float.
// The second function should return int and take two arguments of integer type.
// Use these two functions and print out the results.
//
// Compile the code You wrote. Note the output of the compiler. Think about it, google it.
// Now, put one of the functions into comment. (So it's still legible but won't compile.)
// Try compiling it again, and watch what the results are.
//
// Switch the two function declarations. Ucomment the one You commented out and comment out the one
// that ran before. Compile it and compare the results again.
//
// What did You learn from this exercise?
// Write it down in a comment into Your file!
// I learned that decimal numbers will be float types

float multiply(float a, float b){
    return a * b;
}
int multiply(int a, int b){
    return a * b;
}

int main() {

    cout << multiply(2, 4) << endl;
    cout << multiply((float)2.1, 4.3) << endl;



    return 0;
}
\
