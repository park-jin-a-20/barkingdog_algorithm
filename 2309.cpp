#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


//vector<type> v;
//v.pushback(��);
/*
v.pop_back()://���� ������ ����
v.insert(��ġ,������)//��ġ�� �� ����
v.erase(��ġ)//��ġ�� �ش��ϴ� ��� ����, ���� ���� ������

*/
int main() {
	vector<int>nanjang;
	int sum = 0;
	int height;

	for (int i = 0; i < 9; i++) {
		cin >> height;
		nanjang.push_back(height);
		sum += height;
	}

	bool found = false;


	for (int i = 0; i < 9&&!found; i++) 
		for (int j = i+1; j < 9&&!found; j++) 
			if (sum - nanjang[i] - nanjang[j] == 100){
				nanjang.erase(nanjang.begin() + j);
				//�ڿ� �ִ� ��� ���� ����
				nanjang.erase(nanjang.begin() + i );
				found = true;
			}
	sort(nanjang.begin(), nanjang.end());//������� �����ؾ���
	for (int h : nanjang)
		cout << h << "\n";
		
}