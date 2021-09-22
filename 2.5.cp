#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	cout << fixed << setprecision(3);
	for (double i = -4;i<=4;i=i+0.5) 
	{
		if (i != 1) 
		{
			cout << " ("<<i<<")"<<(i*i+2*i+2)/(i-1);
		}
		else 
		{
			cout <<" ("<< i<<")N";
		}
	}

}
