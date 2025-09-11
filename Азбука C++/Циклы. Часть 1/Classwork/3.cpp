#include <bits/stdc++.h>
using namespace std;

signed main(void){
    double count = 1;
    double a;
    cin >> a;
    if (a == 0){cout << 0 << endl; return 0;}
    double sum = a;
    while (true){
        double b;
        cin >> b;
        if (b == 0){
            double res = sum / count;
            if (res == static_cast<int>(res)){
                cout << fixed << setprecision(1) << res << endl;
                return 0;
            }
            cout << setprecision(5) << defaultfloat << res << endl;
            return 0;
        }
        sum += b;
        count += 1;
    }
}
