#pragma once
class Bruch {
private:
	int zaeler;
	int nenner;
public:

	Bruch();

	int get_zaeler();

	int get_nenner();

	void set_zaeler(int a);

	void set_nenner(int a);

	void eingabe();

	void ausgabe(Bruch& a);

	void mult(Bruch& a);

	void div(Bruch a);

	Bruch add(Bruch a);

	Bruch sub(Bruch& a);

};