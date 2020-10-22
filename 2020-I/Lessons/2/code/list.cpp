#include <bits/stdc++.h>
using namespace std;

int main() {
	int arr[5] = {1, 2, 3, 4, 5};

	int arr2[6];

	arr2[0] = 7;
	for (int i = 1; i < 6; i++) {
		arr2[i] = arr[i - 1];
	}

	return 0;
}

