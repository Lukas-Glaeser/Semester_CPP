#include <iostream>

class Bruch {
public:
	int zaeler;
	int nenner;

	void Eingabe() {
		std::cout << "Gebe eine zahl ein ";
		std::cin >> zaeler;
		std::cout << " Gebe eine zahl ein ";
		std::cin >> nenner;
	}

	void ausgabe() {
		std::cout << "zaeler = " << this->zaeler << " und nenner = " << this->nenner << std::endl;
	}

	void mult(Bruch& a) {
		int tZaeler;
		int tNenner;

		tZaeler = this->zaeler * a.zaeler;
		tNenner = this->nenner * a.nenner;

		std::cout << "Bruch0 und Bruch1 = " << tZaeler << " / " << tNenner << std::endl;
	}

	void div(Bruch& a) {
		int tZaeler;
		int tNenner;

		tZaeler = this->zaeler * a.nenner;
		tNenner = this->nenner * a.zaeler;

		std::cout << "Bruch0 und Bruch1 = " << tZaeler << " / " << tNenner << std::endl;
	}

	void add(Bruch& a) {
		int tZaeler;
		int tNenner;

		if (this->nenner != a.nenner) {

			tZaeler = this->zaeler * a.nenner + a.zaeler * this->nenner;
			tNenner = this->nenner * a.nenner;

		}
		else {

			tZaeler = this->zaeler + a.zaeler;
			tNenner = this->nenner;

		}

		std::cout << "Bruch0 und Bruch1 = " << tZaeler << " / " << tNenner << std::endl;
	}

	void sub(Bruch& a) {
		int tZaeler;
		int tNenner;

		if (this->nenner != a.nenner) {

			tZaeler = this->zaeler * a.nenner - a.zaeler * this->nenner;
			tNenner = this->nenner * a.nenner;

		}
		else {

			tZaeler = this->zaeler - a.zaeler;
			tNenner = this->nenner;

		}

		std::cout << "Bruch0 und Bruch1 = " << tZaeler << " / " << tNenner << std::endl;
	}
};

int main() {
	Bruch Test0;
	Bruch Test1;

	Test0.Eingabe();
	Test1.Eingabe();

	Test0.ausgabe();
	Test1.ausgabe();

	Test0.mult(Test1);

	Test0.div(Test1);

	Test0.add(Test1);

	Test0.sub(Test1);


}