#define _USE_MATH_DEFINES //

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;



int main()
{
	double x,a;

	cout << "x="  ;
	cin >> x;
	cout << fixed << setprecision(3);
	cout << "a="  ;
	cin >> a;


	if (abs(x) < 1) 
	{
		if (abs(x) > 0) 
		{
			cout << "W=" <<a*log(abs(x)) ;
		}
		else 
		{
			cout << "W does not exist";
		}
	}
	else 
	{
		if ((a - x * x) >= 0) 
		{
			cout << "W=" << sqrt(a - x * x);
		}
		else 
		{
			cout << "W does not exist";
		}
	}
	
}
