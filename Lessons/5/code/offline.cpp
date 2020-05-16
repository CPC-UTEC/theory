#include <bits/stdc++.h>
using namespace std;
const int N = 1000005;
int n, q, a[N], cnt[N], res[N];
vector<pair<int, int>> queries[N];
vector<int> divisors[N];

void sieve() {
	for (int i = 1; i < N; i++) {
		for (int j = i; j < N; j += i) {
			divisors[j].push_back(i);
		}
	}
}

int main() {
	sieve();

	cin >> n >> q;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}

	for (int i = 0; i < q; i++) {
		int m, p;
		cin >> m >> p;
		queries[m].push_back({p, i});
	}

	for (int i = 1; i <= n; i++) {
		for (int d : divisors[a[i]]) {
			cnt[d]++;
		}

		for (pair<int, int> qu : queries[i]) {
			int p = qu.first;
			int idx = qu.second;
			res[idx] = cnt[p];
		}
	}

	for (int i = 0; i < q; i++) {
		cout << res[i] << endl;
	}

	return 0;
}
