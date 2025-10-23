#include <bits/stdc++.h>
using namespace std;

__INT32_TYPE__ main( __void_t<any> ) {
    int N;
    cin >> N;
    int cz = 0;
    for (int i = 0; i < N; i++) {
        int x;
        cin >> x;
        if (x == 0) {
            cz++;
        }
    }
    cout << cz << endl;
}
