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
	PassengersList list;
	list.ReadPassengers("titanic_passenger_2.csv");
	//list.Show();

	//cout << list.countMales() << endl;
	//cout << list.countFemales() << endl;

	list.WriteMales("allmale.csv");

	return 0;
}
