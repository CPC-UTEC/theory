#include <bits/stdc++.h>
using namespace std;

int main()
{
	int a[1000005];
    int x, casos, n;
    cin>>casos;
    while(casos--)
    {
        cin>>n;
        for(int i = 1; i <= n; i++) cin>>a[i];
        set<int> guar;
        int res = 1;
        guar.insert(a[1]);
        x = 1;
        for(int i = 2; i <= n; i++)
        {
            while(guar.find(a[i]) != guar.end())
            {
                guar.erase(a[x++]);
            }
            guar.insert(a[i]);
            res = max(res, i - x + 1);
        }
        cout<<res<<"\n";
    }
    return 0;
}