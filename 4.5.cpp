#include <iostream>
#include <string>
using namespace std;
char a[11][35] = { 
{' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','^',' ','Y',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
{' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','+','1','+',' ',' ',' ',' ',' ','*','*','*',' ',' ',' ',' ',' ',' ',' ',' '},
{'*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','|',' ',' ',' ','*','*',' ',' ',' ','*','*',' ',' ',' ',' ',' ',' '},
{' ','*','*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','|',' ','*','*',' ',' ',' ',' ',' ',' ',' ','*','*',' ',' ',' ',' '},
{' ',' ',' ','*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','|','*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*','P','i',' '},
{'-','-','-','-','*','-','-','-','-','-','-','-','-','-','-','-','-','-','*','-','-','-','-','-','-','-','-','-','-','-','-','-','*','-','>'},
{' ',' ','-','P','i','*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*','|',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*','X'},
{' ',' ',' ',' ',' ',' ','*','*',' ',' ',' ',' ',' ',' ',' ','*','*',' ','|',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*'},
{' ',' ',' ',' ',' ',' ',' ',' ','*','*',' ',' ',' ','*','*',' ',' ',' ','|',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
{' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*','*','*',' ',' ',' ','-','1','+',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
{' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','|',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
};
int num;
int main() {
	for (int i = 0; i < 11; i++) {

		for (int j = 0; j < 35; j++) {
			cout << a[i][j];
		}
		cout << endl;
	}
}