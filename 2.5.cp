#include <iostream>
using namespace std;

int main() {
	double x, y;
	x = -4;
	while (x < 4.5) {
		cout << "x = ";
		if (x == 1) { cout << "    Error" << endl; x += 0.5; }
		if (x < 0) {printf("%.1f", x);}
		if (x >= 0) {printf(" %.1f", x);}
		else {
			y = (pow(x, 2) - 2 * x + 2) / (x - 1);
			cout << "   y = ";
			if (y > 0) { printf(" %.2f\n", y); }
			else { printf("%.2f\n", y); }
			x += 0.5;
		}
	}
}
