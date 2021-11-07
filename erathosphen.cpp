#include <iostream>
#include <string>
using namespace std;


int main() {
    int N;
    cin >> N;
    bool *massive_boolean = new bool[N]();
    for (int i = 2; i < N; ++i) {
        massive_boolean[i] = true;
    }
    for (int i = 2; i * i <= N; ++i) {
        if (massive_boolean[i] == true) {
            for (int j = i * i; j < N; j += i) {
                massive_boolean[j] = false;
            }
        }
    }
    for (int i = 2; i<N; ++i) {
        if (massive_boolean[i]==true) {
            cout<<i<<" ";
        }
    }
}
