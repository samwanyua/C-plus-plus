#include <iostream>

using namespace std;

//Classes and objects
/*
class is like a new data type

In C++, a class is a user-defined data type that serves as a blueprint 
for creating objects. An object is an instance of a class, and it 
encapsulates data (attributes or properties) and functions (methods) 
that operate on that data. The combination of data members and member 
functions forms a class in C++.
*/

//creating a book data type

class Book{ //specification on how a book will look like
    public: 
        string title;
        string author;
        int pages;
};

int main(){

    // string name = "Mike";
    // double pi = 3.1415;
    // char favouriteLetter = 'W';

    //create a book
    //object - instance of a class
    
    Book book1;
    book1.title = "Harry Potter";
    book1.author = "JK Bowling";
    book1.pages = 450;


    Book book2;
    book2.title = "Lord of the Rings";
    book2.author = "Tolkein";
    book2.pages = 400;


    cout << book1.title << endl;
    cout << book1.pages << endl;

    cout << book2.author << endl;




    return 0;
}