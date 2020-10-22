#include <bits/stdc++.h>
using namespace std;

string odio = "I hate ",amor = "I love ";

int main() {
	int n;
	cin>>n;
	if(n==1){
		cout<<odio<<"it";
	}else{
		for(int i=0;i<n;i++){
			if(i==0){
				cout<<odio;
				if(i<(n-1)){
					cout<<"that ";
				}
			}else if(i%2!=0){
				cout<<amor;
				if(i<(n-1)){
					cout<<"that ";
				}
			}else{
				cout<<odio;
				if(i<(n-1)){
					cout<<"that ";
				}
			}
			if(i==(n-1)){
			cout<<"it";
		}
		}
	}

	return 0;
}