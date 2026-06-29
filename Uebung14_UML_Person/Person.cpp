#include "Person.h"

Person::Person() {
	set_vorname("TEST_VNAME");
	set_nachname("TEST_NNAME");
	set_groesse(80);
	set_alter(18);
};

std::string Person::get_vorname() {
	return vorname;
};

std::string Person::get_nachname() {
	return nachname;
};

int Person::get_alter() {
	return alter;
};

int Person::get_groesse() {
	return groesse_in_cm;
};


void Person::set_vorname(std::string name) {
	this->vorname = name;
};

void Person::set_nachname(std::string name) {
	this->nachname = name;
};

void Person::set_alter(int alter) {
	if (alter >= 0 && alter <= 150) {
		this->alter = alter;
	}
};

void Person::set_groesse(int groesse_in_cm) {
	if (groesse_in_cm >= 20 && groesse_in_cm <= 280) {
		this->groesse_in_cm = groesse_in_cm;
	}
};

void Person::set_groesse(double groesse_in_m) {
	if (groesse_in_m >= 0.2 && groesse_in_m <= 2.80 ) {
		groesse_in_cm = groesse_in_m * 100;
	}
};

void Person::info() {
	std::cout << vorname << ", " << nachname << " (" << alter << ") " << "ist ";
	if (groesse_in_cm < 100) {
		std::cout << groesse_in_cm << std::endl;
	}
	else
	{
		std::cout << groesse_in_cm / 100 << "." << groesse_in_cm % 100 << std::endl;
	}
};