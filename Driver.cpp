#include <iostream>
#include "Driver.h"

void DriverMenu()
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

//default constructor
Driver::Driver()
{
	driverName="Unknown";
	VehicleType="Unknown";
	notes="None";
	driverID=0000000;
	VehicleCap=0;
	DriverRating=3.0;
	DriverHandi=false;	
	DriverPet=false;
	Availability=false;
}

//set and get name
void Driver::setDriverName(string name)
{
	driverName=name;
}
string Driver::getDriverName(){return driverName;}
		
//set and get ID
void Driver::setDriverID()
{
	
}
int Driver::getDriverID(){return driverID;}

//set and get VehicleTpye
void Driver::setVehicleType(string description)
{
	VehicleType=description;
}
string Driver::getVehicleTpye(){return VehicleType;}

//set and get notes
void Driver::setDriverNotes(string notes)
{
	this->notes=notes;
}
string Driver::getDriverNotes(){return notes;}

//set and get boolean variables
void Driver::setDriverPets(char option)
{
	if(toupper(option)=='Y')
	{
		DriverPet=true;
	}
}
bool Driver::getDriverPets(){return DriverPet;}

void Driver::setDriverHandi(char option)
{
	if(toupper(option)=='Y')
	{
		DriverHandi=true;
	}
}
bool Driver::getDriverHandi(){return DriverHandi;}

void Driver::setDriverAva(char option)
{
	if(toupper(option)=='Y')
	{
		Availability=true;
	}
}
bool Driver::getDriverAva(){return Availability;}

//set and get rating
void Driver::setDriverRating()
{

}
float Driver::getDriverRating(){return DriverRating;}

void Driver::DriverPrintOut()
{
	cout<<"Driver Name: "<<getDriverName()<<"\tID:"<<getDriverID()<<
		endl<<"Vehicle Type: "<<getVehicleTpye()<<endl<<
		"Handicap Capability:";
	if(!(getDriverHandi()))
	{
		cout<<"No";
	}
	else
	{
		cout<<"Yes";
	}

	cout<<"\tAllowed Pets: ";
	if(!(getDriverPets()))
	{
		cout<<"No";
	}
	else
	{
		cout<<"Yes";
	}

	cout<<endl<<"Available:";
	if(!(getDriverAva()))
	{
		cout<<"No";
	}
	else
	{
		cout<<"Yes";
	}	
	cout<<endl<<"DRIVER'S NOTES: "<<getDriverNotes()<<endl;
}
