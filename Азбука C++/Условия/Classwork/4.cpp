#include <iostream>
using namespace std;

int main() {
    char a;
    int m1('A');
    int m2('z');
    cin >> a;
    int b = (int)a;
    if (b >= m1 && b <= m2){
        cout << "correct"<< endl;
    } else {
    cout << "incorrect"<< endl;
    }
    return 0;


}
