#include <bits/stdc++.h>
using namespace std;

void move(char S, char D) {
	cout << S << "->" << D << endl;
}

void hanoi(int n, char S, char A, char D) {
	if (n == 0) return;

	hanoi(n - 1, S, D, A);
	move(S, D);
	hanoi(n - 1, A, S, D);
}

int main() {
	hanoi(15, 'A', 'B', 'C');
	return 0;
}
