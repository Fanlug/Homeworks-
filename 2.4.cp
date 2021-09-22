#include <iostream>
using namespace std;

int main()
{
	int N;
	cout << "N=";
	cin >> N;
	if (N < 0) {
		for (int i = 1; i <= 10; i++)
		{
			cout << " " << i;
		}
	}
	else {
		for (int i = N; i <= N + 10; i++)
		{
			cout << " " << i;
		}
	}

}
