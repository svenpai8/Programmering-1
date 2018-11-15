#include <iostream>
using namespace std;
int main()
{
	// Om "AND", "OR" och "icke"
	// sidan 83
	// && (och)
	// || (eller)
	// ! (icke)
	// (        (false)         &&        (true)        )
	// (                      (false)                   )
	if ( ( (false) || (false) ) && ( (true) && (true) ) )
	{
		cout << "Det sammantagna uttrycket mellan den yttre paranteserna är sant" << endl;
	    
	}
	else
	    cout << "Det sammantagna uttrycket mellan den yttre paranteserna är INTE sant" << endl;
	    
// EXEMPEL
int a, b;
cout << "Mata in två heltal :>";
cin >> a;
cin >> b;
// ANTAG
   if ( ( (a>b) || (a<b) ) && ( (a<b) && (a<b) ) )
   
   //   if ( ( (1>2) || (1<2) ) && ( (1<2) && (1<2) ) )
   //   if ( ( (false) || (true) ) && ( (true) && (true) ) )
   //   if (   (true)   &&    (true)   )
   //                 (true)
   // Alltså givet a=1, b=2 blir uttrycket sant
   
        cout << "SANT" << endl;
        
     else
        cout << "INTE SANT" << endl;

  
	
	return 0;
}
