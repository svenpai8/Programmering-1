#include <iostream>
using namespace std;
int main()
{
	// variabeldeklaration
	// vi alokerar (bokar)
	// plats i datorns minne
	unsigned int tal;
	// tal får ett värde
	cout << "Storlek på short "<< sizeof(short) << endl;
	cout << "Storlek på int "<< sizeof(int) << endl;
	cout << "Storlek på long int "<<sizeof(long int) << endl;
	// se sidan 327
	cout << "Storlek på char "<< sizeof(char) << endl;
	char tecken = 66; // Kan bara deklareras EN gång
	tecken = 65;  // Men du kan ge variabeln ett nytt värde
	char tecken1 = 'B';
	
	cout << tecken << endl;
	cout << tecken1 << endl;
	
	// Men, du kan deklarera en KONSTANT också
	const float PI = 3.1415;
	cout << "Storlek på float "<< sizeof(float) << endl;
	cout << "Storlek på double "<< sizeof(double) << endl;
	cout << "Storlek på long double "<< sizeof(long double) << endl;
	cout << "Storlek på bool "<< sizeof(bool) << endl;
	cout << "Storlek på double "<< sizeof(double) << endl;
	cout << "Storlek på long double "<< sizeof(long double) << endl;
	int t = 4.96;
	cout << t << endl;
	int a = 4;
	int b = 3;
	int heltalskvot = a/b;
	cout << "heltalskvot" << heltalskvot << endl;
	float flyttalskvot = a/(float)b;
	cout << "flyttalskvot " << flyttalskvot << endl;
	return 0;
}	
