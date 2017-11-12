#include <iostream>

using namespace std;

int main() {
    int x, y, z;
    cin >> x;
    z = x / 10;
    y = z - ((z / 10) * 10);
    cout << y;
    return 0;
}
