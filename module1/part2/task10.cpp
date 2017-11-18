#include <iostream>

using namespace std;

int main() {
    int x, y, z;

    cin >> x;
    y = 1;
    while (x >= y) {
        y *= 2;
    }
    y /= 2;
    if (x == y) {
        cout << "YES";
    } else {
        cout << "NO";
    }
    return 0;
}