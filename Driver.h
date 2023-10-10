#include <iostream>
using namespace std;


class Driver
{
	private:
		string driverName, VehicleType,notes;
		int driverID, VehicleCap;
		float DriverRating;
		bool DriverHandi, DriverPet,Availability;
	public:
		//default constructor
		Driver();

		//set and get name
		void setDriverName(string name);
		string getDriverName();
		
		//set and get ID
		void setDriverID();
		int getDriverID();

		//set and get VehicleTpye
		void setVehicleType(string description);
		string getVehicleTpye();

		//set and get notes
		void setDriverNotes(string notes);
		string getDriverNotes();

		//set and get boolean variables
		void setDriverPets(char option);
		bool getDriverPets();
		void setDriverHandi(char option);
		bool getDriverHandi();
		void setDriverAva(char option);
		bool getDriverAva();

		//set and get rating
		void setDriverRating();
		float getDriverRating();

		void DriverPrintOut();
		
		
};