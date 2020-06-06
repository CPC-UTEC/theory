#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 20;
int n, color[N];
vector<int> divisors[N];

void sieve() {
	for (int i = 2; i <= n + 10; i++) {
		for (int j = 2 * i; j <= n + 10; j += i) {
			divisors[j].push_back(i);
		}
	}
}

int main() {
	cin >> n;
	sieve();

	int ans = 1;
	for (int i = 3; i <= n + 1; i++) {
		set<int> divisor_colors;
		for (int d : divisors[i]) {
			divisor_colors.insert(color[d]);
		}

		if (divisor_colors.empty() || *divisor_colors.begin() != 0) continue;
		for (auto it = divisor_colors.begin(); it != --divisor_colors.end(); it++) {
			if (*(++it) == *it) continue;
			color[i] = *it + 1;
			ans = max(ans, color[i] + 1);
		}
		if (color[i] == 0) {
			color[i] = divisor_colors.size();
			ans = max(ans, color[i] + 1);
		}
	}

	cout << ans << '\n';
	for (int i = 2; i <= n + 1; i++) {
		cout << color[i] + 1 << ' ';
	}
	cout << '\n';

	return 0;
}
