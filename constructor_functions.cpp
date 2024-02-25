#include <iostream>

using namespace std;



class Book{ //specification on how a book will look like
    public: 
        string title;
        string author;
        int pages;
        
        //create a constructor
        Book(string bookTitle, string bookAuthor, int bookPages){
            // cout << name << endl;
            title = bookTitle;
            author = bookAuthor;
            pages = bookPages;
        }

        //having multiple constructors
        Book(){
            title = "No Title";
            author = "No Author";
            pages = 0;
        }

};

int main(){
    //object - instance of a class
    //constructor is a function that will be called when we create an object
    
    Book book1("The Great hack", "Harry Potter", 450);
    //modifying
    book1.title = "The Great Myths of Singapore";
 
    Book book2("Social Dilemma", "Tolkein", 670);

    Book book3;
    cout << book3.title << endl;


    cout << book1.title << endl;
    cout << book1.pages << endl;

    cout << book2.author << endl;




    return 0;
}