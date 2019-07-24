/*
 * aufgaben.cpp
 *
 *  Created on: 24.07.2019
 *      Author: Meier_S
 */

#include <iostream>
using namespace std;


int main(void) {
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
	return 0;
}



