#include <iostream>

using namespace std;

int main(){
    //Working with strings

    string phrase = "Giraffe academy";

    //string functions
     cout << phrase.length() << endl; //length
     cout << phrase[0] << endl; //accessing each character
    
    //modifying a string
    phrase[4] = 'G';
    cout << phrase << endl; //GiraGfe academy

    //finding a character
     cout << phrase.find("academy", 0) << endl; //8 - it's an index where it starts

     //substring
     string phraseSub;
     phraseSub = phrase.substr(8,4); // 8 is starting index, 4 is the length
      cout <<  phraseSub << endl; //acad


    cout << "Hello world" << endl; //endl puts a new line

    return 0;
}