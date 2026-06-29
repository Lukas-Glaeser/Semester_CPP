#include <iostream>
#include "Bruch.h"

int main(){

	Bruch einhalb;
	einhalb.ausgabe();
	einhalb.set_zaeler(1);
	einhalb.set_nenner(2);
	einhalb.ausgabe();

	Bruch ergebnis = einhalb.add(1);
	ergebnis.ausgabe();
	Bruch dreiviertel(3, 4);
	Bruch sieben(7);
	dreiviertel.ausgabe();
	sieben.ausgabe();

	return 0;
}