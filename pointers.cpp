#include <iostream>
using namespace std;

int main(){
    //pointers - memory addresses
    int age = 19;
   
    //creating a variable to store a pointer - pointer variable (container to store memory addresses)
    int * pAge = &age; //pointer variable

    double gpa = 2.7;
    double * pGpa = &gpa;

    string studentName = "Mike";
    string *pStudentName = &studentName;

    cout <<  &age << endl; //printing out the memory address
    cout <<  &gpa << endl; //printing out the memory address

    //printing out pointer variables
    cout << pAge << endl;
    cout << pStudentName << endl;

    //derefencing pointers - grabbing the value inside the memory address
    cout << "Dereferencing" << endl;

     cout << *pAge << endl;
     
     cout << &gpa << endl;
     cout << *&gpa << endl; //dereferencing
     cout << &*&gpa << endl; //chaining things up to get up the memory address again


    


    return 0;
}