#include<iostream>
using namespace std;

int main() {
	int arr[9];
	int max=0, maxIndex;

	for (int i = 0; i < 9; i++) {
		cin >> arr[i];
		if (arr[i] > max) {
			max = arr[i];
			maxIndex = i+1;//�迭�� 0���� �����̹Ƿ� 1 ���ؾ� ��
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
//		// ���������� �ʱⰪ�� 0�̹Ƿ� �ٷ� �� �����մϴ�.
//		if (maxvalue < n) {
//			maxvalue = n;
//			maxindex = i;
//		}
//	}
//	cout << maxvalue << "\n" << maxindex;
//}