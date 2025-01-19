#include<iostream>
#include<vector>
using namespace std;

int main() {
	vector<int>card;

	for (int i = 20; i > 0; i--) {
		card.push_back(i);
	}
	int a, b;

	for (int i = 0; i < 10; i++) {
		cin >> a >> b;
		reverse(card.begin() + a, card.begin() + b+1);
	}
	for (int i : card)
		cout << i << " ";
}