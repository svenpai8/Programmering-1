#include <iostream>
using namespace std;
int main()
{
	char cf[] = {'A','B','C'};
	cout << cf[0] << cf[1] << cf[2] << endl;
	// A och C byter plats
	// d.v.s cf[0] och cf[2] byter plats
	char temp = cf[0];
	cf[0] = cf[2];
	cout << cf[0] << cf[1] << cf[2] << endl;
	cf[2] = temp;
	cout << cf[0] << cf[1] << cf[2] << endl;
	return 0;
}
