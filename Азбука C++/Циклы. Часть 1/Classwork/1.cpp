#include <bits/stdc++.h>
using namespace std;

signed main(void){
    int a;
    cin >> a;
    int res = 0;
    if (a == 0) {cout << 0 << endl; return 0;}
    while (true){
        int b;
        cin >> b;
        if (b == 0) {cout << res << endl; return 0;}
        if (b > a) res++;
        a = b;
    }
}
