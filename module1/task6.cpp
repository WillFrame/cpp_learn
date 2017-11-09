#include <iostream>

using namespace std;

int main() {
    int x, y, z, a, b;
    cin >> x;
    z = x / 1;
    y = z - ((z / 10) * 10);
    z = x / 10;
    a = z - ((z / 10) * 10);
    z = x / 100;
    b = z - ((z / 10) * 10);
    cout << y + a +b;
    return 0;
}
