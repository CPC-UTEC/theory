#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false); 
    cin.tie(NULL);  
	string lec,a,b,c,d,e;
	bool go = false;
	cin>>lec>>a>>b>>c>>d>>e;
	if(lec[0]==a[0] || lec[1]==a[1]){
		go = true;
	}else if(lec[0]==b[0] || lec[1]==b[1]){
		go = true;
	}else if(lec[0]==c[0] || lec[1]==c[1]){
		go = true;
	}else if(lec[0]==d[0] || lec[1]==d[1]){
		go = true;
	}else if(lec[0]==e[0] || lec[1]==e[1]){
		go = true;
	}
	if(go) cout<<"YES"<<"\n";
	else cout<<"NO"<<"\n";
	return 0;
}