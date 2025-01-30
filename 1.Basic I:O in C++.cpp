/* 
STEPS TO RUN C++ IN TERMINAL (MAC):alignas
1. g++ --version [if it shows a version, then good to go]
2. g++ test.cpp -o test [compile file, -o Output executable file]
3. ./test [run the executable - mac]
*/

#include <iostream> // c++ standard library [like stdio.h for c]
using namespace std; // done to avoid having to type this: std::cout - std everywhere
int main(){
    int a, b;
    cout << "1. Basic I/O in C++" << endl; // endl - insert new line & FLUSH THE OUTPUT BUFFER [used for REAL TIME OUTPUT'S - but \n is faster]
    cout << "Enter 2 numbers: ";
    cin >> a >> b; // both numbers in same line
    cout << "Sum of the 2 numbers: " << a + b << endl; // you can also enter a new line by "\n" [faster, but doesnt flush output buffer]
    return 0;
}