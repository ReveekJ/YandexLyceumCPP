#include <iostream>

using namespace std;

int main() {
    int n = 0;
    cin >> n;
    double a = 0;

    for (int i = 0; i < n; i++) {
        double temp;
        cin >> temp;
        a += temp / 100;
    }

    cout << a / n * 100 << endl;
}
