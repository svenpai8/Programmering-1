#include <iostream>
using namespace std;
int main()
{
	 // Teckenfält kan hanteras som vilket fält som helst
	/* char cf[8];
	cf[0] = 'M';
	cf[1] = 'S'; 
	cf[2] = 'P';
	cf[3] = ' '; 
	cf[4] = 'S'; 
	cf[5] = 'T';
	cf[6] = 'A'; 
	cf[7] = 'R'; */
	char cf[]={'M','S','P',' ','S','T','A','R'};
	cout << cf[0]<< cf[1]<< cf[2]<< cf[3]<< cf[4]<< cf[5]<< cf[6]<< cf[7]<<endl;
	// Detta funkar med charfält
	char namn [] = "ZSvenZ";
	// cout skriver ut på skärmen
	// tills '\0' tecknet påträffas
	cout << "namn: " << namn << endl; // '\0' tecknet
	                                  // läggs tills automatiskt
	cout << "cf " << cf << endl; // Inget '\0' tecken
	                             // läggs till, utskriften
	                             //oförutsägbar
	return 0;
}
