#pragma once
#include <string>

class Passenger
{
	int pasngrID;
	int pasngrClass;
	std::string name;
	std::string sex;
	double age;
	int siblings;
	int parch;
	std::string ticket;
	double fare;
	std::string cabin;
	std::string embarked;
public:
	void ParcePassenger(std::string filePath);
};

