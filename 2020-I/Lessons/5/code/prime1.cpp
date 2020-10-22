#include <bits/stdc++.h>
using namespace std;

int main() {
	long long n;
	cin >> n;

	bool prime = true;
	for (long long i = 2; i * i <= n; i++) {
		if (n % i == 0) {
			prime = false;
		}
	}

	if (prime) {
		cout << "YES" << endl;
	}
	else {
		cout << "NO" << endl;
	}

	return 0;
}
