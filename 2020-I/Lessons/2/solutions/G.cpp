#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, k;
	cin >> n >> k;
	vector<int> a(k);
	for(int i=0; i<k; i++)
		cin >> a[i];
	
	vector<int> v(n);
	iota(v.begin(), v.end(), 1);
    
    int z = 0; int mem = 0;
    
    while(z != k) {
        cout << *(v.begin() + (a[z] + mem) % (n - z)) << " ";
        v.erase(v.begin() + (a[z] + mem) % (n - z));
        mem = (a[z] + mem) % (n - z);
        z++;
    }   
    
	return 0;
}