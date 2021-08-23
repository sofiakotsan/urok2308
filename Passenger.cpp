#include "Passenger.h"
using namespace std;

Passenger::Passenger(string rawInfo)
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
	cout << "\tembarked: " << embarked << endl;
}

//ostream& operator<< (ostream& os, const Passenger& p)
//{
//	os << p.getPsngrID() << ";";
//	os << p.getSurvived() << ";";
//	os << p.getPasngrClass() << ";";
//	os << p.getName() << ";";
//	os << p.getSex() << ";";
//	os << p.getAge() << ";";
//	os << p.getSiblings() << ";";
//	os << p.getParch() << ";";
//	os << p.getTicket() << ";";
//	os << p.getFare() << ";";
//	os << p.getCabin() << ";";
//	os << p.getEmbarked() << ";\n";
//
//	return os;
//}

void Passenger::WriteToFile(ofstream& output) {
	output << pasngrID << ";";
	output << survived << ";";
	output << pasngrClass << ";";
	output << name << ";";
	output << sex << ";";
	output << age << ";";
	output << siblings << ";";
	output << parch << ";";
	output << ticket << ";";
	output << fare << ";";
	output << cabin << ";";
	output << embarked << ";\n";
}