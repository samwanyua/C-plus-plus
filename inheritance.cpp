#include <iostream>

using namespace std;

//superclass
class Chef{ 
    public:
        void makeChicken(){
            cout << "The chef makes chicken" << endl;
        }
        void makeSalad(){
            cout << "The chef makes salad" << endl;
        }
        void makeSpecialDish(){
            cout << "The chef makes bbq ribs" << endl;
        }
};

//this is a subclass
class ItalianChef : public Chef { // inherits all the Chef functions
    public: 
        void makePasta(){
            cout << "The chef makes pasta" << endl;
        }
        //overwrite a function
         void makeSpecialDish(){
            cout << "The chef makes chicken parm" << endl;
        }
};

int main(){
    //Below is an object 
    Chef chef;
    chef.makeChicken();

    ItalianChef italianchef;
    italianchef.makeChicken();

    italianchef.makePasta();


    chef.makeSpecialDish();
    italianchef.makeSpecialDish(); //overwritten function

    return 0;
}