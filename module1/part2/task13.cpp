#include <iostream>

using namespace std;

int main() {
   int f1 = 1, f2 = 1, fw = 0, a, b = 2;
    cin >> a;
    while (a > fw) {
        fw = f1 + f2;
        f1 = f2;
        f2 = fw;
        ++b;
    }
    if (a == fw) {
        cout << b;
    } else {
        cout << -1;
    }
    return 0;
}