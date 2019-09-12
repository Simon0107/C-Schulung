//============================================================================
// Name        : zusatzAufgabe4.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int einserzaehler=0;
	int zweierzaehler=0;
	int dreierzaehler=0;
	int viererzaehler=0;
	int fuenferzaehler=0;
	int sechserzaehler=0;
	int zufallszahl;

	for(int i=0; i<=6000; i++) {
		zufallszahl=rand()%6+1;
		switch(zufallszahl) {

		case 1:
			einserzaehler++;
			break;

		case 2:
			zweierzaehler++;
			break;

		case 3:
			dreierzaehler++;
			break;

		case 4:
			viererzaehler++;
			break;

		case 5:
			fuenferzaehler++;
			break;

		case 6:
			sechserzaehler++;
			break;

		default:
			break;
		}
	}

	cout << "Anzahl 1er: " << einserzaehler<<endl;
	cout << "Anzahl 2er: " << zweierzaehler<<endl;
	cout << "Anzahl 3er: " << dreierzaehler<<endl;
	cout << "Anzahl 4er: " << viererzaehler<<endl;
	cout << "Anzahl 5er: " << fuenferzaehler<<endl;
	cout << "Anzahl 6er: " << sechserzaehler<<endl;




	return 0;
}
