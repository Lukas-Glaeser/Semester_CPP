#pragma once
class Punkt {
private:
	int x;
	int y;
public:
	void set_x(int x);

	int get_x(int x);

	void set_y(int y);

	int get_y(int y);

	void einlesen();

	void ausgabe();

	int abstand(Punkt& a);

	Punkt add(Punkt& a);

};