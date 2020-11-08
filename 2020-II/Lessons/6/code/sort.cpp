#include <bits/stdc++.h>
using namespace std;
const int N = 105;
int n, arr[N];

bool comp(int a, int b) {
	if (abs(a) == abs(b)) {
		return a < b;
	}
	return abs(a) < abs(b);
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	sort(arr, arr + n, comp);

	for (int i = 0; i < n; i++) {
		cout << arr[i] << ' ';
	}
	cout << endl;

	return 0;
}
