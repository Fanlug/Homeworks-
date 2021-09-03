#include <iostream>
using namespace std;

int main()
{
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
