#include <iostream>

class Punkt {
public:
	int x;
	int y;

	void einlesen() {
		std::cout << "Gebe x und y ein." << std::endl;
		std::cin >> this->x;
		std::cin >> this->y;

	}

	void ausgabe() {
		std::cout << "x = " << this->x << " y = " << this->y << std::endl;
	}

	int abstand(Punkt& a) {
		int erg, tempX, tempY;

		tempX = this->x - a.x;
		tempY = this->y - a.y;

		erg = sqrt(tempX * tempX + tempY * tempY);

		return erg;
	}

	Punkt add(Punkt& a) {
		Punkt erg;

		erg.x = this->x + a.x;
		erg.y = this->y + a.y;

		return erg;
	}

};



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