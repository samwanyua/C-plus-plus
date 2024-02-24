#include <iostream>

using namespace std;

int main(){
    //madlib game

    string color, pluralNoun, crush;

    cout << "Enter a color: ";
    getline(cin, color);

    cout << "Enter a pluralNoun: ";
    getline(cin, pluralNoun);

    cout << "Enter a crush: ";
    getline(cin, crush);

    cout << "Roses are "<< color << endl;
    cout << pluralNoun << " are blue" << endl;
    cout << "I love "<< crush << endl;

    

    return 0;
}