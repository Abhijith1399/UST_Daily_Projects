/*Q2.Movie Rating System
Problem:
Create a class Movie with members: title, genre, rating (out of 10). Write functions to accept movie details and another
function to print "Hit", "Average", or "Flop" based on the rating.*/



#include<iostream>
#include"movie.h"
#include<string>
using namespace std;




void Movie:: settitle(string t)
{
	title=t;
}
string Movie::gettitle()
{
	return title;
}
void Movie::setrate(float r)
{
	rate=r;
}
float  Movie::getrate()
{
	return rate;
}
void Movie::setgenere(string g)
{
	genere=g;

}
string Movie::getgenere()
{
	return genere;
}

void Movie::find_rate()
{
	
	cout << "enter the genere" << endl;
	cin >> genere;
	cout << "enter the rate" << endl;
	cin >> rate;
	cout << "enter the movie" << endl;
	cin >> title;
	

	if (rate<=3)
	{
		cout << " flop" << endl;
	}
	else if(rate<=6)
	{
		cout << " average" << endl;
	}
	else if (rate <= 10)
	{
		cout << " hit" << endl;
	}
	
}

void  Movie::display()
{
	find_rate();
	
	cout << "movie=" << title << endl;
	cout << "generge=" << genere << endl;
	cout << "rating=" << rate << endl;

}
		