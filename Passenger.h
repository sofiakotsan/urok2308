#pragma once
#include <string>
#include <iostream>
#include <sstream>

class Passenger
{

	int pasngrID;
	bool survived;
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
	Passenger(std::string filePath);
	void Show();
};

