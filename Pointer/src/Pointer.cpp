//============================================================================
// Name        : Pointer.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	int intZahl = 5;

	int *ptrZahl;

	//Zuweisung einer Adresse mit dem Adressoperator
	ptrZahl = &intZahl;

	//Ausgabe ist gleich
	printf("%p\n", ptrZahl);
	printf("%p\n", &intZahl);

	//=> Pass by value, pass by reference

	return 0;
}
