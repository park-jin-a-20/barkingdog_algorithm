#include<iostream>
using namespace std;

//cin.tie(0);
//cin.tie(nullptr);
/*cin����� �����ϱ� ���� cout���۸� ����� �ʵ��� */

int main() {
	int N, num;
	cin.tie(0);

	cin >> N >> num;

	int* arr = new int[N];

	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}
	for (int i = 0; i < N; i++) {
		if(arr[i]<num)
			cout << arr[i] << " ";
	}
}