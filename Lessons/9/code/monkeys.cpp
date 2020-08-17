#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 100;
int t, n, r[N];

bool poss(int tk) {
	for (int i = 0; i <= n - 1; i++) {
		if (r[i + 1] - r[i] > tk) {
			return false;
		}
		if (r[i + 1] - r[i] == tk) {
			tk--;
		}	
	}
	return true;
}

int solve() {
	int l = 1;
	int r = 1e7;

	int ans = -1;
	while (l <= r) {
		int m = (l + r) / 2;
		if (poss(m)) {
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
	cin >> t;

	for (int ti = 1; ti <= t; ti++) {
		cin >> n;
		for (int i = 1; i <= n; i++) {
			cin >> r[i];
		}

		cout << "Case " << ti << ": " << solve() << '\n';
	}

	return 0;
}
