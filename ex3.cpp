#include <iostream>
using namespace std;

int num(int x) {
    int c;

    if (x < 0) {
        c = -1;
        cout << c;
    } else if (x == 0) {
        c = 0;
        cout << c;
    } else if (x > 0) {
        c = 1;
        cout << c;
    }

    return c;
}

int main() {
    int x;
    cin >> x;

    num(x);

    return 0;
}
