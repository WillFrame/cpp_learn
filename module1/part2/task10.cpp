#include <iostream>

using namespace std;

int main() {
    int x, y;

    cin >> x;
    y = 1;
    while (x >= y) {
        y = y * 2;
    }
    y = y / 2;
    if (x == y) {
        cout << "YES";
    } else {
        cout << "NO";
    }
    return 0;
}