#include <iostream>

using namespace std;

int getMax(int num1, int num2, int num3){

    int result;
 
    /*if(num1 > num2){
        result = num1;
    }
    else{
        result = num2;
    }*/

    if( num1 >= num2 && num1 >= num3){
        result = num1;
    }
    else  if( num2 >= num1 && num2 >= num3){
        result = num2;
    }
    else {
        result = num3;
    }

    

    return result;

}


int main(){

    //comparisons : <, >, <=, >=, ==, !=

    cout << getMax(23,3434,23)<< endl;
     
     return 0;
}