#include <bits/stdc++.h>
using namespace std;
const int N = 15;
int n;

int arr[N];
bool used[N];

void print_permutations(int pos) {
	if (pos == n) {
		for (int i = 0; i < n; i++) {
			cout << arr[i] << ' ';
		}
		cout << endl;
		return;
	}

	for (int i = 1; i <= n; i++) {
		if (used[i]) continue;
		used[i] = true;
		arr[pos] = i;
		print_permutations(pos + 1);
		arr[pos] = 0;
		used[i] = false;
	}
}

int main() {
	cin >> n;

	print_permutations(0);

	return 0;
}
