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
	for(int i = 1; i <= 10; i++) {
		for(int j = 1; j <= 10; j++) {
	    cout << i << " * " << j << " = " << i * j << "\t";
	  }
		cout << endl;
	}
	return 0;
}
