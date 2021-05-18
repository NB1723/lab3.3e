#pragma once
#pragma pack(1)
#include "Object.h"
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

class Car : public Object
{
private:
	string model;
	int cylinder;
	double power;

public:

	string getModel() const { return model; }
	int getCylinder() const { return cylinder; }
	double getPower() const { return power; }

	void setModel(string model) { this->model = model; };
	void setCylinder(int cylinder) { this->cylinder = cylinder; };
	void setPower(double power) { this->power = power; };

	Car();
	Car(const string model, const int cylinder, const double power);
	Car(const Car& m);

	Car& operator = (const Car& m);
	operator string () const;

	friend ostream& operator << (ostream& out, const Car& m);
	friend istream& operator >> (istream& in, Car& m);
};
