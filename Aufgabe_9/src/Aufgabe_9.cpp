#include <iostream>
using namespace std;

void bubblesort(int *intZahlen);
void selectionsort(int *intZahlen);

int main() {

	int intZahlen[10000];

	for(int i=0; i < 10000; i++) {
		intZahlen[i] = rand()%10000+1;
		cout <<intZahlen[i]<<", ";
	}
	cout <<endl;
	bubblesort(intZahlen);

	for(int i=0; i < 10000; i++) {
		intZahlen[i] = rand()%10000+1;
	}
	cout <<endl;
	//selectionsort(intZahlen);
	return 0;
}
void bubblesort(int *intZahlen) {
	int tmp=0;
	int vergleiche=0;
	int most_common = -1;
	int max_occurance = 0;
	int temp_occurance = 0;

	for(int intI = 0; intI < 10000; intI++) {

		for(int intJ = 0; intJ < intI; intJ++) {

			if(intZahlen[intJ] > intZahlen[intI]) {
				vergleiche++;
				tmp = intZahlen[intJ];
				intZahlen[intJ] = intZahlen[intI];
				intZahlen[intI] = tmp;
			}

			if(intZahlen[intI] == intZahlen[intJ]) {
				++temp_occurance;
				if(temp_occurance > max_occurance){
		            most_common = intZahlen[intJ];
				}

			}
		}
	}
	cout << "================ Bubblesort ================"<<endl;

		for(int intI = 0; intI < 10000; intI++) {

				cout << intZahlen[intI]<<", ";

			}
			cout << endl;
			cout << "Vergleiche: " << vergleiche<<endl;
			cout << "Häufigste Zahl: " << most_common;
}

/*
void selectionsort(int *intZahlen) {
	int tmp =0;
	int vergleiche =0;
	int minIdx;

	for(int i=0; i<10000;i++) {
		minIdx=i;
		for(int j=i+1; j<10000;j++) {
			if(intZahlen[j] < intZahlen[minIdx]) {
				tmp = intZahlen[j];
				intZahlen[j] = intZahlen[i];
				intZahlen[i] = tmp;
				vergleiche++;
			}
		}
	}



	cout << "================ Selectionsort ================"<<endl;

	for(int intI = 0; intI < 10000; intI++) {

			cout << intZahlen[intI]<<", ";

		}
		cout << endl;
		cout << "Vergleiche: " << vergleiche;
}
*/
