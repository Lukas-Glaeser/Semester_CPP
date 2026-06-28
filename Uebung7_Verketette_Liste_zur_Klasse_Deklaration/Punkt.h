#pragma once
class Punkt{
public:
	int x;
	int y;

	void einlesen();

	void ausgabe();

	int abstand(Punkt& a);

	Punkt add(Punkt& a);

};