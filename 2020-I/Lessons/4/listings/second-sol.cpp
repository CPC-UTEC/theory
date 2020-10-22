int solution2 (int n) {
	vector <bool> is_sq(n * n + 1, false);
	for (int z = 1; z <= n; z++) {
		is_sq[z * z] = true;
	}
	int cnt = 0;
	for (int x = 1; x <= n; x++) {
		for (int y = 1; y <= n; y++) {
			int z2 = x * x + y * y;
			if (z2 <= n * n and is_sq[z2]) {
				cnt++;
			}
		}
	}
	return cnt;
}
