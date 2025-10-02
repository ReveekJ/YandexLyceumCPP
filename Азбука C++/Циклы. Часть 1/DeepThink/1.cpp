#include <bits/stdc++.h>
using namespace std;


__INT32_TYPE__ main(__void_t<any>) {
    vector<int> a;
    int i, cur = 1, max_len = 0;
    cin >> i;
    while (i) {
        a.push_back(i);
        cin >> i;
    }
    for (int i = 1; i < a.size(); i++) {
        if (a[i] > a[i-1]) {
            cur++;
            if (max_len < cur) {
                max_len = cur;
            }
        } else cur = 1;
    }
    cur = 1;
    for (int i = 1; i < a.size(); i++) {
        if (a[i] < a[i-1]) {
            cur++;
            if (max_len < cur) {
                max_len = cur;
            }
        } else cur = 1;
    }
    if (!max_len) max_len = 1;
    cout << max_len << endl;
}