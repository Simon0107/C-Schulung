//============================================================================
// Name        : Aufgabe_2.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
int zahl,zahl2,rest,dual[16];
int main() {
	cout<<"Zahl eingeben (max. 65535): ";
	cin>>zahl;


	for (int i = 15; i >= 0; i--) {
		zahl2 = zahl / 2;
		rest = zahl - (zahl2 * 2);
		dual[i] = rest;
		zahl = zahl2;
	}

	cout << endl;
	for (int i = 0; i <= 15; i++){
		cout << dual[i];
	}
	return 0;
}
