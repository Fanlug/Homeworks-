#define _USE_MATH_DEFINES //

#include <iostream>
#include <cmath>

using namespace std;



int main()
{
	double x,y,b;
	cout.precision(3);
	cout << "x="  ;
	cin >> x;

	cout << "y="  ;
	cin >> y;

	cout << "b=";
	cin >> b;


	if ( (b-y) > 0 && (b-x)>=0   ) 
	{
		cout << "Z=" << log(b - y) * sqrt(b - x);
	}
	else 
	{
		
			cout << "Z does not exist";
	
	}
	
}
