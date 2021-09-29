#define _USE_MATH_DEFINES //

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;



int main()
{
	double height, Rad1, Rad2, lenght;
	cout << fixed << setprecision(3);
	cout << "Height:";
	cin >> height;

	cout << "First radius:";
	cin >> Rad1;

	cout << "Second radius:";
	cin >> Rad2;

	lenght = sqrt(abs(Rad1 - Rad2) * abs(Rad1 - Rad2) + height * height);

	cout << "Cone volume:" << (M_PI * height * ((Rad1 * Rad1 + Rad1 * Rad2 + Rad2 * Rad2))) / 3 << endl;

	cout << "Cone surface:" << M_PI * (Rad1 * Rad1 + lenght * (Rad1 + Rad2) + Rad2 * Rad2) << endl;



}
