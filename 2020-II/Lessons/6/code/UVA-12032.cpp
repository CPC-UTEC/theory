#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;
int t, n, h[N];

bool possible(int k) {
	for (int i = 0; i < n; i++) {
		int dif = h[i + 1] - h[i];
		if (dif > k) {
			return false;
		}
		if (dif == k) {
			k -= 1;
		}
	}
	return true;
}

int solve() {
	cin >> n;

	for (int i = 1; i <= n; i++) {
		cin >> h[i];
	}

	int l = 0;
	int r = 1e7;

	int ans = -1;
	while (l <= r) {
		int m = (l + r) / 2;
		if (possible(m)) {
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
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	cin >> t;
	for (int ti = 1; ti <= t; ti++) {
		cout << "Case " << ti << ": " << solve() << '\n';
	}

	return 0;
}
