#include <iostream>
#include "stack.h"
using namespace std ;

int main()
{
	typedef Stack<float> FloatStack ;

	FloatStack fs(5) ;
	float f = 1.1 ;
	cout << "Pushing elements onto stack" << endl ;
	while (fs.push(f))
	{
		cout << f << ' ' ;
		f += 1.1 ;
	}
	cout << endl << "Stack Full." << endl
	<< endl << "Popping elements from stack" << endl ;
	while (fs.pop(f))
		cout << f << ' ' ;
	cout << endl << "Stack Empty" << endl ;
	cout << endl ;
    
    return 0;
}

