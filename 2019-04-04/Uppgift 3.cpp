#include <iostream>
using namespace std;
void area(double diameter);
int main () {
	double diameter;
	
	cout << "Skriv diametern på din cirkel" << endl;
	cin >> diameter;
	area(diameter);
	
	
	
	
	
	
	
	
	return 0;
}
void area(double diameter) {
	double area = ((3.14*diameter*diameter)/4);
	cout << "Din cirkel har arean: " << area << " cm^2" << endl;
}
