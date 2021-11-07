#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;
string alphabet = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";


string decimal_to_any_number(int number,int base2) {
	string final_number = "";
	do {
		final_number += alphabet[number % base2 ];
		number /= base2;
	} while (number != 0);
	reverse(final_number.begin(), final_number.end());
	return final_number;
}

int any_to_decimal_number(char letter) {
	for (int i = 0; i < alphabet.length() - 1; i++) {
		if (letter == alphabet[i]) { return i; };
	}
}

string any_to_any(string number, int base1, int base2) {
	int decimal_number=0;
	for (int i = 0; i < number.length(); i++) {
		decimal_number += pow(base1, number.length()-i-1) * any_to_decimal_number(number[i]);
	}
	return decimal_to_any_number(decimal_number, base2);

}

int main() {
	string number;
	int base1, base2;

	cout << "Vvedite chislo:";
	cin >> number;
	cout << endl<<"Ego osnovanie u zhelaemoe osnovanie";
	cin >> base1>> base2;
	cout << any_to_any(number, base1, base2);
}
