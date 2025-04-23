#include<iostream>
#include <ifELSE.h>
#include<sstring.h>
using namespace std;

enum inputGenere {
	Action=1,comedy,triller,mystery,fiction
};


enum language {
	malayalam=1,hindi,tamil,kannada,marathi
};

enum typeshows {
	series=1,documentry,movie,shortmovie
};

int main()
{
	stringFunction();
	 ifElse();
	

	int language;
	int typeshows;
	int inputGenere;

	cout << "enter the language" << endl;
	cin >> language;
	cout << "enter the genere" << endl;
	cin >> inputGenere;
	cout << "enter the type" << endl;
	cin >> typeshows;

	switch (language)
	{
	case malayalam:
		cout << "malayalam movie" << endl;
	break;
	}

	switch (inputGenere)
	{
	case Action:
		cout << "Choose genere=Action" << endl;
		break;
	case comedy:
		cout << "Choose genere=comedy" << endl;
		break;
	case triller:
		cout << "Choose genere=Triller" << endl;
		break;
	case mystery:
		cout << "Choose genere=Mystry" << endl;
		break;

	case fiction:
		cout << "Choose genere=Fiction" << endl;
		break;
	default:
		cout << "choose correct Genere" << endl;
		break;
	}


	switch (typeshows)
	{
	case series:
		cout << "Its series" << endl;
		break;
	case comedy:
		cout << "Its documentory" << endl;
		break;
	case triller:
		cout << "Its movie" << endl;
		break;
	case mystery:
		cout << "Choose genere=Myst" << endl;
		break;

	}
}