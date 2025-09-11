#include <bits/stdc++.h>
using namespace std;

signed main(void){
    char c;
    cin >> c;
    char dec = 'A' + (c - 'A' - 8 + 26) % 26;
    cout << dec << endl;
}