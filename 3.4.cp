#include<cmath>
#include<fstream>
#include<iostream>
using namespace std;

int main()
{
	string a;
	char b[1000];
	char kok;
	ofstream file("text.txt");
	file.close();
	system("text.txt");
	cout << "Write something in the file.txt .\n write show to show the file contents:";
	do {
		cin >> a;
	} while (a != "show");
	ifstream f;
	f.open("text.txt");
	a = "";
	while (!f.eof())
	{

		f >> kok;

		if (kok != '0' && kok != '1' && kok != '2' && kok != '3' && kok != '4' && kok != '5' &&
			kok != '6' && kok != '7' && kok != '8' && kok != '9' && kok != '\n') {
			kok = '\0';
		}
		a += kok;
	}
	cout << a;

}
