#include <iostream>
using namespace std;

int main() {
    int a,b,c,m;
    cin >> a >> b >> c;
    if ((a>b && a<c)||(a<b && a>c)){
        m = a;
    } else if ((b>a && b<c)||(b<a && b>c)){
        m = b;
    } else {
        m = c;
    }
    cout << m;
    
}
