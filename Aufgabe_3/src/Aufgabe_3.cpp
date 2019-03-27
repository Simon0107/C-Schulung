//============================================================================
// Name        : Aufgabe_3.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int intZahl;
	char eingabe = ' ';

	while(eingabe != 'q') {
	  cout << "Bitte eine Int-Zahl eingeben" << endl;
	  cin >> intZahl;
	  if(intZahl%2==0) {
	    cout << "Zahl ist gerade" << endl;
	  } else {
	    cout << "Zahl ist ungerade" << endl;
	  }
	  cout << "Nochmal? (Abbruch=q)" << endl;
	  cin >> eingabe;
	}

	return 0;
}
