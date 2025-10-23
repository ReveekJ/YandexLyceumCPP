#include <bits/stdc++.h>
using namespace std;

__INT32_TYPE__ main( __void_t<any> ) {
    int n;
    cin >> n;
    long long sum = 0;
    long long fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
        sum += fact;
    }
    cout << sum << endl;
}
