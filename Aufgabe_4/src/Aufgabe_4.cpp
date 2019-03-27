//============================================================================
// Name        : Aufgabe_4.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

int main() {

	srand(time(0));

	int eingegebenZahl=0;

	cout << "Zahl eingeben:" <<endl;

	cin >> eingegebenZahl;

	cout << endl;

	int zufallszahl = (rand() % 6 + 1);

	cout << "Generierte Zufallszahl: "<< zufallszahl << endl;

	if(eingegebenZahl==zufallszahl) {

		cout << "Gewonnen" <<endl;

	} else {

		cout << "Verloren" <<endl;

	}



	return 0;
}
