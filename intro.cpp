#include <iostream>
/*
#include <iostream>: This line is a preprocessor directive that tells the compiler
 to include the necessary declarations for input and output operations using streams.
  In this case, it includes the input/output stream library (iostream), 
  which provides functionality for input and output operations.
*/

using namespace std;
/*
This line declares that we are using the std namespace. 
The std namespace contains the standard C++ library, 
including the cout and endl objects used in this program.

*/
 
int main(){
    /*
    int main() {: This line declares the main function, 
    the starting point of execution for every C++ program.
    The opening curly brace { marks the beginning of the function's body.
    */
    cout << "This is a c++ rogram" << endl;
    cout << "This is a c++ program" << endl;
    cout << "Hello world" << endl;
    /*
    cout << "Hello world" << endl;: This line uses the cout object
     (part of the std namespace) to print the string "Hello world" 
     to the console. The << operator is used to chain multiple items 
     together for output. endl is a manipulator that represents the 
     end of a line and adds a newline character. So, the output will
      appear on a new line.
    */
    // system("pause");

    return 0;
    /*
    return 0;: This line indicates the end of the main function and returns the value 0
     to the operating system. A return value of 0 typically signifies successful execution, 
     while a non-zero value may indicate an error or abnormal termination.
    */
}