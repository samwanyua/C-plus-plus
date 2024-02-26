#include <iostream>
using namespace std;
    //getters and setters - allows you to control the access to different attributes and elements in c++ classes

class Movie {
    private: //can't be just accessed directly
        string rating;
    public: // can be directly accessed
        string title;
        string director;
        
        //Constructor function
        Movie(string aTitle, string aDirector, string aRating){
            title = aTitle;
            director = aDirector;
            setRating(aRating);
        }

        //controlling access
        void setRating(string aRating){
            if(aRating == "G" || aRating == "PG"  || aRating == "PG-13" || aRating == "R" || aRating == "NR" ){
                rating = aRating;
            }
            else{
                rating = "NR";
            }
        }

        //to get the rating which is private
        string getRating(){
            return rating;
        }
};

int main(){
    Movie avengers ("The Avengers", "Joss Whedon", "PG-13");

    //modify rating
    // avengers.setRating("Weird");

    cout << avengers.getRating() << endl;
    return 0;
}