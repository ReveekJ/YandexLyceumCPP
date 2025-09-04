#include <iostream>
using namespace std;

int main() {
    int a1,a2,a3,a4,a5,a6;
	cin >> a1;
	cin >> a2;
	cin >> a3;
	cin >> a4;
	cin >> a5;
	cin >> a6;
	int c = (a4*3600 + a5 * 60 + a6)-(a1*3600 + a2 * 60 + a3);
	cout << c;
}
