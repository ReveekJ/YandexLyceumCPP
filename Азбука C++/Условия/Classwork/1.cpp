#include <iostream>
using namespace std;

int main() {
    int a,b,c,d;
    cin >> a;
    cin >> b;
    cin >> c;
    cin >> d;
    if ((abs(a-c) == 1 && abs(b-d) == 2) || (abs(a-c) == 2 && abs(b-d) == 1)){
        cout << "YES";
    } else {
        cout << "NO";
    }
}
