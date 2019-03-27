#include <iostream>
using namespace std;

int zahl,zahl2,rest,dual[16];

int main() {
	cout<<"Zahl eingeben: ";
	cin>>zahl;


	for (int i = 15; i >= 0; i--) {
		zahl2 = zahl / 2;
		rest = zahl - (zahl2 * 2);
		dual[i] = rest;
		zahl = zahl2;
	}

	cout << endl;
	/*
	 * Ausgabe in andere Richtung sonst wäre die Zahl falsch herum
	 * */
	for (int i = 0; i <= 15; i++){
		cout << dual[i];
	}
	return 0;
}
