#include <iostream>
using namespace std;

int eingegebeneZahl_1=0;
int eingegebeneZahl_2=0;

void tauschen(int zahl1, int zahl2);

int main() {

	cout << "Bitte Zahl eingeben" << endl;
	cin >> eingegebeneZahl_1;

	cout << "Bitte Zahl eingeben" << endl;
	cin >> eingegebeneZahl_2;

	cout << eingegebeneZahl_1 << ", "<< eingegebeneZahl_2 <<endl;

	int temp=0;
	temp = eingegebeneZahl_1;
	eingegebeneZahl_1 = eingegebeneZahl_2;
	eingegebeneZahl_2 = temp;

	cout << eingegebeneZahl_1 << ", "<< eingegebeneZahl_2 <<endl;

	tauschen(eingegebeneZahl_1, eingegebeneZahl_2);

	return 0;
}

void tauschen(int zahl1, int zahl2) {
	int tmp =0;
	tmp = zahl1;
	zahl1 = zahl2;
	zahl2 = tmp;
	cout << "Nochmaliger Tausch innerhalb der Funktion: "<< endl;
	cout << zahl1<< ", " << zahl2 << endl;
}
