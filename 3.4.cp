#include<cmath>
#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	string a ;
	char b[1000];
	ofstream file("text.txt");
	file.close();
	system("text.txt");
	cout << "Write something in the file.txt .\n write show to show the file contents:";
	do {
		cin >> a;
	} while (a != "show");
		ifstream f;
		f.open("text.txt");

		while (!f.eof())
		{

			f.getline(b, sizeof(b));
			for (int i = 0; i < sizeof(b); i++) {
				if (b[i] != '0' && b[i] != '1'&& b[i] != '2'&& b[i] != '3'&& b[i] != '4'&& b[i] != '5'&&
					b[i] != '6' && b[i] != '7' && b[i] != '8' && b[i] != '9') {
					b[i] = ' ';
				}
			}
			cout << "\n" << b;
		}
	

}
