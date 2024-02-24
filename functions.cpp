#include <iostream>

using namespace std;

void sayHi(string userName, int age); // function prototype/stub/signature

int main(){

    cout << "Top" << endl;
    
    //functions
    sayHi("Mark",34);
    sayHi("Malcolm",354);
    sayHi("Martin",334);

    cout << "Bottom" << endl;
    return 0;
}

void sayHi(string userName, int age){
    cout << "Hello " << userName << ", this is a function. You are " << age << " years old!" << endl;
}