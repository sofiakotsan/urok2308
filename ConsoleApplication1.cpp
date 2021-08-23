#include <iostream>
#include "PassengersList.h"
using namespace std;


// passengerID, int
//Survived, bool
//PassClass, int
//Name, string
//Sex, string
//Age, double
//Siblings int
//Parch	   int
//Ticket string
//Fare(price), double
//Cabin, string
//Embarked, string

int main()
{
    
	/*ifstream file("titanic_passenger_2.csv");

	string info;

	getline(file, info);

	Passenger p;
	p.ParcePassenger(info);
	p.Show();

	file.close();*/

	PassengersList list;
	list.ReadPassengers("titanic_passenger_2.csv");
	list.Show();

	return 0;
}
