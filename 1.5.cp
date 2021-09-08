#include <iostream>
using namespace std;

bool Is(string y) {
    if (y == "Yes" || y == "YES" || y == "yes") {return 1;}else{ return 0; };
}

int main()
{
    string Day, Light, Curtains;
    cout << "Is it sun outside?" << endl;
    cin >> Day;
    cout << "Is light turned on?" << endl;
    cin >> Light;
    cout << "Are the curtains opened? " << endl;
    cin >> Curtains;
    if (Is(Day) || Is(Light) && Is(Curtains)) {
        cout << "The room is bright!";
    }
    else {
        cout << "It's dark in the room.";
    }
}
