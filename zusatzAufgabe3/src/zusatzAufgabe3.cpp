//============================================================================
// Name        : zusatzAufgabe3.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;


/*
 * Quersumme berechnen
 */

int main() {
	int zahl = 15;
	int quersumme = 0;

	while(zahl >0 ) {
		quersumme += zahl % 10;
		zahl /= 10;
	}
	cout << quersumme;

	return 0;
}
