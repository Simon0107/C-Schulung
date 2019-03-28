#include <iostream>
using namespace std;

int main() {
	int intEingegebeneZahl=0;
	cout << "Bitte Zahl eingeben" << endl;
	cin >> intEingegebeneZahl;

	if(intEingegebeneZahl%2==0) {
		cout << "Zahl gerade" << endl;
	} else {
		cout << "Zahl ungerade" << endl;
	}

	return 0;
}
