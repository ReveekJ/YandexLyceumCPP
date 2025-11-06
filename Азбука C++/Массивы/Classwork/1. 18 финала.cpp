#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    int cnt = 0;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if (arr[i] > 0) {
            cnt++;
        }
    }

    cout << cnt << endl;
    int cnt_less = 0;
    int j = n;

    while (cnt_less < 3 and j >= 0) {
        if (arr[j] < 0) {
            cout << arr[j] << ' ';
            cnt_less++;
        }
        j--;
    }
}