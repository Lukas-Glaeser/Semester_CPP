#include <iostream>
#include "Bruch.h"

Bruch::Bruch() {
	zaeler = 0;
	nenner = 1;
}

Bruch::Bruch(int zaeler, int nenner) {
	this->zaeler = zaeler;
	this->nenner = nenner;
}

Bruch::Bruch(int a) {
	this->zaeler = a;
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

void Bruch::ausgabe() {

	std::cout << "Zaeler = " << this->zaeler << " Nenner = " << this->nenner << std::endl;

}

Bruch Bruch::mult(Bruch a) {
	Bruch temp;

	temp.zaeler = this->zaeler * a.zaeler;

	temp.zaeler = this->nenner * a.nenner;

	return temp;

	//std::cout << "Zaeler = " << temp0 << " Nenner = " << temp1 << std::endl;
}

Bruch Bruch::mult(int a) {
	Bruch temp(a);

	return mult(temp);

}

Bruch Bruch::div(Bruch a) {
	Bruch temp;

	temp.zaeler = this->zaeler * a.nenner;
	
	temp.zaeler = this->nenner * a.zaeler;

	return temp;

	//std::cout << "Zaeler = " << temp0 << " Nenner = " << temp1 << std::endl;
}

Bruch Bruch::add(Bruch a) {
	Bruch temp;

	temp.zaeler = this->zaeler * a.nenner + a.zaeler * this->nenner;
	temp.nenner = this->nenner * a.nenner;

	return temp;

	//std::cout << "Zaeler = " << temp0 << " Nenner = " << temp1 << std::endl;
}

Bruch Bruch::add(int a) {
	Bruch temp;

	temp.zaeler = this->zaeler + this->nenner * a;

	return temp;
}

Bruch Bruch::sub(Bruch a) {
	Bruch temp;

	temp.zaeler = this->zaeler * a.nenner - a.zaeler * this->nenner;

	temp.nenner = this->nenner * a.nenner;

	return temp;

	//std::cout << "Zaeler = " << temp0 << " Nenner = " << temp1 << std::endl;
}