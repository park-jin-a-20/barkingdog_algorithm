#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


//vector<type> v;
//v.pushback(값);
/*
v.pop_back()://벡터 마지막 제거
v.insert(위치,변수값)//위치에 값 삽입
v.erase(위치)//위치에 해당하는 요소 삭제, 뒤의 값들 땡겨짐

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
				//뒤에 있는 요소 먼저 삭제
				nanjang.erase(nanjang.begin() + i );
				found = true;
			}
	sort(nanjang.begin(), nanjang.end());//헤더파일 포함해야함
	for (int h : nanjang)
		cout << h << "\n";
		
}