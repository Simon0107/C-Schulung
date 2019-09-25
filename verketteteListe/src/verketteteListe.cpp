//============================================================================
// Name        : verketteteListe.cpp
// Author      : Simon Meier
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

void append(char name[]);
void print();

typedef struct ListElement {
	char name[10];
	struct ListElement *next;
} ListElement;

ListElement *first;

int main() {
	char n1[10]="Liste1";

	append(n1);

	return 0;
}

void append(char name[]) {
	ListElement *ptr=new ListElement;

	if(first->next==NULL) {

		/*
		 * Liste ist leer -> first wird als 1. Element der Liste gesetzt (Speicher wird belegt)
		 */

		first = new ListElement;
		first->next=NULL;

	} else {

		ptr = first;

		while(ptr->next != NULL) {
			ptr = ptr->next;
		}

		ptr->next=new ListElement;

		cout << ptr;

	}
}

void print() {
	cout <<"Hello"<<endl;
}
