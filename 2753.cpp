#include<iostream>
using namespace std;

bool yoon(int year) {
	if (year % 400 == 0 || year % 4 == 0 && year % 100 != 0)
		return true;
	return false;
}

int main() {
	int year;
	cin >> year;

	if (yoon(year)) {
		cout << 1;
	}
	else
		cout << 0;

}