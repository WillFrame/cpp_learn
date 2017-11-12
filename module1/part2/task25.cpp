#include <iostream>

using namespace std;

int main() {
    int x, y, z;
    cin >> x >> y >> z;
    if (x == y) {
        if (x == z) {
            cout << 3;
        }
    }
    else {if (y == z) {
            cout << 2;
        }
        else {cout << 0;}
    }
    return 0;
}