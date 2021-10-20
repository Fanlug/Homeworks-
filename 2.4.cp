#include <iostream>
using namespace std;

int main()
{
	int N;
	cout << "N=";
	cin >> N;
	if (N < 0) {
		for (int i = 0; i <= 9; i++)
		{
			cout << " " << i;
		}
	}
	else {
		for (int i = N; i <= N + 9; i++)
		{
			cout << " " << i;
		}
	}

}
