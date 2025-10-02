#include <bits/stdc++.h>
using namespace std;


__INT32_TYPE__ main(__void_t<any>) {
    double x, y, i = 0;
    cin >> x >> y;

    while (x < y) {
        i++;
        x += x * 0.1;
    }

    cout << i + 1 << endl;
}