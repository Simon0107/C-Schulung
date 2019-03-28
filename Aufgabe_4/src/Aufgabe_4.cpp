#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

int main() {

	srand(time(0));

	int intEingegebenZahl=0;
	char charEingabe = ' ';

	while(charEingabe != 'q') {

		cout << "Zahl eingeben:" <<endl;

		cin >> intEingegebenZahl;

		cout << endl;

		int zufallszahl = (rand() % 6 + 1);

		cout << "Generierte Zufallszahl: "<< zufallszahl << endl;

		if(intEingegebenZahl==zufallszahl) {

			cout << "Gewonnen" <<endl;

		} else {

			cout << "Verloren" <<endl;

		}

		cout << "Abbruch? (-> q)" << endl;
		cin >> charEingabe;

	}

	return 0;
}
