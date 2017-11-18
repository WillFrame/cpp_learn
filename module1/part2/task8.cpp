#include <iostream>

using namespace std;

int main() {
    int x, y, z;

    cin >> x;
    y = 2;
    while (x % y != 0) {
        ++y;
    }
    cout << y;
    return 0;
}