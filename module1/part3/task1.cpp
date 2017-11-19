#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double a;
    int b;

    cin >> a;
    b = (int)a;
    a -= b;
    a *= 10;
    cout << (int)a;

    return 0;
}
