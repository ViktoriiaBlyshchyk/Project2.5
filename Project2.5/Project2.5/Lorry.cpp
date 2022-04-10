#include "Car.h"
#include "Lorry.h"

Lorry::Lorry(const string tradeMark, const double enginePower, const double numberOfCylinders, const double carryingAbility)
	: car(tradeMark, enginePower, numberOfCylinders), carryingAbility(carryingAbility)
{}

Lorry::Lorry(const Lorry& l)
{
	car = l.car;
	carryingAbility = l.carryingAbility;
}

Lorry::~Lorry(void)
{}

Lorry& Lorry::operator = (const Lorry& l)
{
	car = l.car;
	carryingAbility = l.carryingAbility;

	return *this;
}

Lorry::operator string () const 
{
	stringstream ss;
	ss << "carryingAbility = " << carryingAbility << endl;
	return string(car) + ss.str();
}

ostream& operator << (ostream& out, const Lorry& l)
{
	out << string(l);
	return out;
}

istream& operator >>(istream& in, Lorry& l)
{
	double carryingAbility;
	cout << endl;
	cout << "Car: "; in >> l.car;
	cout << "carryingAbility = "; in >> carryingAbility;

	carryingAbility = l.Change2();
	l.SetCarryingAbility(carryingAbility);

	return in;
}

Lorry& Lorry::operator ++ () 
{
	++car;
	++carryingAbility;
	return *this;
}

Lorry& Lorry::operator -- () 
{
	--car;
	--carryingAbility;
	return *this;
}

Lorry Lorry::operator ++ (int)
{
	Lorry s(*this);
	car++;
	carryingAbility++;
	return s;
}

Lorry Lorry::operator -- (int)
{
	Lorry s(*this);
	car--;
	carryingAbility--;
	return s;
}

double Lorry::Change2()
{
	double y;
	cout << "carryingAbility = "; cin >> y;
	carryingAbility = y;
	return y;
}
