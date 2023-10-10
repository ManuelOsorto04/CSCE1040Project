#include<iostream>
#include<vector>
#include<string>
using namespace std;

void PassengerMenu();

class Passenger
{
	private:
		string name;
		int ID, Payment;
		bool Handicap, Pets;
		float rating;
	public:
		//default constructor
		Passenger();

		//set and get ID
		void setID();
		int getID();

		//set and get name
		void setName(string name);
		string getName();

		//Pets and Handicap
		void setPets(char option);
		bool getPets();
		void setHandicap(char option);
		bool getHandicap();

		//set and get payment
		void setPayment(int Payment);
		int getPayment();

		//set and get rating
		void setRating(float rating);
		float getRating();
		
		//Output
		void PrintOut();
};