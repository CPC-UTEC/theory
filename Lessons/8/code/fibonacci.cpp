#include <bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
const int N = 1e7;
int mem[N];
bool vis[N];

int fib(int n) {
	if (n <= 1) {
		return n;
	}
	if (vis[n]) {
		return mem[n];
	}
	vis[n] = true;
	return mem[n] = (long long) (fib(n - 1) + fib(n - 2)) % mod;
}

int main() {
	int n;
	cin >> n;

	cout << fib(n) << endl;

	return 0;
}
