//============================================================================
// Name        : zusatzAufgaben1.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int zahlenmenge [12] = {2, 17, 10, 9, 16, 3, 9, 16, 5, 2, 17, 14};
	int input;
	cin >> input;

	for (int i = 0; i <= 11; i++){
		if(zahlenmenge[i] == input)  {
			cout << "Die Zahl " << input << " befindet sich im array an der stelle: " << i << endl;
		}
		if(i == 12) {
			cout << "Die Zahl " << input << " kommt im Array nicht vor." << endl;
		}
	}

	return 0;
}
