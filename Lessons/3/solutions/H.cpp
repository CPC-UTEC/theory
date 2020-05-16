#include <bits/stdc++.h>
 
#define f(i,a,b) for( ll i = a; i < b ; i++ ) 
#define af(i,a,b) for( ll i = a; i >= b ; i--)
#define rep(i,a,b,k) for(ll i = a; i < b ; i+= k )
#define arep(i,a,b,k) for( ll i = a; i >= b ; i-= k)
#define ones(x) (ll) __builtin_popcount(x)
#define fs first
#define sc second
#define pb push_back
#define po pop_back
#define mp make_pair
#define sz(a) (ll) a.size()
#define all(a) a.begin(), a.end()
#define sor(a) sort( a.begin(), a.end() )
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)
#define ller ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
using namespace std;
 
typedef long long ll;
typedef long double ld;
typedef pair<ll,ll> ii ;
typedef vector<ll>  vi ;
typedef vector<ii> vii ;
 
const ll MAX = 100000;
const ll inf = 5e18;

int main() {
	fastio;
	ll n;
    cin>>n;
    vector<ll> ans(n);
    f(i,1,n){
        ll x;
        cin >> x;
        ans[x-1]++;
    }
    f(i,0,n){
        cout << ans[i] << endl;
    }
return 0;
}