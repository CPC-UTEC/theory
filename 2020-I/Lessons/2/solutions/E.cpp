#include <bits/stdc++.h>
using namespace std;
 
int main(){
	int n, m;
	cin >> n >> m;
	vector<string> V1(n);
	vector<string> V2(n);
	string a, b;
	for(int i=0; i<n; i++)
		cin >> V1[i] >> V2[i];
		
	for(int i=0; i<m; i++){
		cin >> a >> b;
		b = b.substr(0, b.size()-1);
		string last;
		for(int i=0; i<n; i++){
			if(V2[i] == b){
				last = V1[i];
				break;
			}
		}
		cout << a << " " << b << "; #" << last << "\n";
	}
	
	
	return 0;
}