#include <bits/stdc++.h>
using namespace std;

signed main(void){
    int v, t;
    cin >> v >> t;
    cout << ( (v * t) % 109 + 109 ) % 109 << endl;
}