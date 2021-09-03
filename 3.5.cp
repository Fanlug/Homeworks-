#include <iostream>
#include<cmath>
#include<fstream>
using namespace std;

void bubbleSort(char a[], long size) {
	long i, j,x;
	for (i = 0; i < size; i++) {            
		for (j = size -1; j > i; j--) {     
			if (a[j - 1] > a[j]) {
				x = a[j - 1];
				a[j - 1] = a[j];
				a[j] = x;
			}
		}
	}
}


int main()
{
	char a[1000] ;
		
	cout << "Print the string:";
	cin >> a;
	
	bubbleSort(a,1000);

	for (int i = 0; i < sizeof(a); i++) {
		if (a[i] < 250 && a[i] > 50) { cout << a[i]; }

	};

}
