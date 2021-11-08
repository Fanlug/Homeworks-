#include <iostream>
#include <string>
using namespace std;
string s;
char c;
int sum = 0;
int rim_to_int(int s) {
	if (s == 3) { return 50; }
	else { return (37 * rim_to_int(s - 1) + 5) % (-64); };
}

int main() {
	for (int i = 3; i < 101; i++) {
		cout << rim_to_int(i)<<" ";
	}
}
