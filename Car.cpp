#include "Car.h"

Car::Car()
	: model(""), cylinder(0), power(0)
{}

Car::Car(const string model, const int cylinder, const double power)
	: model(model)
{
	cylinder > 0 ? setCylinder(cylinder) : setCylinder(0);
	power > 0 ? setPower(power) : setPower(0);
}

Car::Car(const Car& m)
	: model(m.model), cylinder(m.cylinder), power(m.power)
{}

Car& Car::operator = (const Car& m)
{
	this->model = m.model;
	this->cylinder = m.cylinder;
	this->power = m.power;
	return*this;
}

Car::operator string () const
{
	stringstream ss;
	ss << endl;
	ss << "Model = " << model << endl;
	ss << "Cylinder = " << cylinder << endl;
	ss << "Power ( in kW ) = " << power << endl;
	return ss.str();
}

ostream& operator << (ostream& out, const Car& m)
{
	out << string(m);
	return out;
}

istream& operator >> (istream& in, Car& m)
{
	string model;
	int cylinder;
	double power;
	cout << endl;
	cout << "Model = "; cin >> model;
	cout << "Your value must be positive!" << endl;
	cout << "Cylinder = "; cin >> cylinder;
	cout << "Power ( in kW ) = "; cin >> power;
	m.setModel(model);
	cylinder > 0 ? m.setCylinder(cylinder) : m.setCylinder(0);
	power > 0 ? m.setPower(power) : m.setPower(0);
	return in;
}