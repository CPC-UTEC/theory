#include<bits/stdc++.h>

using namespace std;

int main(){
	int n; cin >> n;
	int res = n;
	
	for(int i=2; i*i <= n; i++){
		for(int j=i; j <= n/i; j++){
			if(i*j <= n)
				res++;
		}
	}
	
	cout << res ;
	return 0;
}