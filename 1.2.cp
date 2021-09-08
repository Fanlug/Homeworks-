#include <iostream>
#include <string>
using namespace std;
int main()
{
    setlocale(LC_ALL, "rus");
    double c, l, m;
    char q = ' ';
    cout << "Выберите одну из операций\n(+)Сложение\n(-)Вычитание\n(*)Умножение\n(/)Деление\n";

    cin >> q;

    cout << "\nВведите первое число:";
    cin >> l;
    cout << "\nВведите второе число:";
    cin >> m;
    cout.precision(3);
    switch (q) {
    case '+':
        cout << "Результат:" << l + m; break;
    case '-':
        cout << "Результат:" << l - m; break;
    case '*':
        cout << "Результат:" << l * m; break;
    case '/':
        while (m == 0) 
        {
                cout << "Wrong parameter, you cannot divide by 0, write another number:";
                cin >> m;
        }
        cout << "Результат:" << l / m;
                                       break;
     };
}
