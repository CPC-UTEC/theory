#include <bits/stdc++.h>
using namespace std;



int main() {
	int n;
	cin>>n;
	if(n==1||n==2) cout<<"1\n"<<"1";
	else if(n==3) cout<<"2\n"<<"1 3";
	else{ cout<<n<<"\n";
		for(int i = 3;i<=n;i+=2) cout<<i<<" ";
		cout<<"1 ";
		if(n%2==0)for(int i=n;i>=2;i-=2)cout<<i<<" ";
		else for(int i=(n-1);i>=2;i-=2)cout<<i<<" ";
	}
	
	return 0;
}