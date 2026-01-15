#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {
    int N;
    cin >> N;

    long long maxArea = 0;

    for (int i = 0; i < N; ++i) {
        long long x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;

        long long width = abs(x2 - x1);
        long long height = abs(y2 - y1);
        long long area = width * height;

        if (area > maxArea) {
            maxArea = area;
        }
    }

    cout << maxArea << endl;

    return 0;
}