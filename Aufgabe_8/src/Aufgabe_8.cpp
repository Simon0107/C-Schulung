#include <iostream>
using namespace std;

int intEeingegebeneZahl_1=0;
int intEingegebeneZahl_2=0;

void tauschen(int intZahl1, int intZahl2);
/*
 * Aufgabe auch mit globalen Variablen lösbar
 */


int main() {

	cout << "Bitte Zahl eingeben" << endl;
	cin >> intEeingegebeneZahl_1;

	cout << "Bitte Zahl eingeben" << endl;
	cin >> intEingegebeneZahl_2;

	cout << intEeingegebeneZahl_1 << ", "<< intEingegebeneZahl_2 <<endl;

	int temp=0;
	temp = intEeingegebeneZahl_1;
	intEeingegebeneZahl_1 = intEingegebeneZahl_2;
	intEingegebeneZahl_2 = temp;

	cout << intEeingegebeneZahl_1 << ", "<< intEingegebeneZahl_2 <<endl;

	tauschen(intEeingegebeneZahl_1, intEingegebeneZahl_2);

	return 0;
}

void tauschen(int intZahl1, int intZahl2) {
	int tmp =0;
	tmp = intZahl1;
	intZahl1 = intZahl2;
	intZahl2 = tmp;
	cout << "Nochmaliger Tausch innerhalb der Funktion: "<< endl;
	cout << intZahl1<< ", " << intZahl2 << endl;
}
