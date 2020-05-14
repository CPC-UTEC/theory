#include <bits/stdc++.h>
using namespace std;

int sub(int n){
	if(n%10==0){
		n/=10;
		return n;
	}else{
		n--;
		return n;
	}
}

int main() {
	long int n,k;
	cin>>n>>k;
	while(k--){
		n=sub(n);
	}
	cout<<n<<endl;
	return 0;
}