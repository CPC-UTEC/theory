#include <bits/stdc++.h>
using namespace std;

int min(int arr[], int n) {
	int smallest = INT_MAX;
	for (int i = 0; i < n; i++) {
		smallest = min(smallest, arr[i]);
	}

	return smallest;
}

int main() {
	cout << "n\tTime" << endl;

	bool p = true;
	for (int n = 1000000; n <= 2e6; n += 100000) {
		int a[n], mn;
		for (int i = 0; i < n; i++) {
			a[i] = 1 + rand() % 1000000;
		}

		auto start = std::chrono::high_resolution_clock::now();
		mn = min(a, n);
		auto stop = std::chrono::high_resolution_clock::now();

		auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(stop - start);

		cout << n << '\t' << mn << '\t' << duration.count() << endl;
	}

	return 0;
}
