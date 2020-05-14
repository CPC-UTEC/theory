#include <bits/stdc++.h>
using namespace std;
 
int main(){
	int n; cin >> n;
	map< pair<string, string>, int > M;
	string a, b;
	while(n--){
		cin >> a >> b;
		M[make_pair(a, b)]++;
	}
	cout << M.size();
	
	
	return 0;
}