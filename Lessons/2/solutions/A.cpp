#include <bits/stdc++.h>
using namespace std;
 
int main(){
	map<string, int> ex;
	int n; cin >> n;
	string st;
	while(n--){
		cin >> st;
		ex[st]++;
		if(ex[st] > 1)
			cout << "YES\n";
		else
			cout << "NO\n";
	}
 
	return 0;
}