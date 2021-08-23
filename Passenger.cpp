#include "Passenger.h"
using namespace std;

void Passenger::ParcePassenger(string rawInfo)
{
	stringstream pasngrInfo(rawInfo);

	pasngrInfo >> pasngrID;
	pasngrInfo >> survived;
	pasngrInfo >> pasngrClass;
	pasngrInfo >> name;
	pasngrInfo >> sex;
	pasngrInfo >> age;
	pasngrInfo >> siblings;
	pasngrInfo >> parch;
	pasngrInfo >> ticket;
	pasngrInfo >> fare;
	pasngrInfo >> cabin;
	pasngrInfo >> embarked;
}

void Passenger::Show()
{
	cout << "pasngrID: " << pasngrID;
	cout << "\tpasngrID: " << survived;
	cout << "\tpasngrClass: " << pasngrClass;
	cout << "\tname: " << name;
	cout << "\tsex: " << sex;
	cout << "\tage: " << age;
	cout << "\tsiblings: " << siblings;
	cout << "\tparch: " << parch;
	cout << "\tticket: " << ticket;
	cout << "\tfare: " << fare;
	cout << "\tcabin: " << cabin;
	cout << "\tembarked: " << embarked;
}