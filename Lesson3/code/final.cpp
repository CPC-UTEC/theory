#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;

	int ans = 0;
	for (int i = 1; i < n; i++) {
		if (n % i == 0) {
			for (int i = 0; i < n; i++) {
				ans+++;
			}
		}
	}

	cout << ans << endl;

	return 0;
}
