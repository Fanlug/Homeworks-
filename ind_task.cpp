#include <iostream>
#include <string>
#include <cmath>
using namespace std;

long factorial(long k) {
    if (k != 1) {
        return factorial(k - 1) * k;
    }
    else {
        return 1;
    }
}

long fun(long k) {
    return  pow(-1,k)*factorial(2*k*k+1); 
}



int main() {
    long N,sum=0;
    cin >> N;

    for (long i = 1; i <= N;i++) {
        sum += fun(i);
    }
    cout << sum;
}
