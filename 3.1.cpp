#include <iostream>
#include<cmath>
using namespace std;

int main()
{
	double S, r, n;
	cout.precision(3);
	do {
		cout << "S=";
		cin >> S;
		cout << "p=";
		cin >> r;
		r /= 100;
		cout << "n=";
		cin >> n;
		if (r < 0 || S < 0 || n < 0) { cout << " Write another number."; };
	} while (r<0||S<0||n<0);
	cout << (S * r * pow(r + 1, n)) / (12 * (pow(r + 1, n) - 1));
}
