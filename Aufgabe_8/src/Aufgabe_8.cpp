//============================================================================
// Name        : Aufgabe_5.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int eingegebeneZahl_1=0;
	cout << "Bitte Zahl eingeben" << endl;
	cin >> eingegebeneZahl_1;

	int eingegebeneZahl_2=0;
	cout << "Bitte Zahl eingeben" << endl;
	cin >> eingegebeneZahl_2;

	cout << eingegebeneZahl_1<< ", "<<eingegebeneZahl_2<<endl;

	int temp=0;
	temp = eingegebeneZahl_1;
	eingegebeneZahl_1 = eingegebeneZahl_2;
	eingegebeneZahl_2 = temp;

	cout << eingegebeneZahl_1<< ", "<<eingegebeneZahl_2<<endl;
	return 0;
}
