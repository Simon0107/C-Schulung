#include <iostream>
using namespace std;

void bubblesort(int *intZahlen);

int main() {

	int intZahlen[10] = {4,2,8,1,3,7,5,9,6};

	bubblesort(intZahlen);

	return 0;
}
void bubblesort(int *intZahlen) {

	int tmp=0;

	for(int intI = 0; intI < 10; intI++) {

		for(int intJ = 0; intJ < intI; intJ++) {

			if(intZahlen[intJ] > intZahlen[intI]) {

				tmp = intZahlen[intJ];
				intZahlen[intJ] = intZahlen[intI];
				intZahlen[intI] = tmp;

			}
		}
	}

	for(int intI = 0; intI < 10; intI++) {

		cout << intZahlen[intI]<<", ";

	}
}
