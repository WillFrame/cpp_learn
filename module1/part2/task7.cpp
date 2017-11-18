#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int x, y;
    cin >> x;
    y = 1;
    while (sqrt(x) > y) {
        cout << y * y << endl;
        y = y + 1;
    }
    return 0;
}