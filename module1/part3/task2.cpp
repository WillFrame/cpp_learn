#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double a, b, c, pp, S;

    cin >> a >> b >> c;
    pp = (a + b + c) / 2;
    S = sqrt(pp * (pp - a) * (pp - b) * (pp - c));
    cout << S;

    return 0;
}
