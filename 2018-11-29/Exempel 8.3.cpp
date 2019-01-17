#include <iostream>
using namespace std;
int main()

{
	int start, slut, steg;
	cout << "Start: ";
	cin >> start;
	cout << "Slut: ";
	cin >> slut;
	cout << "Steg: ";
	cin >> steg;
	
	for (int i=start; i<slut; i=i+steg)
	     cout << i << endl;
	     
	     
	     
	     return 0;
	 }
