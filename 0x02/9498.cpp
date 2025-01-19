#include<iostream>
using namespace std;

string printGrade(int score) {
	if (score >= 90)
		return "A";
	else if (score >= 80)
		return "B";
	else if (score >= 70)
		return "C";
	else if (score >= 60)
		return "D";
	else return"F";

}

int main() {
	int score;
	cin >> score;
	cout<<printGrade(score);
}