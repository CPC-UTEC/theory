#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,i,ss[5000],t[5000],u[5000];
	int x=0,x2=0,x3=0,minerva;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++) cin>>arr[i];
    for(i=0;i<n;i++){
        if(arr[i]==1){
            ss[x]=i+1;
            x++;
        }
        else if(arr[i]==2){
            t[x2]=i+1;
            x2++;
        }
        else if(arr[i]==3){
            u[x3]=i+1;
            x3++;
        }
    }
    minerva=min(x,min(x2,x3));
    cout<<minerva<<"\n";
    for(x=0,x2=0,x3=0;x<minerva,x2<minerva,x3<minerva;x++,x2++,x3++){
      cout<<ss[x]<<" "<<t[x2]<<" "<<u[x3]<<"\n";
    }


    return 0;
}