#include <iostream>
#include "Passenger.h"
#include "Driver.h"
using namespace std;

int main()
{
	//Passenger myPassenger;
	//myPassenger.PrintOut();
	//STEP 1 INFO 
    	cout<<"+------------------------------------------------------------------+"<<endl;
    	cout<<"|               Computer Science and Engineering                   |"<<endl;
    	cout<<"|                CSCE 1040 - Computer Science II                   |"<<endl;
	cout<<"|                	   Homework III                	   	   |"<<endl;
	cout<<"|         Manuel Osorto meo0106 (manuelosorto@my.unt.edu)          |"<<endl;
    	cout<<"+------------------------------------------------------------------+"<<endl;

	enum Choice{Passenger=1,Driver=2,Quit=3};
	int choice;
	
	
	
	//main menu
	do
	{
		cout<<"Main Menu"<<endl;
		cout<<"1. Passenger\n2. Driver\n3. Quit\n";
		cout<<"Enter choice:";
		cin>>choice;
		Choice choices=static_cast<Choice>(choice);

		switch(choice)
		{
			case Passenger:
					PassengerMenu();
					//cout<<"This is a test for Passenger."<<endl;
					break;
			case Driver:
					DriverMenu();
					//cout<<"This is a test for Driver."<<endl;
					break;
			case Quit:
					cout<<"Have a Great Day! Goodbye!"<<endl;
					exit(1);
			default:
					cout<<"Wrong choice.\n";
		}		


	}while(choice !=3);

	return 0;
}