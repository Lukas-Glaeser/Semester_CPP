#pragma once
class Bruch {
private:
	int zaeler;
	int nenner;
public:

	Bruch();

	Bruch(int zaeler, int nenner);

	Bruch(int a);

	int get_zaeler();

	int get_nenner();

	void set_zaeler(int a);

	void set_nenner(int a);

	void eingabe();

	void ausgabe();

	Bruch mult(Bruch a);

	Bruch mult(int a);

	Bruch div(Bruch a);

	Bruch add(Bruch a);

	Bruch add(int a);

	Bruch sub(Bruch a);

};