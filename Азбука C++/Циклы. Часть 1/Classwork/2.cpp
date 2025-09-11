#include <bits/stdc++.h>
using namespace std;

signed main(void){
    int a;
    cin >> a;
    basic_string<char> res;
    while (a){
        res += (a % 2 == 0) ? '0' : '1';
        a /= 2;
    }
    cout << res << endl;
}
