#include <iostream>

using namespace std;

int main(){
    //if statements and logial operators
    bool isMale = true;
    bool isTall =  false;

    if(isMale && isTall ){
        cout << "You are a male, You are tall, Go for Mi3" << endl;
    }
    else if(isMale && !isTall){
        cout << "Is male but short" << endl;
    }
    else if(!isMale && isTall){
        cout << "Is female but short" << endl;
    }
    else{
        cout << "You are not male, You are not tall, Go for Waridi" << endl;
    }
    return 0;
}