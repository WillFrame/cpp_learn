#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double p, x, y, year, now;

    cin >> p >> x >> y >> year;
    now = 0;
    x *= 100;
    while (now < year){
        y = 0;
        x = x * p / 100 + x;
        y = (int)x;
        y = x - y;
        x = x - y;
        ++now;
    }
    x /= 100;
    y = (int)x;
    y = x - y;
    x = x - y;
    y *= 100;
    cout << x << " " << y;

    return 0;
}


