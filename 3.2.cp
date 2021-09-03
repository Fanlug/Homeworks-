#include <iostream>
#include<cmath>
using namespace std;

int main()
{
	double S, m, n, delta, min_delta = 10000000, l;

	cout << "S=";
	cin >> S;
	cout << "m=";
	cin >> m;
	cout << "n=";
	cin >> n;

	for (double p = 1; p < 100000; p+=0.01) {



		delta = m - ((S * (p / 100) * pow((p / 100) + 1, n)) / (12 * (pow(p / 100 + 1, n) - 1)));

		if (delta <= min_delta && delta >= 0)
		{
			min_delta = delta;
			l = p;
		};

		
	}
	cout << "p=" << l;
}
