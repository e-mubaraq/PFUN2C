/*
 * Header file for the Movie class definition 
 * Written by: Cathy Bishop
 *
 */

#ifndef MOVIE_H
#define MOVIE_H

#include    <iostream>
#include    <string>

using namespace std;

class Movie
{
public:
    // CONSTRUCTORS prototypes

    Movie();
    Movie(string title);
    Movie(string title, int run_time);
    Movie(string title, string language, int run_time);

    // ACCESS function prototypes

    string getTitle() const{return (_title);};
    string getLanguage() const{return _language;};
    string getComment() const;
    int getRuntime() const;
    bool isAvailable() const;
    bool isIn() const;
    bool isOut() const;

    // MEMBER FUNCTION prototypes

    void setRuntime(int run_time);
    void setComment(string comment);

    void print();
    bool rentIt();
    void returnIt();

private:
    string    _title;
    string    _language;
    string    _comment;
    int       _run_time;
    bool      _available;

};

// Non-member functions for manipulating Movie objects.

ostream &operator << (ostream &os, const Movie &out_emp);
istream &operator >> (istream &is, Movie &in_emp);

#endif
