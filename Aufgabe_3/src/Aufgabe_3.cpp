#include <iostream>
using namespace std;

int main() {
	int intZahl;
	char charEingabe = ' ';

	while(charEingabe != 'q') {
	  cout << "Bitte eine Int-Zahl eingeben" << endl;
	  cin >> intZahl;
	  if(intZahl%2==0) {
	    cout << "Zahl ist gerade" << endl;
	  } else {
	    cout << "Zahl ist ungerade" << endl;
	  }
	  cout << "Nochmal? (Abbruch=q)" << endl;
	  cin >> charEingabe;
	}

	return 0;
}
