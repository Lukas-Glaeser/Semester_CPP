#include <iostream>
#include "Bruch.h"

Bruch::Bruch() {
	zaeler = 1;
	nenner = 1;
}

int Bruch::get_zaeler() {
	return zaeler;
}

int Bruch::get_nenner() {
	return nenner;
}

void Bruch::set_zaeler(int a) {
	zaeler = a;
}

void Bruch::set_nenner(int a) {
	nenner = a;
}

void Bruch::eingabe() {
	std::cin >> this->zaeler;

	std::cin >> this->nenner;
}

void Bruch::ausgabe(Bruch& a) {
	
	std::cout << "Zaeler = " << a.zaeler << " Nenner = " << a.nenner << std::endl;

}

void Bruch::mult(Bruch& a) {
	int temp0, temp1;

	temp0 = this->zaeler * a.zaeler;

	temp1 = this->nenner * a.nenner;

	std::cout << "Zaeler = " << temp0 << " Nenner = " << temp1 << std::endl;
}

void Bruch::div(Bruch a) {
	int temp0, temp1;

	temp0 = this->zaeler * a.nenner;

	temp1 = this->nenner * a.zaeler;

	std::cout << "Zaeler = " << temp0 << " Nenner = " << temp1 << std::endl;
}

Bruch Bruch::add(Bruch a) {
	Bruch temp;

	temp.zaeler = this->zaeler * a.nenner + a.zaeler * this->nenner;
	temp.nenner = this->nenner * a.nenner;

	return temp;

	//std::cout << "Zaeler = " << temp0 << " Nenner = " << temp1 << std::endl;
}

Bruch Bruch::sub(Bruch& a) {
	Bruch temp;

	temp.zaeler = this->zaeler * a.nenner - a.zaeler * this->nenner;

	temp.nenner = this->nenner * a.nenner;

	return temp;

	//std::cout << "Zaeler = " << temp0 << " Nenner = " << temp1 << std::endl;
}