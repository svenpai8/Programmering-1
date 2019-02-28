// Att skriva och anropa en funktion
#include <iostream>
using namespace std;

double areaberakning(double radie);

int main()
{
	double radie;
	cout << "Mata in radien på din cylinders basyta i centimeter: ";
	cin >> radie;
	
	double area = areaberakning(radie);
	cout << "Arean på din cylinders basyta är " << area << " kvadratcentimeter";
	
	return 0;
	}


    double areaberakning (double radie){
		
		double area;
		area = (radie * radie) * 3.14;
		return area;
	}
