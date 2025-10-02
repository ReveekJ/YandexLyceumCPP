#include <bits/stdc++.h>
using namespace std;

__INT32_TYPE__ main(__void_t<any>) {
    int P, X, Y, K;
    cin >> P >> X >> Y >> K;
    long long kop = static_cast<long long>(X) * 100 + Y;
    for (int i = 0; i < K; ++i) {
        kop = static_cast<long long>(kop * (100 + P) / 100);
    }
    cout << kop / 100 << " " << kop % 100 << endl;
}
