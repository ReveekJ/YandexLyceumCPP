#include <iostream>
#include <vector>
#include <climits>
#include <cmath>

using namespace std;

int main() {
    int n, m;
    cin >> n;
    vector<int> shirts(n);
    for (int i = 0; i < n; ++i) {
        cin >> shirts[i];
    }

    cin >> m;
    vector<int> pants(m);
    for (int i = 0; i < m; ++i) {
        cin >> pants[i];
    }

    int min_diff = INT_MAX;
    int best_shirt_color = 0;
    int best_pant_color = 0;

    int* p_shirts = shirts.data();
    int* p_pants = pants.data();

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            int diff = abs(*(p_shirts + i) - *(p_pants + j));
            if (diff < min_diff) {
                min_diff = diff;
                best_shirt_color = *(p_shirts + i);
                best_pant_color = *(p_pants + j);
            }
        }
    }

    cout << best_shirt_color << " " << best_pant_color << endl;

    return 0;
}