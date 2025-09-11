#include <bits/stdc++.h>
using namespace std;

signed main(void){
    char c;
    cin >> c;
    char enc = 'A' + (c - 'A' + 5) % 26;
    cout << enc << endl;
}