#include <bits/stdc++.h>
using namespace std;
const int B = 20;
const int N = 1000005;
int n, a[N];

int main() {
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	long long sum = 0;
	for (int b = 0; b < B; b++) {
		int cnt0 = 0;
		int cnt1 = 0;

		for (int i = 0; i < n; i++) {
			if (a[i] & (1 << b)){
				cnt1++;
			}
			else {
				cnt0++;
			}
		}

		int p2 = (1 << b);
		sum += (long long) cnt0 * cnt1 * p2;
	}

	cout << sum << endl;

	return 0;
}
