#include <iostream>

using namespace std;

int main(){
    //Getting user input 
    // int age;
    double age;

    string userName;
    cout << "Enter your user name: ";
    getline(cin, userName); //getting lines of character -- same as fgets()

    cout << "Enter your age: ";
    cin >> age; // getting int or char or double  -- same as scanf()


    cout << "Hello " <<userName<< ", you are " << age << " years old!" << endl;

    return 0;
}