#pragma once
#include "Car.h"
#include <iostream>
#include <sstream>

using namespace std;

class Lorry
{
private:
	double carryingAbility;
	Car car;

public:
	double GetCarryingAbility() const { return carryingAbility; }
	Car GetCar() const { return car; }
	void SetCarryingAbility(double carryingAbility) { this->carryingAbility = carryingAbility; }
	void SetCar(Car car) { this->car = car; }

	Lorry(const string tradeMark = "", const double enginePower = 0, const double numberOfCylinders = 0, const double carryingAbility = 0);
	Lorry(const Lorry& l);
	~Lorry(void);

	Lorry& operator = (const Lorry& l);
	operator string () const;

	friend ostream& operator << (ostream& out, const Lorry& l);
	friend istream& operator >> (istream& in, Lorry& l);

	Lorry& operator ++ ();
	Lorry& operator -- ();
	Lorry operator ++ (int);
	Lorry operator -- (int);

	double Change2();
};

