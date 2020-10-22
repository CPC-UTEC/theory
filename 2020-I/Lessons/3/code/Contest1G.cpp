#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;

	cin >> n;

	if (n <= 2) {
		cout << 1 << endl;
		cout << 1 << endl;
		return 0;
	}
	if (n == 3) {
		cout << 2 << endl;
		cout << 1 << ' ' << 3 << endl;
		return 0;
	}

	cout << n << endl;
	for (int x = 2; x <= n; x += 2) {
		cout << x << ' ';
	}
	for (int x = 1; x <= n; x += 2) {
		cout << x << ' ';
	}
	cout << endl;

	return 0;
}

