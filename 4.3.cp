#include <iostream>
#define M_PI 3.14159265358979323846
#include <math.h>
using namespace std;

void area_circle(double r) { cout << "Area=" << M_PI * r * r; }
void area_pramougolnick(double q,double r) { cout << "Area=" << q * r; }
void area_triangle(double q, double r, double l) { cout << "Area=" << sqrt((r + q + l) / 2 * ((r + q + l) / 2 - r) * ((r + q + l) / 2 - l) * ((r + q + l) / 2 - q)); }



int main()
{
	char option;
	double r, q, l;
	do {
		cout << "(A)Circle, (B)Rectangle, (C)Triangle." << endl;
		cout << "Choose an option:";
		cin >> option;
	} while (option != 'A' && option != 'B' && option != 'C');

	switch (option) {
	case 'A':cout << "What's the radius?"; cin >> r; area_circle(r); break;
	case 'B':do { cout << "What are the 2 sides?"; cin >> r >> q; } while (r <= 0 || q <= 0); area_pramougolnick(r,q); break;
	case 'C':do { cout << "What are the 3 sides?"; cin >> r >> q >> l; } while (r <= 0 || q <= 0 || l <= 0 || r + q <= l || r + l <= q || l + q <= r); area_triangle(r, q,l); break;
	default:break;
	}
}
