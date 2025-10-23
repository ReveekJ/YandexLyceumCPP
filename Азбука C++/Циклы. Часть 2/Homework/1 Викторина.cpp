#include <iostream>

using namespace std;

int main() {
    int n, m;
    int best = 0;
    int best_num = 0;

    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        int temp = 0;
        int a;
        for (int j = 0; j < m; j++) {
            cin >> a;
            temp += a;
        }
        if (temp > best) {
            best = temp;
            best_num = i + 1;
        }
    }

    cout << best << endl;
    cout << best_num << endl;
}