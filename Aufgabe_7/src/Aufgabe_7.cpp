#include <iostream>
#include <math.h>
using namespace std;
double kapitalBerechnen(double wert);

/*
 * Lösung auch ohne globale Variablen möglich -> mit mehr Übergabeparametern
 * Rückgabewert auch nicht zwingend notwendig -> mit globaler Variable
 */

int intDauer=5;
double dblZinssatz = 1.2;
double dblKapital_1;
double dblKapital_2;
double dblWert = 1000;

int main() {

	dblKapital_1 = dblWert * pow(1+dblZinssatz/100, intDauer);
	dblKapital_2 = kapitalBerechnen(dblWert);

	cout << "Endwert (ohne Funktion):" << dblKapital_1 << endl;
	cout << "Endwert (mit Funktion) :" << dblKapital_2;

	return 0;
}

double kapitalBerechnen(double wert) {

	double kap = wert * pow(1+dblZinssatz/100, intDauer);
	return kap;

}
