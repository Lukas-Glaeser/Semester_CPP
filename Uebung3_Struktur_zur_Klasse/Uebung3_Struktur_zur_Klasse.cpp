#include <iostream>

class Foobar {
public:
	int foo;
	int bar;

	void eigenschaften_ausgabe() {
		std::cout << "Beginne ausgabe!   Foo = " << this->foo << "  Bar = " << this->bar << std::endl;
	}

	void foo_einlesen() {
		std::cout << "Gebe eine zahl ein!" << std::endl;
		std::cin >> this->foo;
	}

	void bar_einlesen() {
		std::cout << "Gebe eine zahl ein!" << std::endl;
		std::cin >> this->bar;
	}

	void eigenschaften_einlesen() {
		std::cout << "Es beginnt die ausfuerung!" << std::endl;
		foo_einlesen();
		bar_einlesen();
	}
};

int main() {

	Foobar instanz0;
	Foobar instanz1;

	instanz0.eigenschaften_einlesen();
	instanz0.eigenschaften_ausgabe();

	instanz1.eigenschaften_einlesen();
	instanz1.eigenschaften_ausgabe();
}



/*
#include <iostream>

struct Foobar {
	int foo;
	int bar;
};

void eigenschaften_ausgabe(Foobar& object) {
	std::cout << "Beginne ausgabe!   Foo = " << object.foo << "  Bar = " << object.bar << std::endl;
}

void foo_einlesen(Foobar& object) {
	std::cout << "Gebe eine zahl ein!" << std::endl;
	std::cin >> object.foo;
}

void bar_einlesen(Foobar& object) {
	std::cout << "Gebe eine zahl ein!" << std::endl;
	std::cin >> object.bar;
}

void eigenschaften_einlesen(Foobar& object) {
	std::cout << "Es beginnt die ausfuerung!" << std::endl;
	foo_einlesen(object);
	bar_einlesen(object);
}

int main() {

	Foobar instanz0;
	Foobar instanz1;

	eigenschaften_einlesen(instanz0);
	eigenschaften_einlesen(instanz1);
	eigenschaften_ausgabe(instanz0);
	eigenschaften_ausgabe(instanz1);
}*/