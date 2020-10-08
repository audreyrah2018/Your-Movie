

// Written by: Audrey Rahimi



#include <iostream>  //for cin and cout
#include <string>    // for string 


using namespace std;
   
Movie::Movie()
{
 name= "Frozen II";   
 schedule= "2:00-5:00pm";
 price= 17.99;                                                 //contructor 1
}
   
Movie::Movie(string name1)                                     //contructor 2, contribute schedul and price by default                                     
    {name=name1;
	schedule= "2:00-5:00pm" ;
    price= 17.99 ;}  
   
Movie::Movie(string name2, string schedule2, double price2)    // contructor 3 set all attributes to the passed values
    {name=name2;
	 schedule=schedule2  ;
     price= price2 ;}
/////////////////////////////////

   string Movie:: getName()                                       // function  , reurn the name of the movie
    {name=" Frozen || ";
	 return name;}          
   
   
   string Movie::getSchedule(string schedule)                      // function , return the schedule of the movie
    { schedule= "2:00-5:00pm";
      return schedule;}


   double Movie::getPrice()                                    // function , return the price of the movie                   
    {price= 17.99 ;
     return price;}   

	
   void Movie::setName(string& n) {}                          //  this fonction help the other fonction be accessible 
    
    
   void Movie::setSchedule(string s)                             // function , set the schedule attribute to s
     {schedule= s;}
	

   void Movie::setPrice(double p) {}                             // function ,set the price attribute to p      





   bool Movie::equals(string name1)                           // function , return true if name, schedule and price of calling objects are the same as those of passed m , otherwise false

     {Movie m(name);
    	if  (name1==m.name)
	    {return true;}	   
         return (0);}


   void Movie::addPrice(double p)                            // add p and modify the price of movie
     { price=price+p;}

///////////////////////////

   void Movie::printMovie()                                 // display on console the movie name, schedule, price
     {cout<<"NAME:   "<< name <<",  SCHEDULE:    "<< schedule <<",   PRICE:  "<< price << endl ; }  
 
   
//////////////////////////



