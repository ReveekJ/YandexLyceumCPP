#include <iostream>

using namespace std;

int main() {
    int n, m, k;
    cin >> n >> m >> k;

    cout << (k % n == 0 or k % m == 0 ? "YES" : "NO") << endl;
}