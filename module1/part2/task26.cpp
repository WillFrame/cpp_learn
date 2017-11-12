#include <iostream>

using namespace std;

int main() {
    int x, y, x1, y1;
    cin >> x >> y >> x1 >> y1;
    if (x == x1) {cout << "Yes";}
    else {if (y == y1)
        {cout << "Yes";}
        else {cout << "No";}}
    return 0;
}