#include <iostream>

void ausgabe(const std::string& a) {
	std::cout << "Dies ist ein string = " << a << std::endl;
}

void ausgabe(const double& b) {
	std::cout << "Dies ist ein double = " << b << std::endl;
}

void ausgabe(const int& c) {
	std::cout << "Dies ist ein int = " << c << std::endl;
}

int main() {

	ausgabe("Hallo Welt!");
	ausgabe(3.3332);
	ausgabe(13);

}