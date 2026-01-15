#include <iostream>

using namespace std;

int main() {
    int x, y = 0;
    string line;

    int i = 0;
    while (getline(cin, line)) {
        int j = 0;
        for (const auto c : line) {
            if (c == '1') {
                x = j;
                y = i;
            }
            if (c != ' ') {
                j++;
            }
        }
        i++;
        if (i == 5){break;}

    }

    cout << abs(2 - x) + abs(2 - y) << endl;
}