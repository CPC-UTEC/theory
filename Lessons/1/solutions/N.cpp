#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,t=0;
	cin>>n;
	for(int i=1;i<n;i++){
		if((n-i)%i==0){
			t++;
		}
	}
	cout<<t;
	
	
	return 0;
}