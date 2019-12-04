/*
 * Code for the Movie class definition
 * Written by: Cathy Bishop
 *
 */

#include    <iostream>
#include    "../include/Movie.h"
using namespace std;



Movie::Movie()
{
    _title = "" ;
    _language = "" ;
    _comment = "" ;
    _run_time = 0;
    _available = false;
}

Movie::Movie(string title)
{
    _title = title;
    _language = "English" ;
    _comment = "" ;
    _run_time = 0;
    _available = true;
}
Movie::Movie(string title, int run_time)
{
    _title = title ;
    _language = "English" ;
    _comment = "" ;
    _run_time = run_time;
    _available = true;
}
Movie::Movie(string title, string language, int run_time)
{
    _title = title ;
    _language = language;
    _comment = "" ;
    _run_time = run_time;
    _available = true;
}

int Movie::getRuntime() const
{
    return (_run_time);
}

string Movie::getComment() const
{
    return (_comment);
}
bool Movie::isAvailable() const
{
    return (_available);
}
void Movie::setComment(string comment)
{
    _comment = comment;
}

bool Movie::rentIt()
{
    if (!_available)
    {
        cout << "Sorry, " << _title << " is out.\n";
        return(false);
    }

    cout << "Thank you for renting " << _title << ".\n";
    _available = false;
    return(true);
}

void Movie::returnIt()
{
    _available = true;
}

void Movie::print()
{
    int    nspaces;

    cout << _title ;

    nspaces = 25 - _title.length();
    cout.width(nspaces);
    cout << " " << _run_time << " minutes";
    if (_available)
        cout << " IN";
    else
        cout << " OUT";

    if (_language != "English")
        cout << " (" << _language << ")";

    cout << " " << _comment;
    cout << endl;
}

ostream &operator << (ostream &os, const Movie &out_emp)
{

    int    nspaces;

    os << out_emp.getTitle() ;

    nspaces = 25 - out_emp.getTitle().length();
    os.width(nspaces);
    os << " " << out_emp.getRuntime() << " minutes";
    if (out_emp.isAvailable())
        os << " IN";
    else
        os << " OUT";

    if (out_emp.getLanguage() != "English")
        os << " (" << out_emp.getLanguage() << ")";

    os << " " << out_emp.getComment();
    os << endl;
    return os;
}
istream &operator >> (istream &is, Movie &in_emp)
{
  return is;
}
