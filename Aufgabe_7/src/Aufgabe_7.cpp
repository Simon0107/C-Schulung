//============================================================================
// Name        : Aufgabe_5.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <math.h>
using namespace std;

int main() {
	int dauer=0;
	double zinssatz = 1.0;
	double kapital;
	double wert = 1000;
	cout << "Dauer der Anlage eingeben (in Jahren)" << endl;
	cin >> dauer;
	kapital = wert * pow(1+zinssatz/100, dauer);
	cout << "Endwert: " << kapital;
	return 0;
}
