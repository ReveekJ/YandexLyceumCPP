#include <bits/stdc++.h>
using namespace std;

__INT32_TYPE__ main( __void_t<any> ) {
    int n;
    cin >> n;
    cout << "\t";
    for (int j = 1; j <= n; j++) {
        cout << j;
        if (j != n) cout << "\t";
    }
    cout << endl;
    for (int i = 1; i <= n; i++) {
        cout << i << "\t";
        for (int j = 1; j <= n; j++) {
            cout << i + j;
            if (j != n) cout << "\t";
        }
        cout << endl;
    }
}
