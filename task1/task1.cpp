#include <iostream>

using namespace std;

int main() {
    int x, y;
    cin >> x >> y;
    if (x == 1) {
        cout << "x is 1" << endl;
    }

    cout << x << " + " << y << " = " << x + y << endl << x << " * " << y << " = " << x * y;
    return 0;
}