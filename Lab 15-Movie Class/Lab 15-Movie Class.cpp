#include <iostream>
#include <vector>
using namespace std;

class Movie {
private:
    string title;
    int yearReleased;
    string screenWriter;

public:
    void setTitle(const string& t) { title = t; }
    void setYearReleased(int y) { yearReleased = y; }
    void setScreenWriter(const string& s) { screenWriter = s; }

    string getTitle() const { return title; }
    int getYearReleased() const { return yearReleased; }
    string getScreenWriter() const { return screenWriter; }

    void print() const {
        cout << "Movie: " << title << endl;
        cout << "    Year released: " << yearReleased << endl;
        cout << "    Screenwriter: " << screenWriter << endl;
    }
};

int stringToInt(const string& str) {
    int num = 0;
    for (char ch : str) {
        num = num * 10 + (ch - '0');
    }
    return num;
}

int main() {
    vector<Movie> movieList;

    string inputData[] = {
        "Best Movie of 2019", "2019", "TestScreenWriter1",
        "Best Movie of 2020", "2020", "TestScreenWriter2",
        "Best Movie of 2021", "2021", "TestScreenWriter3",
        "Best Movie of 2022", "2022", "TestScreenWriter4"
    };

    for (int i = 0; i < 12; i += 3) {
        Movie tempMovie;
        tempMovie.setTitle(inputData[i]);
        tempMovie.setYearReleased(stringToInt(inputData[i + 1]));
        tempMovie.setScreenWriter(inputData[i + 2]);

        movieList.push_back(tempMovie);
    }

    for (const auto& movie : movieList) {
        movie.print();
        cout << endl;
    }

    return 0;
}
