



// Written by: Audrey Rahimi


#include <iostream>  //for cin and cout
#include <string>    // for string 
#include "Movie.h"
#include "Movie.cpp"

using namespace std;

  //  whole codes in this cpp

int main()
{
int exit=1;
while (exit!=0)    // help user end the program or not
{
cout<<"--------------------------------------"<<endl;
cout<<"       Movie Class Driver             "<<endl;
cout<<"--------------------------------------"<<endl;

	cout<<endl;
	string name2, name3, schedule2, schedule3,schedule ;// varaibles' name in movie 2 and movie 3
    double price1, price2, price3; // araibles' name in movie 2 and movie 3
    
    
    cout<<"Enter the name of the movie2 please:  ";
    cin>>name2;
	cout<<"Enter the name, schedule and price of the movie3 please:  ";
    cin>>name3>>schedule3>>price3;
     
    ///////////////////
    
	    cout<<endl<<"Movie 1 is the movie info "<<endl;
        Movie movie1;                                         // create object using default constructor
        movie1.printMovie();
        price1=movie1.getPrice();
            
    ///////////////////
	 
        cout<<endl<<"Movie 2 is the movie info "<<endl;      // create object using constructor 2
    	Movie movie2(name2);
    	movie2.printMovie();
    	schedule2=movie2.getSchedule(schedule2);
        price2=movie2.getPrice();
        
    
	///////////////////
		
    	cout<<endl<<"Movie 3 is the movie info "<<endl;     // create and diplay object using constructor 3 
    	Movie movie3(name3,schedule3,price3 );
    	movie3.printMovie();
     	
    //////////////////
    cout<<endl<<endl<<"Compare the two Movie objects (Movie2&3)"<<endl<<"The movie info"<<endl;     //compare 2 objects
    
	movie2.printMovie();
	  if (name2==name3 && schedule2==schedule3 && price2==price3)
        cout<<"Is equal to the movie info  "<<endl;
      else
	    cout<<"Is not equal to the movie info "<<endl;    
	movie3.printMovie();
	
	//////////////////
	
	cout<<endl<<"Enter the name, schedule and price of the movie1 please:  ";  // section 6 prompt the user for name, schedule and price
    cin>>name3>>schedule3>>price3;
	cout<<endl<<"Time 1 is now: The movie info "<<endl;
	movie1.printMovie();
	cout<<endl<<"After increasing the price movie2 : "<<endl; 
	cout<<price2;
	price2=price2+(price3*2);                 
    cout<<"The price of movie2 is now "<<price2<<endl; // section 7 of part c :increse the price of second object movie 2 twice of the third object of movie 3
    cout<<"The price of movie3 is now "<< price3 <<endl<<endl;  
	cout<<"The total price using of movie 1,2 and 3 are: ";  // sum up the total price
    cout << price1+price2+ price3<< endl<<endl;  //increse the price of second object movie 2 twice of the third object of movie 3
   
	cout<<"Thank you for using this program!  "<<endl<<endl;
	
    cout<<"Program ended with exit code : ";
    cin>>exit;
   
	  
} //while 
    
   return 0;
}




 





