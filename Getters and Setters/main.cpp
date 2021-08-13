#include <iostream>
using namespace std;

class Movie 
{
    private:
        string rating;
    public:
        string title;
        string director;

        Movie(string _title, string _director, string _rating) 
        {
            title = _title;
            director = _director;
            setRating(_rating);
        }

        void setRating(string _rating) 
        {
            if
            (
                _rating == "G" || 
                _rating == "PG" || 
                _rating == "PG-13" || 
                _rating == "R" || 
                _rating == "NR"
            )
            {
                rating = _rating;
            }
            else
            {
                cout << "ERROR: Tried to set invalid rating \"" << _rating << "\", ";
                cout << "defaulting to NR" << endl;
                rating = "NR";
            }
        }

        string getRating() 
        {
            return rating;
        }
};

int main() 
{
    Movie avengers("The Avengers", "Joss Whedon", "PG-13");

    cout << avengers.getRating() << endl;

    return 0;
}
