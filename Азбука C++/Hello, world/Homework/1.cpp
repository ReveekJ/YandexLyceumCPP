#include "iostream"
#include <string>

using namespace std;

int main() {
    string number;
    cin >> number;

    number.insert(0, 4 - number.length(), '0');

    const bool is_palindrome = number[0] == number[3] && number[1] == number[2];

    cout << (is_palindrome ? 1 : 19) << endl;

    return 0;
}