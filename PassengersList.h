#pragma once
#include <vector>
#include <string>
#include <algorithm>
#include "Passenger.h"
#include <fstream>


class PassengersList
{
	std::vector<Passenger> passengers;
	int males;
	int females;

	void WritePassengers(std::vector<Passenger>& pasngrs, std::string filePath);
public:
	void ReadPassengers(std::string filePath);
	void Show();
	int countMales();
	int countFemales();
	void WriteMales(std::string filePath);
	void WriteFemales(std::string filePath);
};

