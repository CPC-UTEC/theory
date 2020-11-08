#include <bits/stdc++.h>
using namespace std;
const int N = 105;
int n, arr[N];

bool binaryFun(int i, int x) {
	return arr[i] >= x;
}

//Lower bound
int binarySearch(int x) {
	int l = 0; // The minimum value my answer can take
	int r = n - 1; // The maximum value my answer can take

	int ans = -1;
	while (l <= r) {
		int m = (l + r) / 2;

		if (binaryFun(m, x)) {
			ans = m;
			r = m - 1;
		}
		else {
			l = m + 1;
		}
	}

	return ans;
}

int main() {
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	int q;
	cin >> q;
	cout << binarySearch(q) << endl;

	return 0;
}
