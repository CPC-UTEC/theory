#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long a,b,c,x,y,z,w;
    cin>>x>>y>>z>>w;
    long long abc = (x+y+z+w)/3;
    if(x==abc){
        cout<<abc-y<<" "<<abc-z<<" "<<abc-w<<endl;
    }else if(z==abc){
        cout<<abc-y<<" "<<abc-x<<" "<<abc-w<<endl;
    }else if(y==abc){
        cout<<abc-z<<" "<<abc-x<<" "<<abc-w<<endl;
    }else if(w==abc){
        cout<<abc-y<<" "<<abc-x<<" "<<abc-z<<endl;
    }
    return 0;
}