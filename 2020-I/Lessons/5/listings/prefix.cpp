int main() {
	int n, q;
	cin >> n >> q;

	int a[n], pref[n];
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		pref[i] = pref[i - 1] + a[i];
	}

	int l, r;
	for (int i = 0; i < q; i++) {
		cin >> l >> r;
		cout << pref[r] - pref[l - 1] << endl;
	}

	return 0;
}
