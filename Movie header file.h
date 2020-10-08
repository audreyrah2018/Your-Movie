

// File name:Movie.h
// Written by: Audrey Rahimi

#include <iostream>  //for cin and cout
#include <string>    // for string 

using namespace std;

class Movie                                   // using class
{
private:
  string name;                              //member function        
  string schedule;
  double price;
  
public:
Movie();                                         //constructor 1
Movie(string);                                  //constructor  2          
Movie(string, string, double);                 //constructor  3
string getName();                             //prototype    
double getPrice();                           //prototype                           
void setName(string&);                      //prototype
void setSchedule(string);                  //prototype
void setPrice(double);                    //prototype
bool equals(string);                     //prototype
void addPrice(double);                  //prototype
void printMovie();                     //prototype
string getSchedule(string);           //prototype regarding solution of part b section 6 

};

