#include <iostream>
#include <cmath>

using namespace std;

int main () {
    int x = -1, y = 0, z = 0;
    double w;

    while (x != 0) {
        cin >> x;
        z += x;
        ++y;
    }
    w = double(z) / (double(y) - 1);
    cout << w;

    return 0;
}