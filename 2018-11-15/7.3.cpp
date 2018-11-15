// if-else med den logiska operatorn OCH (&&)
#include <iostream>
using namespace std;

int main()
{
	double alder;
	cout << "Ange ålder: ";
	cin >> alder;
	if (alder > 15 && alder < 65)
	{
		cout << "Det kostar 10kr";
	}
	else
	{
		cout << "Det kostar 15kr";
	}
	return 0;
}
