#include <iostream>

using namespace std;

//Below is a class
class Student {
    public:
        string name;
        string major;
        double gpa;
        //Below is a constructor function
        Student (string aName, string aMajor, double aGpa){
            name = aName;
            major = aMajor;
            gpa = aGpa;
        }

        //object function

        bool hasHonors(){
            if(gpa >= 2.5){
                return true;
            }
            else{
                return false;
            }
        }
        
};

int main(){
    //Object functions/instance functions - function inside a class - used by objects in that class

    Student student1("Jim", "Business", 2.3);
    Student student2("JohnPaul", "Geography", 3.6);

    cout << student1.name << endl;

    cout << student2.hasHonors() << endl; //using the object function here

    return 0;
}