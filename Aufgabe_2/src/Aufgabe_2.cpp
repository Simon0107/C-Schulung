#include <iostream>
using namespace std;

int intZahl,intZahl2,intRest,intDual[16];

int main() {
	cout<<"Zahl eingeben: ";
	cin>>intZahl;


	for (int i = 15; i >= 0; i--) {
		intZahl2 = intZahl / 2;
		intRest = intZahl - (intZahl2 * 2);
		intDual[i] = intRest;
		intZahl = intZahl2;
	}

	cout << endl;
	/*
	 * Ausgabe in andere Richtung sonst wäre die Zahl falsch herum
	 * */
	for (int i = 0; i <= 15; i++){
		cout << intDual[i];
	}
	return 0;
}
