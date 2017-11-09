#include <iostream>

using namespace std;

int main() {
    int x, y, z;
    cin >> x >> y;
    z = y - ((y / x) * x);
    cout << z;
    return 0;
}
