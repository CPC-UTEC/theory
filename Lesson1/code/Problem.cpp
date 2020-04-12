#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;

	int b[n];
	for (int i = 0; i < n; i++) {
		cin >> b[i];
	}
	int mx = 0;
	int smx = 0;
	for  (int i = 0; i < n; i++) {
		if (b[i] > mx) {
			smx = mx;
			mx = b[i];
		}
		else if (b[i] > smx) {
			smx = b[i];
		}
	}

	int ans = mx + smx;
	cout << ans << endl;

	return 0;
}
