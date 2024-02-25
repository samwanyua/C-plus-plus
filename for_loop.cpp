#include <iostream> 
using namespace std;

int main(){
    //for loops

    // int index = 1;

    // while(index <= 5){
    //     cout << index << endl;
    //     index ++;
    // }

    for( int index = 1; index <= 5; index ++){
        cout << index << endl;
    }

    //looping through an array
    int nums[] = {1,2,3,4,5,6,7,8,9 };

    for(int i = 0; i < sizeof(nums)/ sizeof(nums[0]); i++){
        cout << nums[i] << endl;
    }


    return 0;
}