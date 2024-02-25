#include <iostream>

using namespace std;

int main(){
    double num1;
    double num2;
    char op;
    double result;

    cout << "Enter the first Number" << endl;
    cin >> num1;

    cout << "Enter the operator " << endl;
    cin >> op;

    cout << "Enter the second Number" << endl;
    cin >> num2;

    if(op == '+'){
        result = num1 + num2;
    }
    else  if(op == '-'){
        result = num1 - num2;
    }
    else  if(op == '*'){
        result = num1 * num2;
    }
    else  if(op == '/'){
        result = num1 / num2;
    }
    else{
        cout << "Invalid operator" << endl;
    }
    
    cout << result << endl;

    return 0;
}