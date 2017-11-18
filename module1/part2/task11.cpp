#include <iostream>

using namespace std;

int main() {
    int y, z;

    z = 0;
    cin >> y;
    while (y != 0) {
        ++z;
        cin >> y;
    }
    cout << z;
    return 0;
}