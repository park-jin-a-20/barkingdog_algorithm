#include<iostream>
#include<algorithm>
using namespace std;

//algorithm헤더파일에 min(),max()함수 존재
// 
// 
//두개의 수를 비교할 때에는 min() 또는 max()를 
//만약 3개 이상의 수를 비교할 때에는 {}를 사용하면 가능하다

int main() {
	int a, b, c;
	cin >> a >> b >> c;
	
	int d, e, f;
	d = max({ a,b,c });
	f = min({ a,b,c });
	e = a + b + c - d - f;
	cout << f << " " << e << " " << d;
}