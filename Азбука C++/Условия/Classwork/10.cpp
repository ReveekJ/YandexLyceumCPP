#include <iostream>

using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    cout << b * 2 * (c / a + (c % a ? 1 : 0)) << endl;
}