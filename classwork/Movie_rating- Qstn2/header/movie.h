#ifndef __ MOVIE__

#define __MOVIE__
#include<string>
using namespace std;
class Movie {

private:
	string title;
	float rate;
	string genere;


public:
	void settitle(string);
	string gettitle();
	void setrate(float);
	float getrate();
	void  setgenere(string);
 string getgenere();
	void find_rate();
	void display();


};
#endif
