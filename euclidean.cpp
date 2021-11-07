#include <iostream>
#include <string>
using namespace std;

int nod(int a,int b) {
	if (b == 0) {
		return a;
	}
	else {
		return nod(b, a % b);
	}
}
int a, b;
int main() {
	cout << "Vvedite chisla.";
	cin >> a >> b;
	cout <<"NOD="<< nod(a,b);
}
