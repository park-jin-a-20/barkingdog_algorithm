#include<iostream>
using namespace std;

int main() {
	int arr[9];
	int max=0, maxIndex;

	for (int i = 0; i < 9; i++) {
		cin >> arr[i];
		if (arr[i] > max) {
			max = arr[i];
			maxIndex = i+1;//배열은 0부터 시작이므로 1 더해야 함
		}
	}
	cout << max << "\n" << maxIndex;
}

//
//int n, maxvalue, maxindex;
//
//int main(void) {
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//
//	for (int i = 1; i < 10; i++) {
//		cin >> n;
//		// 전역변수의 초기값은 0이므로 바로 비교 가능합니다.
//		if (maxvalue < n) {
//			maxvalue = n;
//			maxindex = i;
//		}
//	}
//	cout << maxvalue << "\n" << maxindex;
//}