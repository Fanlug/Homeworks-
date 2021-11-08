#include<iostream>
#include<cmath>
#include<fstream>
using namespace std;

string bubbleSort(string a) {
	long i, j;
	char x;
	for (i = 0; i < a.length(); i++) {
		for (j = a.length() - 1; j > i; j--) {
			if (a[j - 1] > a[j]) {
				x = a[j - 1];
				a[j - 1] = a[j];
				a[j] = x;
			}
		}
	}
	return a;
}


int main()
{
	string a;
	cout << "write the string:";
	cin >> a;
	cout << bubbleSort(a);
}
