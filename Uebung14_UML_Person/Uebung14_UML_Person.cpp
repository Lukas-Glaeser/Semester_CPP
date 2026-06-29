#include <iostream>
#include "Person.h"

int main(){

	Person P0, P1, P2, P3;

	P0.set_vorname("Claud");
	P0.set_nachname("Ruuss");
	P0.set_groesse(40);
	P0.set_alter(1);
	P0.info();

	P1.set_vorname("Fred");
	P1.set_nachname("Ruuss");
	P1.set_groesse(180);
	P1.set_alter(19);
	P1.info();

	P2.info();

	P3.set_vorname("Traul");
	P3.set_nachname("Pull");
	P3.set_groesse(2.1);
	P3.set_alter(41);
	P3.info();

	return 0;
}