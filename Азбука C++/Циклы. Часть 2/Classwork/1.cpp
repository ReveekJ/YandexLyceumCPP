#include <bits/stdc++.h>
using namespace std;

__INT32_TYPE__ main( __void_t<any> ) {
    int n;
    cin >> n;
    int start = pow(10, n - 1);
    int end = pow(10, n) - 1;
    for (int i = end; i >= start; i--) {
        if (i % 2 == 1) {
            cout << i << " ";
        }
    }
}
