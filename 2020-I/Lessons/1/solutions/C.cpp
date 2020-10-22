#include<bits/stdc++.h>

using namespace std;

int main(){  
    bool chequeo[3002],go;
	int n,a,b;
    while(cin>>n){
        go=true; 
        for(int i=0;i<n;i++) chequeo[i]=0;
        cin>>a;
        for(int i=1;i<n;i++){
            cin>>b;
            if(a==b || chequeo[abs(b-a)] || abs(b-a)>=n) go=false;
            else chequeo[abs(b-a)]=1;
            a=b;
        }
        if(go) cout<<"Jolly"<<endl;
        else cout<<"Not jolly"<<endl;
    }
    
}