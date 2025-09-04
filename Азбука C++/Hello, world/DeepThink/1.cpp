#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int S, D, N;
    cin >> S >> D >> N;

    int days = ceil(static_cast<double>(S - D) / (D - N)) + 1;

    cout << days << endl;
    return 0;
}
