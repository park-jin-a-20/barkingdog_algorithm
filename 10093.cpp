#include<iostream>
#include<algorithm>
using namespace std;

int main() {

	int a, b;
	cin >> a >> b;

	int maxVal = max(a, b), minVal = min(a, b);

	int cnt = maxVal-minVal - 1;//����
	if (maxVal == minVal)
		cnt = 0;

	cout << cnt << "\n";

	//���� ���� ���
	for (int i = minVal + 1; i < maxVal; i++) {
		cout << i << " ";
	}
}