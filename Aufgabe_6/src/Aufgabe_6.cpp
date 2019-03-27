#include <iostream>
using namespace std;

int main() {

	int array[100];
	//Befüllen des Arrays beginnend mit index 99 (100. Stelle)
	for(int i = 99; i>=0; i--) {
	  array[i] = i+1;
	}

	for(int i=0; i < 100; i++) {
	  cout << array[i] << ", ";
	}
	return 0;
}
