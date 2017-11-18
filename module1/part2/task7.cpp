#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int x, y, z;
    cin >> x;
    y = 1;
    z = sqrt(x);
    while (z > y) {
        cout << y * y << endl;
        ++y;
    }
    return 0;
}