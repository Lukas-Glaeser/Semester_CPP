#include <iostream>

class Punkt {
public:
	int x;
	int y;


	void einlesen() {
		std::cout << "Gebe x." << std::endl;
		std::cin >> this->x;
		std::cout << "Gebe y." << std::endl;
		std::cin >> this->y;
	}

	void ausgabe() {
		std::cout<< "x = " << this->x << " und y = " << this->y;
	}

	int abstand(Punkt& a) {
		
		int tempX;
		int tempY;
		double erg;

		tempX = this->x - a.x;
		tempY = this->y - a.y;

		erg = sqrt(tempX * tempX + tempY * tempY);

		return erg;
	}

	Punkt addieren(Punkt& a) {
		Punkt temp;
		temp.x = this->x + a.x;
		temp.y = this->y + a.y;

		return temp;
	}
};

int main() {

	Punkt kordinate0;
	Punkt kordinate1;

	kordinate0.einlesen();
	kordinate1.einlesen();

	std::cout << "Der Abstand von ";
	kordinate0.ausgabe();
	std::cout << " zu ";
	kordinate1.ausgabe();
	std::cout << " ist "<< kordinate0.abstand(kordinate1) << std::endl;

	Punkt kordinate2 = kordinate0.addieren(kordinate1);
	std::cout << "Der neue Punkt lautet ";
	kordinate2.ausgabe();

}
