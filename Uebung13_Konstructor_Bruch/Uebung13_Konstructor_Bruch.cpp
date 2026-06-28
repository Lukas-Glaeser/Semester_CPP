#include <iostream>
#include "Bruch.h"

int main() {
	Bruch B0, B1;

	B0.ausgabe(B0);
	B0.set_zaeler(2);	
	B0.set_nenner(2);

	std::cout << "Fuehre eingabe aus. " << std::endl;
	B0.eingabe();
	std::cout << "Fuehre eingabe aus. " << std::endl;
	B1.eingabe();
	std::cout << "Fuehre mult aus. " << std::endl;
	B0.mult(B1);
	std::cout << "Fuehre div aus. " << std::endl;
	B0.div(B1);
	std::cout << "Fuehre add aus. " << std::endl;
	B0 = B0.add(B1);
	B0.ausgabe(B0);
	std::cout << "Fuehre sub aus. " << std::endl;
	B0 = B0.sub(B1);
	B0.ausgabe(B0);
}