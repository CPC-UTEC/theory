#include <bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;

int classicExp(int x, int y) {
	int ans = 1;

	for (int i = 1; i <= y; i++) {
		ans = (long long) ans * x % mod;
	}

	return ans;
}

int exp(int x, int y) {
	if (y == 0) {
		return 1;
	}

	int y_2 = exp(x, y / 2);
	int ans = (long long) y_2 * y_2 % mod;
	if (y % 2 == 1) {
		ans = (long long) x * ans % mod;
	}
	return ans;
}

int main() {
	int x, y;
	cin >> x >> y;

	cout << exp(x, y) << endl;
}
