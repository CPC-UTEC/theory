#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int t; cin >> t;
	while(t--){
		int ope=0;
		int a, b, aux;
		cin >> a >> b;
		while(a != b){
			if(a > b){
				aux = a - b;
				if(aux % 2) aux++;
				a -= aux;
			}else{
				if(a < b){
					aux = b - a;
					if(aux % 2 == 0) aux--;
					a += aux;
				}
			}
			ope++;
		}
		cout << ope << "\n";
	}
	return 0;
}