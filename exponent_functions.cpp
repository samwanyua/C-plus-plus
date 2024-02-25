#include <iostream>
using namespace std;

//exponent function - takes a number to a certain function

int powerFunc(int baseNum, int powNum){
    int result = 1;

    for(int i = 0; i < powNum; i++){
        result = result * baseNum;
    }

    return result;

}

int main(){

    cout << powerFunc(23,6) << endl; //2 is the baseNum, 6 is the power

    return 0;
}