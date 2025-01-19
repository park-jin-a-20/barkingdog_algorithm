#include<iostream>
using namespace std;

int main() {
	int arr[7];
	int sum = 0;
	int min;
	for (int i = 0; i < 7; i++) {
		cin>>arr[i];
		if (arr[i] % 2 != 0) {
			sum += arr[i];
			if (arr[i] < min)
				min = arr[i];
		}
	}
	if (sum == 0)
		cout << "-1";
	else cout << sum << "\n" << min;
}