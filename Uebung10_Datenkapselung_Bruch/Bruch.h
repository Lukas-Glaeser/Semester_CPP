#pragma once
class Bruch {
private:
	int zaeler;
	int nenner;
public:
	int get_zaeler();

	int get_nenner();

	void set_zaeler(int& a);

	void set_nenner(int& a);

	void eingabe();

	void ausgabe();

	void mult(Bruch& a);

	void div(Bruch& a);

	void add(Bruch& a);

	void sub(Bruch& a);

};