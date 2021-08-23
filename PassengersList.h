#pragma once
#include <vector>
#include <string>
#include "Passenger.h"
#include <fstream>


class PassengersList
{
	std::vector<Passenger> passengers;
public:
	void ReadPassengers(std::string filePath);
	void Show();
};

