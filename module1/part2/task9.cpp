#include <iostream>

using namespace std;

int main() {
    int x, y;

    cin >> x;
    y = 1;
    while (x >= y) {
        cout << y << " ";
        y = y * 2;
    }

    return 0;
}