#include "Punkt.h"

#include <iostream>

void Punkt::einlesen() {
	std::cout << "Gebe x und y ein." << std::endl;
	std::cin >> this->x;
	std::cin >> this->y;

}

void Punkt::ausgabe() {
	std::cout << "x = " << this->x << " y = " << this->y << std::endl;
}

int Punkt::abstand(Punkt& a) {
	int erg, tempX, tempY;

	tempX = this->x - a.x;
	tempY = this->y - a.y;

	erg = sqrt(tempX * tempX + tempY * tempY);

	return erg;
}

Punkt Punkt::add(Punkt& a) {
	Punkt erg;

	erg.x = this->x + a.x;
	erg.y = this->y + a.y;

	return erg;
}