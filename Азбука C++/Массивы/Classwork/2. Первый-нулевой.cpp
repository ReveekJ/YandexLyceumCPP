#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (auto i = 0; i < (n % 2 == 0 ? n : n - 1); i+=2) {
        int b = arr[i + 1];
        arr[i + 1] = arr[i];
        arr[i] = b;
    }
    for (auto i = n - 1; i >= 0; i--) {
        cout << arr[i] << ' ';
    }
}