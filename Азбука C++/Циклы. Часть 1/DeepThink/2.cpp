#include <bits/stdc++.h>
using namespace std;


__INT32_TYPE__ main(__void_t<any>) {
    int a, prev = 1, prevv = 1, curi = 3, cur = prev + prevv;
    cin >> a;
    if (a == 1) {
        cout << 2 << endl;
        return 0;
    }
    if (a == 0) {
        cout << 1 << endl;
        return 0;
    }
    while (a > cur) {
        prevv = prev;
        prev = cur;
        cur = prevv + prev;
        curi++;
    }
    if (a == cur) cout << curi << endl;
    else cout << -1 << endl;
}