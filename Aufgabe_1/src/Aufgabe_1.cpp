//============================================================================
// Name        : projekt_schulungmuster.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int eingegebeneZahl=0;
	cout << "Bitte Zahl eingeben" << endl;
	cin >> eingegebeneZahl;

	if(eingegebeneZahl%2==0) {
		cout << "Zahl gerade" << endl;
	} else {
		cout << "Zahl ungerade" << endl;
	}

	return 0;
}
