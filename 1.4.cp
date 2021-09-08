#include <iostream>
#include <string>
using namespace std;
int main()
{
    setlocale(LC_ALL, "rus");

    double c, b, a;
    
    cout << "Решить уравнение a^2+bx+c = 0\n";
    cout.precision(3);
    cout << "\n" << "c = ";
    
    cin >> c;
    
    cout << "\n" << "b = ";

    cin >> b;

    cout << "\n" << "a = ";

    cin >> a;
    if (a == 0) {
        if ((b == 0) && (c != 0))
        {
            cout << "\nНет решений";
        }
        else if (b == 0)
        {
            cout << "\nБесконечное количество решений";
        }
        else
        {
            cout << (-c) / b;
        }
    }
    else {
    
        if (b * b - 4 * a * c < 0) {
            cout << "\nНет решений";
        }
        else if (b * b - 4 * a * c == 0) {
        
            cout << "\nРешение:"<<(-b)/(2*a);
        
        }
        else {
            cout << "\nРешения:" << ((-b) + sqrt(b * b - 4 * a * c)) / (2 * a) << "; " << ((-b) - sqrt(b * b - 4 * a * c)) / (2 * a);

        }
    
    }
}
