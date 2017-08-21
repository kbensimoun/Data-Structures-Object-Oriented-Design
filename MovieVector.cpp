// Kevin Bensimoun
// This program takes in movie information into vectors
// returns all the information back at the end

#include <iostream>
#include <vector>
#include <iomanip>
#include <string>
using namespace std;

struct Movie {
	string title;
	string director;
	int year;
	int runTime;
};

void output(vector<Movie>movie, int x);
void addMovie(struct Movie &input, vector<Movie> &newMovie);

int main()
{
	char input = 'y';
	vector <Movie> newMovie;

	while (input == 'y' || input == 'Y') {
		Movie temp;
		addMovie(temp, newMovie);
		cout << "\n\nDo you have more movie info to enter?";
		cout << endl;
		cout << "Enter y/Y for yes or n/N for no: ";
		cin >> input;
		cin.ignore();
		cout << endl;
	}
	
	output(newMovie, newMovie.size());
	return 0;
}

void output(vector<Movie> movie, int x)
{
	int i = 0;

	cout << "Here is the info that you entered:";

	while (i < x) {
		cout << "\nMovie title: " << movie[i].title;
		cout << "\nMovie director: " << movie[i].director;
		cout << "\nMovie year: " << movie[i].year;
		cout << "\nMovie Length: " << movie[i].runTime
			 << " Minutes";
		cout << endl;
		i++;
	}

}

void addMovie(struct Movie &input, vector<Movie> &newMovie)
{
	cout << "Enter the title of the movie: ";
	getline(cin, input.title);
	cout << "Enter the director's name: ";
	getline(cin, input.director);
	cout << "Enter the year the movie was created: ";
	cin >> input.year;
	cout << "Enter the movie length(in minutes): ";
	cin >> input.runTime;
	newMovie.push_back(input);
}