#include<iostream>
#include<algorithm>
using namespace std;

int main() {
	int a, b, c;

	cin >> a >> b >> c;

	if (a == b && b == c) {
		cout << 10000 + 1000 * a;
	}
	else if (a == b || a == c) {
		cout << 1000 + a * 100;
	}
	else if (b == c) {
		cout << 1000 + b * 100;
	}
	else {
		cout << max({ a,b,c }) * 100;
	}

}
