#include <bits/stdc++.h>
using namespace std;
 
int main(){
	string a, b;
	string a1 = "", b1 = "";
	cin >> a >> b;
	for(auto i:a)
		a1 += tolower(i);
	for(auto i:b)
		b1 += tolower(i);
	
	if(a1 < b1)
		cout << -1;
	else if(a1 > b1)
		cout << 1;
	else
		cout << 0;
	
}