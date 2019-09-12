//============================================================================
// Name        : zusatzAufgabe2.cpp
// Author      : Simon Meier
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	double temperaturC;
	double temperaturF;
	double temperaturK;

	cout << "Bitte Temperatur in °C eingeben"<< endl;
	cin >> temperaturC;

	temperaturF = temperaturC*1.8 +32;

	cout << "Temperatur in °F: " << temperaturF;

	temperaturK = temperaturC + 273.5;

	cout << "Temperatur in °K: " << temperaturK;

	return 0;
}
