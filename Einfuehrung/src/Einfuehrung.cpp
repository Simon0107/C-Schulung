#include <iostream>
using namespace std;

int main() {
	int intArray[10];
	int max=0;
	int min;

	int zahl=5;

	for(int i = 0; i < 10; i++) {
		intArray[i]=rand()%20+1;
		cout << intArray[i] <<", ";
		if(intArray[i] > max) {
			max = intArray[i];
		}

		if(intArray[i] < min) {
			min = intArray[i];
		}

		if(intArray[i] == zahl) {
			cout << "die von ihnen eingegebene Zahl kommt im Array vor"<<endl;
		}

	}
	cout << endl;
	cout << "Maximum: " << max << endl;
	cout << "Minimum: " << min;

	return 0;
}
