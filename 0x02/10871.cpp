#include<iostream>
using namespace std;

//cin.tie(0);
//cin.tie(nullptr);
/*cin명령을 수행하기 전에 cout버퍼를 비우지 않도록 */

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