#include <bits/stdc++.h>
using namespace std;



int main() {
	long long n,k=0,r=0;
	int d[5] = {1,5,10,20,100};
	cin>>n;
	while(n){
	for(int i=4;i>=0;i--){
	if(n>=d[i]){
		k=n/d[i];
		n-=k*d[i];
		break;
	}	
	}
		r+=k;
	}
	cout<<r;
	return 0;
}