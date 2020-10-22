#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	vector<set<char>> words(n);
	vector<int> size(n);

	for (int i = 0; i < n; i++) {
		string word;
		cin >> word;

		size[i] = word.size();
		for (char c : word) {
			words[i].insert(c);
		}
	}

	int ans = 0;
	for (char a = 'a'; a <= 'z'; a++) {
		for (char b = a + 1; b <= 'z'; b++) {
			int temp = 0;

			for (int i = 0; i < n; i++) {
				if (words[i].size() > 2) continue;
				if (words[i].size() == 1) {
					if (words[i].count(a) || words[i].count(b)) {
						temp += size[i];
					}
				}
				else {
					if (words[i].count(a) && words[i].count(b)) {
						temp += size[i];
					}
				}
			}

			ans = max(temp, ans);
		}
	}

	cout << ans << endl;

}
