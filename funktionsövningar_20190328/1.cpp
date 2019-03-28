#include <iostream>
using namespace std;
void funktion (double falt[], int a);
int main()
{
	double falt[100];
	int n = 0;
	cin >> falt[n];
	while (falt[n] != 0)
	{
		n++;
		cin >> falt [n];
	}
	for (int i = 0; i < n; i++) {
		cout << falt[i] << endl;
	}
	funktion (falt, n);
	for (int i = 0; i < n; i++) {
		cout << falt[i] << endl;
	}
	
	
	
	
	return 0;
}
void funktion (double falt[], int a) {
	for (int b = 0; b < a; b++) {
		falt [b] = falt [b]*-1;
	}
	
}
