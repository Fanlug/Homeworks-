#include <iostream>
#include <string>

using namespace std;

int num;
int main() {
	for (int j = 0; j < 8; j++) {

		cout << "  ";
	}
	for (int j = 0; j < 35; j++) {
		cout << (char)127;
	}
	cout << endl;


	for (int i = 1; i <= 48; i++) {
		cout << "* ";
		if (i % 8 == 0) {
			if (i == 16 || i == 32 || i == 48) {
				for (int j = 0; j < 35; j++) {
					cout << (char)127;
				}
			}
			cout << endl;
		}

	}

	for (int q = 0; q < 3; q++) {
		cout << endl;
		for (int j = 0; j <= 50; j++) {
			cout << (char)127;
		}
		cout << endl;
	}
}
