#include <iostream>
#include "Punkt.h"


int main() {
	Punkt kord0, kord1, kord2;

	kord0.einlesen();
	kord1.einlesen();

	std::cout << "Abstand von P0 ";
	kord0.ausgabe();
	std::cout << " und P1 ";
	kord1.ausgabe();
	std::cout << " lautet = " << kord0.abstand(kord1) << std::endl;

	std::cout << "Add P0 and P1 = ";
	kord2 = kord0.add(kord1);
	kord2.ausgabe();
}