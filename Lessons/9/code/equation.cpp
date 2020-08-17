#include <bits/stdc++.h>
using namespace std;
using ld = long double;
ld a, b, c, d, e;

ld f(ld x) {
	return a * x * x * x + b * x * x + c * x + d;
}

ld solve() {
	ld l = 0;
	ld r = 100;
	for (int i = 0; i <= 65; i++) {
		ld m = (l + r) / 2.0;
		ld y = f(m);

		if (y < e) {
			l = m;
		}
		else {
			r = m;
		}
	}

	return (l + r) / 2.0;
}

int main() {
	cin >> a >> b >> c >> d >> e;
	
	cout << fixed << setprecision(9) << solve() << endl;

	return 0;
}
