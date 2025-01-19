#include<iostream>
using namespace std;

int func1(int n) {
	int sum = 0;
	for (int i = 0; i <= n; i++) {
		if (i % 3 == 0 || i % 5 == 0)
			sum += i;
	}
	return sum;
}
int func2(int arr[], int N) {
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++)
			if (arr[i] + arr[j] == 100)
				return 1;
	}
	return 0;
}
int func(int N) {
	for (int i = i; i * i <= N; i++) {
		if (N == i * i)
			return 1;
	}
	return 0;
}

#include<cmath>
int func(int N) {
	for (int i = 1; pow(2, i) < N; i++)
		if (pow(2, i) == N)
			return pow(2, i);

	//int val = 1;
	//while (2 * val < N)val *= 2;
	//return val;
}

int main() {
	
}