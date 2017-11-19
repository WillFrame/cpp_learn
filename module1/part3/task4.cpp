#include <iostream>
#include <cmath>

using namespace std;

int main () {
    int x,y,z;
    double w;

    z = 0;
    y = 0;
    while (x != 0) {
        cin >> x;
        z += x;
        ++y;
    }
    w = double(z) / (double(y) - 1);
    cout << w;

    return 0;
}