#include <iostream>
#include<cmath>
using namespace std;

int main()
{
	double S, r, n;

	cout << "S=";
	cin >> S;
	cout << "p=";
	cin >> r ;
	r /= 100;	
	cout << "n=";
	cin >> n;

	cout << (S * r * pow(r + 1, n)) / (12 * (pow(r + 1, n) - 1));
}
