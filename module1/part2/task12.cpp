#include <iostream>

using namespace std;

int main() {
    int x = 0, y = 1, z, a, b = 0;
    cin >> a;
    while (a > b) {
        z = x + y;
        x = y;
        y = z;
        ++b;
    }
    cout << y;

    return 0;
}