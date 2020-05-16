#include<bits/stdc++.h>

using namespace std;

int main(){
	long long int M, N; cin >> N >> M;
	long long int sum = 0, n;
	while(M--){
		cin >> n;
		sum += n;
		if(sum > N){
			cout << -1;
			return 0;
		}
	}
	cout << N - sum;	
	