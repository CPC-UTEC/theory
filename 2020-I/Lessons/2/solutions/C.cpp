#include <bits/stdc++.h>
using namespace std;
 
int main(){
	string a;
	getline(cin, a);
	map<char, int> V;
	V['a']++;
	V['e']++;
	V['i']++;
	V['o']++;
	V['u']++;
	int conSi = 0;
	for(auto i:a){
		if(V[i])
			conSi++;
	}
	if(conSi != 5)	{cout << "NO"; return 0;}
	
	getline(cin, a);
	conSi = 0;
	for(auto i:a){
		if(V[i])
			conSi++;
	}
	if(conSi != 7)	{cout << "NO"; return 0;}
	
	getline(cin, a);
	conSi = 0;
	for(auto i:a){
		if(V[i])
			conSi++;
	}
	if(conSi != 5)	cout << "NO"; 
	else cout << "YES";
	return 0;
}