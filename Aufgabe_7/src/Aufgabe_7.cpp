#include <iostream>
#include <math.h>
using namespace std;
double kapitalBerechnen(double wert);

/*
 * Lösung auch ohne globale Variablen möglich -> mit mehr Übergabeparametern
 * Rückgabewert auch nicht zwingend notwendig -> mit globaler Variable
 */

int dauer=0;
double zinssatz = 1.0;
double kapital_1;
double kapital_2;
double wert = 1000;

int main() {

	cout << "Dauer der Anlage eingeben (in Jahren)" << endl;
	cin >> dauer;

	kapital_1 = wert * pow(1+zinssatz/100, dauer);
	kapital_2 = kapitalBerechnen(wert);

	cout << "Endwert (ohne Funktion):" << kapital_1 << endl;
	cout << "Endwert (mit Funktion) :" << kapital_2;

	return 0;
}

double kapitalBerechnen(double wert) {

	double kap = wert * pow(1+zinssatz/100, dauer);
	return kap;

}
