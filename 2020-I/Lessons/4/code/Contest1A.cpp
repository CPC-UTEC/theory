#include <bits/stdc++.h>
using namespace std;

int main() {
	int sz, p;

	while (cin >> sz >> p, sz) {
		int r = sz / 2 + 1;
		int c = sz / 2 + 1;
		int steps = 1;
		int jump = 0;
	
		int dx[4] {0, -1, 0, 1};
		int dy[4] {1, 0, -1, 0};
		int di = 0;

		while (steps < p) {
			if (di % 2 == 0) {
				jump++;
			}

			steps += jump;
			r += jump * dx[di];
			c += jump * dy[di];

			di = (di + 1) % 4;
		}

		di = (4 + di - 1) % 4;

		int ls = steps - p;
		r -= ls * dx[di];
		c -= ls * dy[di];

		cout << "Line = " << c <<", column = " << r << "." << endl;
	}

	return 0;
}
