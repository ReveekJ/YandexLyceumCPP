#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> counts(n, 0);

    for (int i = 0; i < m; i++) {
        int temp;
        cin >> temp;
        counts[temp - 1]++;
    }

    cout << *min_element(counts.begin(), counts.end()) << endl;
}