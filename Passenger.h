#pragma once
#include <string>
#include <fstream>
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
	int getPsngrID() const { return pasngrID; }
	bool getSurvived() const { return survived; }
	int getPasngrClass() const { return pasngrClass; }
	std::string getName() const { return name; }
	std::string getSex() const { return sex; }
	double getAge() const { return age; }
	int getSiblings() const { return siblings; }
	int getParch() const { return parch; }
	std::string getTicket() const { return ticket; }
	double getFare() const { return fare; }
	std::string getCabin() const { return cabin; }
	std::string getEmbarked() const { return embarked; }

	Passenger(std::string filePath);
	void Show();
	void WriteToFile(std::ofstream& output);
	//friend std::ostream& operator<< (std::ostream& os, const Passenger& p);
};

