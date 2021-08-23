#include "PassengersList.h"
using namespace std;

void PassengersList::ReadPassengers(string filePath)
{
	ifstream file(filePath);
	string buffer;

	while (!file.eof())
	{
		getline(file, buffer);
		passengers.push_back(Passenger(buffer));
	}

	file.close();
}

void PassengersList::Show()
{
	for (auto passenger : passengers)
	{
		passenger.Show();
	}
}

int PassengersList::countMales()
{
	males = count_if(passengers.begin(), passengers.end(), [](const Passenger& p) {
		return p.getSex() == "male";
	});

	return males;
}

int PassengersList::countFemales()
{
	females = count_if(passengers.begin(), passengers.end(), [](const Passenger& p) {
		return p.getSex() == "female";
		});

	return females;
}

void PassengersList::WritePassengers(std::vector<Passenger>& pasngrs, string filePath)
{
	ofstream file(filePath);

	for (auto& pasngr : pasngrs)
	{
		//filePath << pasngr;
		pasngr.WriteToFile(file);
	}

	file.close();
}

void PassengersList::WriteMales(string filePath)
{
	vector<Passenger> pasngrs;
	copy_if(passengers.begin(), passengers.end(), back_inserter(pasngrs), [](const Passenger& p) {
		return p.getSex() == "male";
	});


	WritePassengers(pasngrs, filePath);
}

void PassengersList::WriteFemales(string filePath)
{
	/*auto malePasngrs = copy_if(passengers.begin(), passengers.end(), [](const Passenger& p) {
		return p.getSex() == "female";
	});*/
}