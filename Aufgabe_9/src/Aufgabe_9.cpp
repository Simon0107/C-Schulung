#include <iostream>
using namespace std;

void bubblesort(int *zahlen);

int main() {

	int zahlen[10] = {4,2,8,1,3,7,5,9,6};

	bubblesort(zahlen);

	return 0;
}
void bubblesort(int *zahlen) {

	int tmp=0;

	for(int i = 0; i < 10; i++) {

		for(int j = 0; j < i - 1; j++) {

			if(zahlen[j] > zahlen[i]) {

				tmp = zahlen[j];
				zahlen[j] = zahlen[i];
				zahlen[i] = tmp;

			}
		}
	}

	for(int i = 0; i < 10; i++) {

		cout << zahlen[i]<<", ";

	}
}
