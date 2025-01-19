#include<iostream>
#include<algorithm>
using namespace std;

int main() {

	int a, b;
	cin >> a >> b;

	int maxVal = max(a, b), minVal = min(a, b);

	int cnt = maxVal-minVal - 1;//개수
	if (maxVal == minVal)
		cnt = 0;

	cout << cnt << "\n";

	//사이 정수 출력
	for (int i = minVal + 1; i < maxVal; i++) {
		cout << i << " ";
	}
}