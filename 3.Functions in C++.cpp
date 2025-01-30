/*
Functions: 
- Functions are called KERNELS in CUDA
*/

#include <iostream>
using namespace std;

// defining a function
int addNumbers(int a, int b){
    return a + b;
}

int main(){
    int x = 5, y = 10;
    cout << "Sum of x and y: " << addNumbers(x, y) << endl;
    return 0;
}