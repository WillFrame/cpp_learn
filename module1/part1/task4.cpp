#include <iostream>

using namespace std;

int main() {
    int x, y;
    cin >> x;
    y = x - (x - ((x / 10)));
    cout << y;
    return 0;
}