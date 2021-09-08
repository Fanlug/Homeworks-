#include <iostream>
#include <fstream>
using namespace std;

int sign(int x) {
    if (x < 0) { return -1; }
    else if (x > 0) { return 1; }
    else { return 0; };
}




int main()
{
    int l;
    cout << "Write the number:";

    cin >>l;
    cout << sign(l);
}
