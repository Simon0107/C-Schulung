#include <iostream>
using namespace std;

int main() {

	int intArray[100];

	for(int intI = 99; intI >= 0; intI--) {

		intArray[intI] = intI+1;

	}

	for(int intI = 0; intI < 100; intI++) {

		cout << intArray[intI] << ", ";

	}

	return 0;
}
