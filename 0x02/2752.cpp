#include<iostream>
#include<algorithm>
using namespace std;

//algorithm������Ͽ� min(),max()�Լ� ����
// 
// 
//�ΰ��� ���� ���� ������ min() �Ǵ� max()�� 
//���� 3�� �̻��� ���� ���� ������ {}�� ����ϸ� �����ϴ�

int main() {
	int a, b, c;
	cin >> a >> b >> c;
	
	int d, e, f;
	d = max({ a,b,c });
	f = min({ a,b,c });
	e = a + b + c - d - f;
	cout << f << " " << e << " " << d;
}