#include<iostream>
#include<ctime>
#include "Passenger.h"
using namespace std;

//based on the option that the user has selec
void PassengerMenu()
{	
	int option;
	enum subChoices{Add=1,Remove,Edit,PrintOne,PrintAll,Back};

	do
	{
		cout<<"1. Add\n2. Remove\n3. Edit\n4. Print Passenger Information\n";
		cout<<"5. Print Out All Passenger\n6. Go Back\n";
		cout<<"Enter choice:";
		cin>>option;
		subChoices choice=static_cast<subChoices>(option);
	
		switch(choice)
		{
			case Add:
				break;
			case Remove:
				break;
			case Edit:
				break;
			case PrintOne:
				break;
			case PrintAll:
				break;
			case Back:
				break;
			default:
				cout<<"Wrong choice."<<endl;
		}
	}while(toupper(option) !=6);
}





//Code below is for the header file
//the default Constructor
Passenger::Passenger()
{
	name=" ";
	ID=0000000;
	Payment=0;
	rating=0.0;
	Pets=false;
	Handicap=false;
}

void Passenger::setID()
{

}
		
int Passenger::getID()
{
	return ID;
}
		
void Passenger::setName(string name)
{
	this->name=name;
}
		
string Passenger::getName(){return name;}

void Passenger::setPets(char option)
{
	if(toupper(option)=='Y')
	{
		Pets=true;
	}
}
bool Passenger::getPets(){return Pets;}

void Passenger::setHandicap(char option) //fix
{
	if(toupper(option)=='Y')
	{
		Handicap=true;
	}
}
bool Passenger::getHandicap(){return Handicap;}

void Passenger::setPayment(int Payment)
{
	this->Payment=Payment;
}
int Passenger::getPayment(){return Payment;}

void Passenger::setRating(float rating)
{
	this->rating=rating;
}
float Passenger::getRating(){return rating;}

void Passenger::PrintOut()
{
	cout<<"Name:"<<getName()<<"\tID:"<<getID()<<endl<<"Pets:";
	if(!(getPets()))
	{
		cout<<"No\t";
	}
	else
	{
		cout<<"Yes\t";
	}
	cout<<"Handicap:";
	if(!(getHandicap()))
	{
		cout<<"No"<<endl;
	}
	else
	{
		cout<<"Yes"<<endl;
	}
	cout<<"Minimum Rating:"<<getRating()<<endl;
}

