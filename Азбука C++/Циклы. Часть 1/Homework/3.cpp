#include <bits/stdc++.h>
using namespace std;

__INT32_TYPE__ main(__void_t<any>) {
    int n, m;
    cin >> n >> m;

    while (1) {
        if (n / 2 >= m && n % 2 == 0) {
            n /= 2;
            cout << ":2" << endl;
        } else {n -= 1; cout << "-1" << endl;}
        if (n == m) {
            return 0;
        }
    }
}
