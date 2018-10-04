// stringklassen
#include <iostream>
#include <string>
using namespace std;
int main()
{
	cout << "Förnamn: ";
	string fNamn;
	cin >> fNamn;
	cin.ignore(1000, '\n');
	cout << "Efternamn: ";
	string eNamn;
	cin >> eNamn;
	cin.ignore(1000, '\n');
	string namn = fNamn + " " + eNamn;
	cout << "Adress: ";
	string adress;
	getline(cin, adress);
	cout << "\nPersondata\n";
	cout << namn << endl;
	cout << adress << endl;
	cout << "Initialer: " << fNamn.at(0) << eNamn.at(0) << endl;
	cout << "Antal tecken i efternamnet: " << eNamn.length() << endl;
	return 0;
}
