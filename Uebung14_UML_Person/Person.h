#pragma once
#include <iostream>

class Person
{
public:
	Person();

private:
	std::string vorname;
	std::string nachname;
	int alter;
	int groesse_in_cm;

	std::string get_vorname();
	std::string get_nachname();
	int get_alter();
	int get_groesse();

public:
	void set_vorname(std::string name);
	void set_nachname(std::string name);
	void set_alter(int alter);
	void set_groesse(int groesse_in_cm);
	void set_groesse(double groesse_in_m);
	void info();

};

