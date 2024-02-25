#include <iostream>
using namespace std;

int main(){
    //2d arrays - every single element inside the array is another array
    int numberGrade[2][9] = {
        {22,43,455,65,67,78,89,45,43},
        {32,34,465,76,8,6,56,67,88}
    };

    //access elements
    cout << numberGrade[1][2] << endl;

    for(int i = 0; i < 2; i++ ){
        for(int j = 0; j < 9; j++){
            cout << numberGrade[i][j] << " ";
        }
    }
    cout << endl;
}