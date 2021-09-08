#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ofstream k("lo.txt");
    k.close();
    int a=0,sum=0;
    ifstream f;

    string l;
    
    f.open("text.txt");
    cout << "Write something in the text.txt .\n write sum to summaraise the file contents:";

    system("text.txt");
    do {
        cin >> l;
    } while (l != "sum");

    while (!f.eof()) {
        sum += a;
        f >> a;
    }

    cout << sum;
}
