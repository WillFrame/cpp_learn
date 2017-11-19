#include <iostream>
#include <cmath>

using namespace std;

int main () {
    int x,y,z;
    double w;

    while (x != 0) {
        cin >> x;
        z += x;
        ++y;
    }
    w = z / y;
    cout << w;

    return 0;
}