#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    fstream k("lol.txt");
    double a = 0, sum = 0;
    string l;
    k.close();
    cout << "Write something in the lol.txt";
    system("lol.txt");
    cout << "\n Write sum to summaraise the file contents:"; 
    do {
        cin >> l;
    } while (l != "sum");
    k.open("lol.txt");
    while (!k.eof()) {
        sum += a;
        k >> a;
    }
    std::cout.precision(0);
    cout  <<fixed<<sum;
}
