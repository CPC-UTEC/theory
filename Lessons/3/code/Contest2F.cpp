#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;

	cin >> n;

	map<int, int> cnt;

	int a;
	for (int i = 0; i < n; i++) {
		cin >> a;
		cnt[a]++;
	}

	int ans = 0;
	for (auto p : cnt) {
		int x = p.first;
		int c = p.second;

		if (c > x) {
			ans += c - x;
		}
		else if (c < x) {
			ans += c;
		}
	}

	cout << ans << endl;

	return 0;
}
