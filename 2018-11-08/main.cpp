#include <iostream>
using namespace std;
int main()
{
	float tal1, tal2;
	cout << "Mata in två tal" << endl;
	cout << "Tal 1: ";
	cin >> tal1;
	cout << "Tal 2: ";
	cin >> tal2;
	
	if ( tal1 == tal2 ) {
		cout << "Tal1 är störst" << tal1 << endl;
		
	}
	else if ( tal1 == tal2 ) {
		cout << "De är lika stora" << tal1 << " " << tal2 << endl;
		}
    else {
		cout << "Tal2 är störst " << tal2 << endl;
	}
	cout << "slut" << endl;

    return 0;
    
}
