#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

signed main(void){
    int R, K, P;
    cin >> R >> K >> P;
    ll sumKopecks = 1LL * R * 100 + K;
    ll newSum = sumKopecks + (sumKopecks * P) / 100;
    cout << newSum / 100 << " " << newSum % 100 << endl;
}