#include <bits/stdc++.h>
using namespace std;


__INT32_TYPE__ main ( __void_t<any> ){
    int N;
    cin >> N;
    long long ts = N * (N + 1) / 2;
    long long rs = 0;
    for (int i = 0; i < N - 1; i++) {
        int card;
        cin >> card;
        rs += card;
    }
    cout << (ts - rs) << endl;
}