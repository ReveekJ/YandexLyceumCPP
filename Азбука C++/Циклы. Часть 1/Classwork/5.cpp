#include <bits/stdc++.h>
#define YES cout << "YES" << endl;
#define NO cout << "NO" << endl;
using namespace std;

signed main(void){
    int a;
    cin >> a;
    int b = 1;
    while (b <= a) {
        if (b == a) {
            YES
            return 0;
        }
        b *= 2;
    }
    NO
}
