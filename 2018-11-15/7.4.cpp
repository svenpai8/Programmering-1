// if-else med den logiska operatorn ELLER (||)
#include <iostream>
using namespace std;

int main()
{
	double alder;
	cout << "Ange ålder: ";
	cin >> alder;
	if (alder >= 65 || alder <= 15)
	{
		cout << "Det kostar 5kr";
	}
	else
	{
		cout << "Det kostar 10kr";
	}	
	
	return 0;
}
