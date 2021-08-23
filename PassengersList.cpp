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