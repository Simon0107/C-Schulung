//============================================================================
// Name        : zusatzAufgaben1.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	//=====Zusatzaufgabe Notendurchschnitt=====
	float noten[10], summe=0;
	int anzahl=10, i;

	// Noten einlesen
	for(i=0; i<anzahl; i++) {
		printf("\nBitte geben sie eine Note ein: ");
		scanf("%f", &noten[i]);
	}

	// Summe berechnen
	for(i=0; i<anzahl; i++) {
		summe += noten[i];
	}

	printf("\nDie Summe ist %.2f\n", summe);
	printf("Der Durchschnitt ist %.2f\n", summe / anzahl);
	//=============================================

	//=====Zusatzaufgabe Temperaturrechner=====



	return 0;
}
