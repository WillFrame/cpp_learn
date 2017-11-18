#include <iostream>

using namespace std;

int main() {
    int x, y, z;
    cin >> x >> y >> z;

    if (x > y) {
        if (x > z) {
            if (x < y + z) {
                cout << "Yes";
            } else {
                cout << "No";
            }
        }
    } else {
        if (y > z) {
            if (y < x + z) {
                cout << "Yes";
            } else {
                cout << "No";
            }
        } else {
            if (z < x + y) {
                cout << "Yes";
            } else {
                cout << "No"; }
        }
    }

    return 0;
}