#include <bits/stdc++.h>
using namespace std;

bool binaryFun(float m, float x) {
	return m * m >= x;
}

//Lower bound
float mySqrt(float x) { // x >= 1
	float l = 1; // The minimum value my answer can take
	float r = x; // The maximum value my answer can take

	for (int rep = 0; rep < 50; rep++) {
		float m = (l + r) / 2;

		if (binaryFun(m, x)) {
			r = m;
		}
		else {
			l = m;
		}
	}

	return (l + r) / 2;
}

int main() {
	float x;

	cin >> x;
	cout << setprecision(9);
	cout << mySqrt(x) << ' ' << sqrt(x) << endl;

	return 0;
}
