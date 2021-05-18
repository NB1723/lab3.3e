#pragma once
#include "Car.h"

class Lorry : public Car
{
	int capacity_of_car;

public:
	int getCapacity_of_car() const { return capacity_of_car; }
	void setCapacity_of_car(int capacity_of_car) { this->capacity_of_car = capacity_of_car; }

	Lorry();
	Lorry(const string model, const int cylinder, const double power, const int capacity_of_car);
	Lorry(const Lorry& s);

	Lorry& operator = (const Lorry& s);
	operator string () const;

	Lorry& operator ++ ();
	Lorry& operator -- ();
	Lorry operator ++ (int);
	Lorry operator -- (int);

	friend ostream& operator << (ostream& out, const Lorry& s);
	friend istream& operator >> (istream& in, Lorry& s);
};