#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int x, y, z;
    cin >> x;
    y = 1;
    while (x % y == 0)
    {if (x % y == 0) {
        cout << y;
        ++y;
        }
    }
    return 0;
}