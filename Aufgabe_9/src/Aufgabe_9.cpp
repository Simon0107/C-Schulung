#include <iostream>
using namespace std;

int main() {
	int zahlen[10] = {4,2,8,1,3,7,5,9,6};

	for(int i = 0; i < 10; i++) {

		cout << zahlen[i]<<", ";

	}

	cout << endl;

	int temp;

	for(int i = 0; i < 10; i++) {

		for(int j = 0; j < i - 1; j++) {

			if(zahlen[j] > zahlen[i]) {

				temp = zahlen[j];
				zahlen[j] = zahlen[i];
				zahlen[i] = temp;

			}
		}
	}

	for(int i = 0; i < 10; i++) {

		cout << zahlen[i]<<", ";

	}

	return 0;
}
