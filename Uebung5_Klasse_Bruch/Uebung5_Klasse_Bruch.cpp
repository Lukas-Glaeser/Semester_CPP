#include <iostream>

class Bruch {
public:
	int zaeler;
	int nenner;

	void eingabe() {
		std::cin >> this->zaeler;

		std::cin >> this->nenner;
	}

	void ausgabe() {
		
	}

	void mult(Bruch& a) {
		int temp0, temp1;

		temp0 = this->zaeler * a.zaeler;

		temp1 = this->nenner * a.nenner;

		std::cout << "Zaeler = " << temp0 << " Nenner = " << temp1<<std::endl;
	}

	void div(Bruch& a) {
		int temp0, temp1;

		temp0 = this->zaeler * a.nenner;

		temp1 = this->nenner * a.zaeler;

		std::cout << "Zaeler = " << temp0 << " Nenner = " << temp1 << std::endl;
	}

	void add(Bruch& a) {
		int temp0, temp1;

		temp0 = this->zaeler * a.nenner + a.zaeler * this->nenner;

		temp1 = this->nenner * a.nenner;

		std::cout << "Zaeler = " << temp0 << " Nenner = " << temp1 << std::endl;
	}

	void sub(Bruch& a) {
		int temp0, temp1;

		temp0 = this->zaeler * a.nenner - a.zaeler * this->nenner;

		temp1 = this->nenner * a.nenner;

		std::cout << "Zaeler = " << temp0 << " Nenner = " << temp1 << std::endl;
	}

};


int main() {
	Bruch B0, B1;

	std::cout << "Fuehre eingabe aus. " << std::endl;
	B0.eingabe();
	std::cout << "Fuehre eingabe aus. " << std::endl;
	B1.eingabe();
	std::cout << "Fuehre mult aus. " << std::endl;
	B0.mult(B1);
	std::cout << "Fuehre div aus. " << std::endl;
	B0.div(B1);
	std::cout << "Fuehre add aus. " << std::endl;
	B0.add(B1);
	std::cout << "Fuehre sub aus. " << std::endl;
	B0.sub(B1);
}