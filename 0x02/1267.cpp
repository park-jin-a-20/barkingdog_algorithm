#include<iostream>
using namespace std;

int main() {
	int n;//통화 개수

	cin >> n;
	int* call = new int[n];
	
	int minCall = 0;
	int yongCall = 0;

	for (int i = 0; i < n; i++) {
		cin >> call[i];
		minCall += (call[i] /30 + 1) * 10;
		yongCall += (call[i] /60 + 1) * 15;
	}

	if (minCall > yongCall) {
		cout << "Y " << yongCall;
	}
	else if (yongCall >minCall) {
		cout << "M " << minCall;
	}
	else
		cout << "Y M " << minCall;

	delete[] call; // 동적 메모리 해제

}