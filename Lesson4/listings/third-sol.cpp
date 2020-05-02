int solution3 (int n) {
	int cnt = 0;
	for (int a = 1; a * a < n; a++) {
		for (int b = 1; b < a; b++) {
			if (__gcd(a, b) != 1) continue;
			if (a % 2 and b % 2) continue;

			int x = a * a - b * b;
			int y = 2 * a * b;
			int z = a * a + b * b;
			int add = min({n / x, n / y, n / z});
			cnt += 2 * add;
		}
	}
	return cnt;
}
